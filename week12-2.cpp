#include <iostream>
using namespace std;

class Animal {
protected:
	int animalNum;

public:
	Animal() {
		cout << "Animal 생성" << endl;
	}

	~Animal() {
		cout << "Animal 소멸" << endl;
	}
};

class Dog : public Animal {
	int dogNum;

public:
	Dog(int a, int d) {
		cout << "Dog 생성" << endl;
		animalNum = a;
		dogNum = d;
	}

	~Dog() {
		cout << "Dog 소멸" << endl;
	}

	friend ostream& operator<<(ostream&, const Dog&);
};

ostream& operator<<(ostream& os, const Dog& dog) {
	cout << "dog - " << dog.animalNum << ", " << dog.dogNum;
	return os;
}

int main()
{
	Dog dog{ 123, 456 };

	cout << dog << endl;
}


// 1. dog - 123, 456 이 출력되도록 해보자


// 2. 생성과 소멸을 관찰해보자

