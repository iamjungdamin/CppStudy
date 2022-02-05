#include <iostream>
using namespace std;

class Animal {
public:
	virtual void move() {
		cout << "Animal�� move()" << endl;
	}
};

class Dog : public Animal {
public:
	void move() {
		cout << "Dog�� move()" << endl;
	}
};

class Bird : public Animal {
public:
	void move() {
		cout << "Bird�� move()" << endl;
	}
};

int main()
{
	Dog dog;
	Bird bird;

	dog.move();
	bird.move();
	// �̰� ������ x

	Animal* animals[2];

	animals[0] = &dog;
	animals[1] = &bird;

	for (Animal* a : animals) {
		a->move();
	}
	// ������ o
}


// vptr: virtual table�� ����Ű�� pointer
// virtual table -> code segment -> �Լ�

