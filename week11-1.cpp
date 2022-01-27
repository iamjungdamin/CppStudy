#include <iostream>
using namespace std;

class INT {
	int num;

public:
	INT(int n) {
		num = n;
	}

	INT operator+(const INT& rhs) const {
		return INT(num + rhs.num);
	}

	friend ostream& operator<<(ostream&, const INT&);
};

ostream& operator<<(ostream& os, const INT& i) {
	os << i.num;
	return os;
}

int main()
{
	INT a = 1;
	INT b = 2;

	//INT c = add(a, b);
	INT c = a + b;

	//INT c = operator+(a, b);	// x
	//INT c = a.operator+(b);	// o

	c = a + b + 100;

	cout << c << endl;

	// operator<<(cout, c)		// o
	// cout.operator<<(c)		// x
}


// 연산자 오버로딩


// 전역함수를 friend로 선언 -> getter 필요 x


// c = a + b + 100
// c = a + b + (INT)100	으로 암시적 형변환

