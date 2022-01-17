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
	My_string s1{ "문자열 저장 전문가" };
	//My_string s2 = s1;

	s1.show();
	//s2.show();
}


// 6. 복사 생성자
// shallow copy: 메모리 주소가 함께 복사되어서 하나가 소멸된후 dangling pointer 문제 발생
// deep copy


