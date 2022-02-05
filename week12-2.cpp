#include <iostream>
using namespace std;

class Animal {
protected:
	int animalNum;

public:
	Animal() {
		cout << "Animal ����" << endl;
	}

	~Animal() {
		cout << "Animal �Ҹ�" << endl;
	}
};

class Dog : public Animal {
	int dogNum;

public:
	Dog(int a, int d) {
		cout << "Dog ����" << endl;
		animalNum = a;
		dogNum = d;
	}

	~Dog() {
		cout << "Dog �Ҹ�" << endl;
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


// 1. dog - 123, 456 �� ��µǵ��� �غ���


// 2. ������ �Ҹ��� �����غ���

