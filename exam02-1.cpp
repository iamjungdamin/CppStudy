// [����1] ���� �ڵ尡 �ּ��� ������� ����ǵ��� �ڷ����� �����϶� (30)

// TimeMonster�� ��ǻ�Ϳ� ��� �ִ� ���� �� �ϳ���, �޸𸮸� �����ϸ� ���� �ð����� ��ǻ�͸� ������Ų��

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
		cout << "TimeMonster - �ý��� ����: " << num << "ms" << endl;
		this_thread::sleep_for(chrono::milliseconds{ num });
	}
};

int main()
{
	TimeMonster tm;
	// �޸𸮸� num ����Ʈ Ȯ���� �� �ý����� num �и��� ������Ű�� ���� ����

	tm.special();
	// ȭ�鿡 num �и��� �������� ����ϰ� �ý����� ������Ų��

	// ȭ�� ��� ����
	// TimeMonster - �ý��� ����: 532ms
}

