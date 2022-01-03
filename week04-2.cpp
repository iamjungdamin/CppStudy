// ����
// 1���� 10����: �������� ascending order
// 10���� 1����: �������� descending order

#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

default_random_engine dre{ 2020 };
uniform_int_distribution<> uid{ 0, 100'000 };

int main()
{
	int a[10000];

	for (int& num : a) {
		num = uid(dre);
	}

	size_t num = sizeof(a) / sizeof(int);

	for (int j = 0; j < num - 1; ++j) {
		for (int i = 0; i < num - 1 - j; ++i) {
			if (a[i] > a[i + 1]) {
				//int temp{ a[i] };
				//a[i] = a[i + 1];
				//a[i + 1] = temp;
				swap(a[i], a[i + 1]);
			}
		}
	}

	//sort(begin(a), end(a), [](int a, int b) {
	//	return a > b;
	//	} );

	cout << "���� �� " << endl;
	for (int n : a) {
		cout << n << ' ';
	}
	cout << endl;
}


// 1. a�� �� �߿��� ���� ū ���� ���� ���������� �̵��ǰ� �϶�


// 2. a�� ������������ �����϶�
// n��° ������ ������ �������� n���� ���Ҵ� �̹� ���ĵ� �����̹Ƿ�
// ������ (num - n)���� ���Ҹ� �����ϸ� ��


// 3. a�� ������ 1������ �ʱ�ȭ�ϰ� ������������ �����϶�


// 4. algorithm ����� sort�� ����غ���
// 4-2. ������������ �����غ���


// 3-2. ǥ�� �Լ� swap()�� ����غ���
// �Լ� ȣ�⿡�� ����� ��� (cost of function call)
// ���� �Լ� ȣ��x, �����Ϸ��� �Լ��� ������ ���´� = �Լ��� inline �Ѵ�

