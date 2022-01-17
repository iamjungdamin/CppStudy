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

// Test c{ 1 };

int main()
{
	cout << "메인 시작" << endl;
	{
		static Test d{ 1 };
	}
	cout << "메인 끝" << endl;
}
