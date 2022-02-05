#include <iostream>
#include <random>
using namespace std;

class Animal {
public:
	virtual void move() const = 0;
};

class Dog : public Animal {
public:
	virtual void move() const override {
		cout << "���� �޸���" << endl;
	}
};

class Bird : public Animal {
public:
	virtual void move() const override {
		cout << "���� ����" << endl;
	}
};

default_random_engine dre;
uniform_int_distribution<> uid{ 0, 1 };

int main()
{
	while (true) {
		cout << "�� ������ �����ұ��? ";
		int num;
		cin >> num;

		Animal** animals = new Animal * [num];

		for (int i = 0; i < num; ++i) {
			if (uid(dre) == 1) {
				animals[i] = new Dog;
			}
			else {
				animals[i] = new Bird;
			}
		}

		for (int i = 0; i < num; ++i) {
			animals[i]->move();
		}

		for (int i = 0; i < num; ++i) {
			delete animals[i];
		}
		delete[] animals;
	}
}


// 1. ���� �� ������ �������� �Է¹޴´�


// 2. Dog Ȥ�� Bird�� �Է¹�����ŭ �����Ѵ�


// 3. ��� ������ move()�� �����Ѵ�


// 4. ���� ������ �ݺ��Ѵ�

