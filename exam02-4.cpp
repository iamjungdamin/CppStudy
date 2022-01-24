// [����4] TimeMonster ��ü 10���� �迭(monsters)�� �����Ͽ���
// monsters�� �ý��� ���� �ð� ���� ������������ ������ �� ������ special ����Լ��� ȣ���϶� (20)

// [����5] ����4�� ��� ������� �������� �������� �����ϰ� ���� (10) ����� �ذ��ϱ� ���� �ڵ带 �߰��϶� (20)
//		   sort �ȿ��� swap�ϴ� �κп��� dangling pointer ���� �߻� -> ���� �Ҵ� ������

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
		cout << "TimeMonster - �ý��� ����: " << num << "ms" << endl;
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

