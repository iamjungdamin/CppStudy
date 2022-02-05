#include <iostream>
using namespace std;

class Animal {
	int a;

public:
	virtual void move() {
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
	Animal a;	// [v][a]
	Dog d;		// [v][a][d]

	cout << "Animal의 크기 - " << sizeof(Animal) << endl;
	cout << "Dog의 크기 - " << sizeof(Dog) << endl;

	Animal* pa = &d;
	pa->move();
}


// C++에서 다형성을 구현하는 핵심 키워드 virtual
// 진짜 함수를 찾아서 호출하고 싶다면 함수 앞에 virtual을 붙인다
// 만들어지는 모든 객체마다 포인터 하나가 추가된다


