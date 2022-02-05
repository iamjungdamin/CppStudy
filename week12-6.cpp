#include <iostream>
using namespace std;

class Animal {
	int a;

public:
	virtual void move() {
		cout << "Animal�� move()" << endl;
	}
};

class Dog : public Animal {
	int d;

public:
	void move() {
		cout << "Dog�� move()" << endl;
	}
};

int main()
{
	Animal a;	// [v][a]
	Dog d;		// [v][a][d]

	cout << "Animal�� ũ�� - " << sizeof(Animal) << endl;
	cout << "Dog�� ũ�� - " << sizeof(Dog) << endl;

	Animal* pa = &d;
	pa->move();
}


// C++���� �������� �����ϴ� �ٽ� Ű���� virtual
// ��¥ �Լ��� ã�Ƽ� ȣ���ϰ� �ʹٸ� �Լ� �տ� virtual�� ���δ�
// ��������� ��� ��ü���� ������ �ϳ��� �߰��ȴ�


