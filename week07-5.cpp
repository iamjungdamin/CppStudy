#include <iostream>
#include <string>
using namespace std;

struct Dog {
	int age;
	string name;

	Dog() {
		cout << "Dog를 디폴트 생성하였다" << endl;
	}

	~Dog() {
		cout << "Dog가 소멸되었다" << endl;
	}
};

//Dog dog;

int main()
{
	cout << "메인 시작" << endl;
	
	{
		Dog dog;	// 이 순간에 Dog() 함수가 반드시 호출된다
	}
	
	cout << "메인 끝" << endl;
}


// 지역 객체, 전역 객체
