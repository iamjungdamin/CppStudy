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

// Test c{ 1 };

int main()
{
	cout << "���� ����" << endl;
	{
		static Test d{ 1 };
	}
	cout << "���� ��" << endl;
}
