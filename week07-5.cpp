#include <iostream>
#include <string>
using namespace std;

struct Dog {
	int age;
	string name;

	Dog() {
		cout << "Dog�� ����Ʈ �����Ͽ���" << endl;
	}

	~Dog() {
		cout << "Dog�� �Ҹ�Ǿ���" << endl;
	}
};

//Dog dog;

int main()
{
	cout << "���� ����" << endl;
	
	{
		Dog dog;	// �� ������ Dog() �Լ��� �ݵ�� ȣ��ȴ�
	}
	
	cout << "���� ��" << endl;
}


// ���� ��ü, ���� ��ü
