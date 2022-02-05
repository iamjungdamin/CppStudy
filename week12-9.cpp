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
		cout << "개가 달린다" << endl;
	}
};

class Bird : public Animal {
public:
	virtual void move() const override {
		cout << "새가 난다" << endl;
	}
};

default_random_engine dre;
uniform_int_distribution<> uid{ 0, 1 };

int main()
{
	while (true) {
		cout << "몇 마리를 생성할까요? ";
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


// 1. 동물 몇 마리를 생성할지 입력받는다


// 2. Dog 혹은 Bird를 입력받은만큼 생성한다


// 3. 모든 동물의 move()를 실행한다


// 4. 위의 과정을 반복한다

