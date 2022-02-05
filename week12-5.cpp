#include <iostream>
using namespace std;

class Animal {
	int a;

public:
	void move() {
		cout << "Animal�� move()" << endl;
	}
};

class Dog : public Animal {
	int d;

public:
	void move() {
		cout << "Dog�� move()" << endl;
	}
};

int main()
{
	Animal a;	// [a]
	Dog d;		// [a][d]

	a.move();
	d.move();

	cout << "Animal�� �޸� ũ�� - " << sizeof(Animal) << endl;
	cout << "Dog�� �޸� ũ�� - " << sizeof(Dog) << endl;

	Dog* pd = &d;
	pd->move();

	Animal* pa = &d;
	pa->move();
}


// sizeof( Animal ) <= sizeof( Dog )
// ��Ӱ��迡�� ������ ��
// Dog�� �޸𸮿��� Animal�� �޸𸮰� ���Եȴ�


// �θ��� Animal �����ͷ� �ڽ��� Dog�� ����Ų��
// Animal�� ��� �ڽ� ��ü���� Animal* �� ����ų �� �ִ�
