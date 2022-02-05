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
		cout << name << "가 움직인다" << endl;
	}
};

class Dog : public Animal {
public:
	Dog(string s) : Animal{ s } {
	}

	void move() {
		cout << name << "가 뛴다" << endl;
	}
};

class Bird : public Animal {
public:
	Bird(string s) : Animal{ s } {
	}

	void move() {
		cout << name << "가 난다" << endl;
	}
};

int main()
{
	Dog dog{ "댕댕이" };
	Bird bird{ "짹짹이" };

	dog.move();		// 댕댕이가 뛴다
	bird.move();	// 짹짹이가 난다
}


// 부모와 같은 형식의 함수를 overriding


// 다형성
// 단일명령 One interface - 다중행동 Multiple behavior
// 다수의 서로 다른 객체를 하나로 묶어 관리할 수 있어야 한다
// (아직 다형성 x)

