#include <iostream>
using namespace std;

class String {
	int num;
	char* p;

public:
	String() {
		num = 0;
		p = nullptr;
	}

	String(const char* s) {
		num = strlen(s);
		p = new char[num];
		for (int i = 0; i < num; ++i) {
			p[i] = s[i];
		}
	}

	~String() {
		delete[] p;
	}

	String operator+(const String& rhs) const {
		String temp;
		temp.num = num + rhs.num;
		temp.p = new char[temp.num];

		for (int i = 0; i < num; ++i) {
			temp.p[i] = p[i];
		}
		for (int i = 0; i < rhs.num; ++i) {
			temp.p[num + i] = rhs.p[i];
		}

		return temp;
	}

	friend ostream& operator<<(ostream&, const String&);
};

ostream& operator<<(ostream& os, const String& s) {
	for (int i = 0; i < s.num; ++i) {
		os << s.p[i];
	}
	return os;
}


int main()
{
	String a{ "123" };		// [3][p] -> [1][2][3]
	String b{ "4567890" };	// [7][p] -> [4][5][6][7][8][9][0]
	String c = a + b;

	cout << c << endl;
}


