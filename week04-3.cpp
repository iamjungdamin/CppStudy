// �̸� ���� �Լ� ���� lambda

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	[]() {
		cout << "�ȳ�? �� ���ٶ�� ��!" << endl;
	}();

	char str[]{ "C++ is a nice programming language" };
	cout << str << endl;

	//sort(begin(str), end(str) - 1);
	sort(begin(str), end(str), [](char a, char b) {
		return a > b;
		} );
	cout << "���� �� " << endl;
	cout << str << endl;
}


// sort()�� �������� ������ ����Ʈ
// �������� ������ �غ���
// ȣ���� �ʿ䰡 ���� �Լ� ����
