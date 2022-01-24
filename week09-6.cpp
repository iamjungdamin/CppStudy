// ������ �����ε�

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


// 1. int�� �����ϰ� �����ϴ� class INT�� ������


// + ���� ������ binary operator
// ++ ���� ������ unary operator


// 2. �����ڸ� �����Լ��� ���� (x)


