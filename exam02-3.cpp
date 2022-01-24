// [����3] ������� �Է��� �޾� TimeMonster�� ������ ����� �� TimeMonster�� special ����Լ��� ȣ���϶� (20)

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

		TimeMonster tm1;
		TimeMonster tm2 = tm1;
	}

	cout << "TimeMonster ��ü�� �� �� ������? ";
	int num;
	cin >> num;

	TimeMonster* p = new TimeMonster[num];

	for (int i = 0; i < num; ++i) {
		p[i].special();
	}

	delete[] p;

	// ȭ�� ��� ����
	// TimeMonster ��ü�� �� �� ������? 3
	// TimeMonster - �ý��� ����: 837ms
	// TimeMonster - �ý��� ����: 731ms
	// TimeMonster - �ý��� ����: 427ms
}

