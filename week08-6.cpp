#include <iostream>
using namespace std;

struct My_string {
	int num;
	char* p;

	My_string(const char* str) {
		num = strlen(str);
		p = new char[num];
		memcpy(p, str, num);
	}

	~My_string() {
		delete[] p;
	}

	size_t size() const {
		return num;
	}

	void show() const {
		for (int i = 0; i < num; ++i) {
			cout << p[i];
		}
		cout << endl;
	}
};

int main()
{
	My_string s1{ "���ڿ� ���� ������" };
	//My_string s2 = s1;

	s1.show();
	//s2.show();
}


// 6. ���� ������
// shallow copy: �޸� �ּҰ� �Բ� ����Ǿ �ϳ��� �Ҹ���� dangling pointer ���� �߻�
// deep copy


