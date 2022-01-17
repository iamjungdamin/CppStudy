#include <iostream>
using namespace std;

struct Point3D {
	float x;
	float y;
	float z;
};

struct Dog {
	int age;
	Point3D vertex[1000];

	Dog(int a) : age{ a } {
		cout << "���� - " << age << endl;
	}

	~Dog() {
		cout << "�Ҹ� - " << age << endl;
	}

	Dog(const Dog& other) : age{ other.age } {
		cout << "��������� - " << age << endl;
	}

	void show() const {
		cout << "Dog - " << age << endl;
	}
};

int main()
{
	Dog dogs[3]{ 1, 2, 3 };

	cout << "********************" << endl;
	for (const Dog& dog : dogs) {
		dog.show();
	}
	cout << "********************" << endl;
}


// 1. Dog�� ������ �Ҹ��� �����϶� (������ �Ҹ��� ¦�� �´���)


// for���� �Ʒ��� ���� ������
//for (int i = 0; i < 3; ++i) {
//	Dog dog = dogs[i];
//	dog.show();
//}
// for�� �ȿ��� ���� �����Ǳ� ������ ������ ������ �Ҹ��


// Dog& dog �ϸ� �������� ����
// but �������� �Ҽ�����, �ջ� ����


// const Dog& dog �ϸ� �б� ���
// const �Լ��� ��� ����
// const-qualifier

