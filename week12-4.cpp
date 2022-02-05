#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string name;

public:
	Animal(string s) : name{ s } {

	}

	void move() {
		cout << name << "�� �����δ�" << endl;
	}
};

class Dog : public Animal {
public:
	Dog(string s) : Animal{ s } {
	}

	void move() {
		cout << name << "�� �ڴ�" << endl;
	}
};

class Bird : public Animal {
public:
	Bird(string s) : Animal{ s } {
	}

	void move() {
		cout << name << "�� ����" << endl;
	}
};

int main()
{
	Dog dog{ "�����" };
	Bird bird{ "±±��" };

	dog.move();		// ����̰� �ڴ�
	bird.move();	// ±±�̰� ����
}


// �θ�� ���� ������ �Լ��� overriding


// ������
// ���ϸ�� One interface - �����ൿ Multiple behavior
// �ټ��� ���� �ٸ� ��ü�� �ϳ��� ���� ������ �� �־�� �Ѵ�
// (���� ������ x)

