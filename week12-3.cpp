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
};

class Bird : public Animal {
public:
	Bird(string s) : Animal{ s } {
	}
};

int main()
{
	Dog dog{ "�����" };
	Bird bird{ "±±��" };

	dog.move();		// ����̰� �����δ�
	bird.move();	// ±±�̰� �����δ�
}


// Animal�� �̸��� �ְ�, move() �� �� �ִ�.
// Dog�� Animal�̰�, Bird�� Animal�̴�.

