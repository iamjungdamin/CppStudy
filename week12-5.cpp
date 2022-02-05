#include <iostream>
using namespace std;

class Animal {
	int a;

public:
	void move() {
		cout << "Animal의 move()" << endl;
	}
};

class Dog : public Animal {
	int d;

public:
	void move() {
		cout << "Dog의 move()" << endl;
	}
};

int main()
{
	Animal a;	// [a]
	Dog d;		// [a][d]

	a.move();
	d.move();

	cout << "Animal의 메모리 크기 - " << sizeof(Animal) << endl;
	cout << "Dog의 메모리 크기 - " << sizeof(Dog) << endl;

	Dog* pd = &d;
	pd->move();

	Animal* pa = &d;
	pa->move();
}


// sizeof( Animal ) <= sizeof( Dog )
// 상속관계에서 언제나 참
// Dog의 메모리에는 Animal의 메모리가 포함된다


// 부모인 Animal 포인터로 자식인 Dog을 가리킨다
// Animal의 모든 자식 객체들을 Animal* 로 가리킬 수 있다
