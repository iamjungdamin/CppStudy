// [문제3] 사용자의 입력을 받아 TimeMonster를 여러개 만들고 각 TimeMonster의 special 멤버함수를 호출하라 (20)

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

		TimeMonster tm1;
		TimeMonster tm2 = tm1;
	}

	cout << "TimeMonster 객체를 몇 개 만들까요? ";
	int num;
	cin >> num;

	TimeMonster* p = new TimeMonster[num];

	for (int i = 0; i < num; ++i) {
		p[i].special();
	}

	delete[] p;

	// 화면 출력 예시
	// TimeMonster 객체를 몇 개 만들까요? 3
	// TimeMonster - 시스템 정지: 837ms
	// TimeMonster - 시스템 정지: 731ms
	// TimeMonster - 시스템 정지: 427ms
}

