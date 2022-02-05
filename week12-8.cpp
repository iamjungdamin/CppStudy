#include <iostream>
using namespace std;

class Animal {
public:
	virtual void move() {
		cout << "Animal - move()" << endl;
	}

	virtual void x() {
		cout << "Animal - x()" << endl;
	}
};

class Dog : public Animal {
public:
	void move() {
		cout << "Dog - move()" << endl;
	}

	void x() {
		cout << "Dog - x()" << endl;
	}
};

int main()
{
	// �Լ��� CODE segment�� �ִ�
	cout << "main �Լ��� ���� - " << &main << endl;

	Dog dog;
	// move�� virtual�̹Ƿ� vptr�� ����� �߰��ȴ�
	// �׷��� dog�� ũ��� 4����Ʈ�̴�

	int* p = (int*)&dog;
	cout << "vtbl�� �ּ� - " << (void*)(*p) << endl;

	int* pp = (int*)(*p);
	cout << "vtbl�� ��ϵ� move �Լ��� �ּ� - " << (void*)(*pp) << endl;

	void (*fp) () = (void (*) ())(*pp);
	fp();

	pp++;
	fp = (void (*) ())(*pp);
	fp();

}





