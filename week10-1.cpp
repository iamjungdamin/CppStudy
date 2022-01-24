#include <iostream>
using namespace std;

class INT {
	int num{ 0 };

public:
	INT() = default;

	explicit INT(int n) : num{ n } {

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
	//INT a = 1;
	INT a = INT{ 1 };

	a.show();
}


// INT a = (int)1
// INT a = INT{(int)1)} ���� �Ͻ��� ��ȯ
// explicit Ű���� ��� �� ���� ����

