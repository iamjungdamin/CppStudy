// �޸� ����
// DATA segment, STACK segment, HEAP (Free Store)

#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

default_random_engine dre;
uniform_int_distribution<int> uid{ 'a', 'z' };

int main()
{
	char c[1'000'000];

	for (char& c : c) {
		c = uid(dre);
	}

	sort(begin(c), end(c), [](char a, char b) {
		return a > b;
		} );

	cout << c[0] << endl;
	cout << c[sizeof(c) - 1] << endl;
}


// 1. ������ �ҹ��� 100���� �����ϰ� ������������ �����Ͽ� ����϶�


// 2. ���������� �� ������ ������ �� ������?
// c�� ���������̰� STACK�� �����ȴ� STACK�� ũ��� �ִ� 1MB�̴�


