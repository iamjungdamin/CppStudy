// [문제4] TimeMonster 객체 10개를 배열(monsters)로 생성하였다
// monsters를 시스템 정지 시간 기준 오름차순으로 정렬한 후 각각의 special 멤버함수를 호출하라 (20)

// [문제5] 문제4의 출력 결과에서 문제점이 무엇인지 간단하게 적고 (10) 제대로 해결하기 위한 코드를 추가하라 (20)
//		   sort 안에서 swap하는 부분에서 dangling pointer 문제 발생 -> 복사 할당 연산자

#include <iostream>
#include <random>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;

default_random_engine dre;
uniform_int_distribution<> uid{ 10, 1000 };

class TimeMonster {
	int num;
	char* p;

public:
	TimeMonster() {
		num = uid(dre);
		p = new char[num];
	}

	~TimeMonster() {
		delete[] p;
	}

	TimeMonster(const TimeMonster& other) : num{ other.num }, p{ new char[num] } {

	}

	TimeMonster& operator= (const TimeMonster& other) {
		if (this == &other) {
			return *this;
		}

		num = other.num;
		delete[] p;
		p = new char[num];
		return *this;
	}

	void special() const {
		cout << "TimeMonster - 시스템 정지: " << num << "ms" << endl;
		this_thread::sleep_for(chrono::milliseconds{ num });
	}

	int getNum() const {
		return num;
	}
};

int main()
{
	TimeMonster monsters[10];

	sort(begin(monsters), end(monsters), [](TimeMonster& a, TimeMonster& b) {
		return a.getNum() < b.getNum();
		} );

	for (const TimeMonster& m : monsters) {
		m.special();
	}
}

