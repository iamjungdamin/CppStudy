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

	// pre-increment
	INT& operator++() {
		++num;
		return *this;
	}

	// post-increment
	const INT operator++(int) {
		INT temp(*this);
		++(*this);
		return temp;
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
	
	cout << ++ ++a << endl;	//pre-increment
	//cout << (a.operator++()).operator++() << endl;

	cout << a++ << endl;	//post-increment
	//cout << a.operator++(int) << endl;
	cout << a << endl;
}

