// 연산자 오버로딩

#include <iostream>
using namespace std;

class INT {
	int num{ 0 };

public:
	INT() = default;

	INT(int n) : num{ n } {

	}

	int getNum() const {
		return num;
	}

	void show() const {
		cout << num << endl;
	}
};

INT operator+(const INT&, const INT&);

INT operator+(const INT& lhs, const INT& rhs) {
	return INT{ lhs.getNum() + rhs.getNum() };
}

int main()
{
	INT a{ };
	INT b{ 3 };

	//INT c = a + b + b + b;
	INT c = INT(INT(INT(a + b) + b) + b);

	c.show();
}


// 1. int와 유사하게 동작하는 class INT를 만들어보자


// + 이항 연산자 binary operator
// ++ 단항 연산자 unary operator


// 2. 연산자를 전역함수로 구현 (x)


