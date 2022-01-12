#include <iostream>
#include <random>
using namespace std;

default_random_engine dre;
uniform_int_distribution<> uid{ 0, 100 };

struct Balloon {
	float x;
	float y;
};

int main()
{
	Balloon balloons[1000];

	for (Balloon& b : balloons) {
		b.x = uid(dre);
		b.y = uid(dre);
	}

	int cnt{};

	for (Balloon b : balloons) {
		float dx = b.x - 50;
		float dy = b.y - 50;
		
		if (sqrt(dx * dx + dy * dy) <= 20.0) {
			cout << "ǳ��(" << b.x << "," << b.y << ")" << endl;

			++cnt;
		}
	}

	cout << "��� " << cnt << "���� ǳ���� ������" << endl;
}


// 1. ǳ�� 100���� �����Ѵ�


// 2. ǳ���� x, y ���� [0, 100] ������ ���������� �����Ѵ�


// 3. ��ġ (50, 50)���� �ݰ� 20�� ������ ��ġ�� ��ź�� ������
// ��ź�� ����ǿ� �ִ� ǳ���� ������, ������� ǳ���� ������ ����϶�


// 4. ��ü ǳ���� ������ 1000���� �ٲ㺸��


// for (const Balloon& b : balloons)
// const (�б� ����), & (�������� ����)

