#include <iostream>
using namespace std;

struct Test {
	int n;

	Test() : n{ -1 } {
		cout << "����Ʈ ����" << endl;
	}

	Test(int n) : n{ n } {
		cout << "Test(int) ����" << endl;
	}

	~Test() {
		cout << "Test �Ҹ� - " << n << endl;
	}

	void show() {
		cout << "Test::show() - " << n << endl;
	}
};

int main()
{
	cout << "���� ����" << endl;

	Test a;
	a.show();

	Test b{ 123 };
	b.show();

	(Test{ 456 }).show();

	cout << "���� ��" << endl;
}


// 1. -1�� 123�� ��µǵ��� �غ���


// 2. ��ü�� ������ �Ҹ��� �����غ���

