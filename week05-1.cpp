// ó���ؾ� �� �ڷ��� ���� ���� ��, ��� �ؾ� ȿ�����ϱ�?

#include <iostream>
#include <algorithm>
using namespace std;

bool ��������(char, char);

int main()
{
	char str[]{ "12345" };
	cout << str << endl;

	sort(begin(str), end(str), [](char a, char b) {
		return a > b;
	} );
	cout << str << endl;
}

bool ��������(char a, char b) {	// nlogn
	return a > b;
}


// �Լ� vs ����


// ������ ����: ������, �ڵ� �ζ���ȭ
