// [����2] ���� �ڵ��� ���� ����� ȭ�� ��� ���ÿ� ���� ���� �� �ֵ��� �ʿ��� ����� �߰��϶� (20)

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
		cout << "TimeMonster - �ý��� ����: " << num << "ms" << endl;
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

	// ȭ�� ��� ����
	// TimeMonster - �ý��� ����: 689ms
	// TimeMonster - �ý��� ����: 689ms
}

