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
		cout << name << "°¡ ¿òÁ÷ÀÎ´Ù" << endl;
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
	Dog dog{ "´ó´óÀÌ" };
	Bird bird{ "Â±Â±ÀÌ" };

	dog.move();		// ´ó´óÀÌ°¡ ¿òÁ÷ÀÎ´Ù
	bird.move();	// Â±Â±ÀÌ°¡ ¿òÁ÷ÀÎ´Ù
}


// AnimalÀº ÀÌ¸§ÀÌ ÀÖ°í, move() ÇÒ ¼ö ÀÖ´Ù.
// Dog´Â AnimalÀÌ°í, Birdµµ AnimalÀÌ´Ù.

