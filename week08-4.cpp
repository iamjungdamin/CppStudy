#include <iostream>
using namespace std;

struct Point3D {
	float x;
	float y;
	float z;
};

struct Dog {
	int age;
	Point3D vertex[1000];

	Dog(int a) : age{ a } {
		cout << "생성 - " << age << endl;
	}

	~Dog() {
		cout << "소멸 - " << age << endl;
	}

	Dog(const Dog& other) : age{ other.age } {
		cout << "복사생성자 - " << age << endl;
	}

	void show() const {
		cout << "Dog - " << age << endl;
	}
};

int main()
{
	Dog dogs[3]{ 1, 2, 3 };

	cout << "********************" << endl;
	for (const Dog& dog : dogs) {
		dog.show();
	}
	cout << "********************" << endl;
}


// 1. Dog의 생성과 소멸을 관찰하라 (생성과 소멸의 짝이 맞는지)


// for문은 아래와 같이 동작함
//for (int i = 0; i < 3; ++i) {
//	Dog dog = dogs[i];
//	dog.show();
//}
// for문 안에서 복사 생성되기 때문에 지역이 끝나면 소멸됨


// Dog& dog 하면 복사하지 않음
// but 원격조작 할수있음, 손상 위험


// const Dog& dog 하면 읽기 모드
// const 함수만 사용 가능
// const-qualifier

