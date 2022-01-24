// [문제2] 다음 코드의 실행 결과가 화면 출력 예시와 같이 나올 수 있도록 필요한 멤버를 추가하라 (20)

#include <iostream>
#include <random>
#include <thread>
#include <chrono>
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

	void special() const {
		cout << "TimeMonster - 시스템 정지: " << num << "ms" << endl;
		this_thread::sleep_for(chrono::milliseconds{ num });
	}
};

int main()
{
	{
		TimeMonster tm;
	}

	TimeMonster tm1;
	TimeMonster tm2 = tm1;

	tm1.special();
	tm2.special();

	// 화면 출력 예시
	// TimeMonster - 시스템 정지: 689ms
	// TimeMonster - 시스템 정지: 689ms
}

