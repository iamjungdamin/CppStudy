// 연산자 오버로딩

#include <iostream>
using namespace std;

class INT {
	int num{ 0 };

public:
	INT() = default;

	INT(int n) : num{ n } {

	}

	void show() const {
		cout << num << endl;
	}

	INT operator+ (const INT& rhs) const {
		return INT{ num + rhs.num };
	}
};

int main()
{
	INT a{ };
	INT b{ 3 };

	//INT c = a + b + b + b;
	INT c = INT(INT(INT(a + b) + b) + b);

	c.show();
}


// 3. 연산자를 멤버함수로 구현 (o)

