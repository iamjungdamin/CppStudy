#include <iostream>
#include <string>
using namespace std;

struct Dog {
	int age{ 3 };
	string name{ "코코" };

	Dog() = default;

	Dog(int age, string name) : age{ age }, name{ name } {
	}

	Dog(string name, int age) : age{ age }, name{ name } {
	}
};

int main()
{
	Dog dog1{ 1, "댕댕이" };
	cout << dog1.age << ", " << dog1.name << endl;

	Dog dog2{ "초코", 2 };
	cout << dog2.age << ", " << dog2.name << endl;

	Dog dog3;
	cout << dog3.age << ", " << dog3.name << endl;
}


// 사용자가 정의한 자료형의 객체(Object)를 초기화해보자

