// [문제1] 다음 코드가 주석에 적은대로 실행되도록 자료형을 정의하라 (30)

// TimeMonster는 컴퓨터에 살고 있는 몬스터 중 하나로, 메모리를 차지하며 일정 시간동안 컴퓨터를 정지시킨다

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

	void special() const {
		cout << "TimeMonster - 시스템 정지: " << num << "ms" << endl;
		this_thread::sleep_for(chrono::milliseconds{ num });
	}
};

int main()
{
	TimeMonster tm;
	// 메모리를 num 바이트 확보한 후 시스템을 num 밀리초 정지시키는 몬스터 생성

	tm.special();
	// 화면에 num 밀리초 정지됨을 출력하고 시스템을 정지시킨다

	// 화면 출력 예시
	// TimeMonster - 시스템 정지: 532ms
}

