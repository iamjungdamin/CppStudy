// ������ �����ε�

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


// 3. �����ڸ� ����Լ��� ���� (o)

