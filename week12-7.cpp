#include <iostream>
using namespace std;

class Animal {
public:
	virtual void move() {
		cout << "Animal의 move()" << endl;
	}
};

class Dog : public Animal {
public:
	void move() {
		cout << "Dog의 move()" << endl;
	}
};

class Bird : public Animal {
public:
	void move() {
		cout << "Bird의 move()" << endl;
	}
};

int main()
{
	Dog dog;
	Bird bird;

	dog.move();
	bird.move();
	// 이건 다형성 x

	Animal* animals[2];

	animals[0] = &dog;
	animals[1] = &bird;

	for (Animal* a : animals) {
		a->move();
	}
	// 다형성 o
}


// vptr: virtual table을 가리키는 pointer
// virtual table -> code segment -> 함수

