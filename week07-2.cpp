// 사용자 정의 자료형 User-defined Data Type
// struct

#include <iostream>
#include <string>
using namespace std;

struct Dog {
	char age;
	string name;
};

int main()
{
	Dog dog;
	dog.age = '2';
	dog.name = "댕댕이";

	cout << "이름: " << dog.name << ", 나이: " << dog.age << endl;

	cout << sizeof(Dog);
}


// 1. 사용자 정의 자료형을 만들어보자
// struct, class


// 2. 메모리의 크기는 어떻게 정해지는지 알아보자
// sizeof(dog) == 28
// int는 4, string은 24

// char는 1, string은 24
// sizeof(dog) == 28
// padding, 주소가 4 단위여야 속도가 빠름

// alignas(32), alignas(64) 등 가능


// 3. 메모리의 값은 어떻게 초기화하는지 알아보자
// special function
