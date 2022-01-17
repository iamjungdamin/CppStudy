#include <iostream>
using namespace std;

struct Test {
	int n;

	Test() : n{ -1 } {
		cout << "디폴트 생성" << endl;
	}

	Test(int n) : n{ n } {
		cout << "Test(int) 생성" << endl;
	}

	~Test() {
		cout << "Test 소멸 - " << n << endl;
	}

	void show() {
		cout << "Test::show() - " << n << endl;
	}
};

int main()
{
	cout << "메인 시작" << endl;

	Test a;
	a.show();

	Test b{ 123 };
	b.show();

	(Test{ 456 }).show();

	cout << "메인 끝" << endl;
}


// 1. -1과 123이 출력되도록 해보자


// 2. 객체의 생성과 소멸을 관찰해보자

