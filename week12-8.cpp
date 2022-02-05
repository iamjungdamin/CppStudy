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
	// 함수는 CODE segment에 있다
	cout << "main 함수의 번지 - " << &main << endl;

	Dog dog;
	// move가 virtual이므로 vptr이 멤버에 추가된다
	// 그래서 dog의 크기는 4바이트이다

	int* p = (int*)&dog;
	cout << "vtbl의 주소 - " << (void*)(*p) << endl;

	int* pp = (int*)(*p);
	cout << "vtbl에 기록된 move 함수의 주소 - " << (void*)(*pp) << endl;

	void (*fp) () = (void (*) ())(*pp);
	fp();

	pp++;
	fp = (void (*) ())(*pp);
	fp();

}





