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

	My_string(const My_string& other) {
		num = other.num;
		p = new char[num];
		memcpy(p, other.p, num);
	}

	~My_string() {
		cout << "소멸자 - " << (void*)p << endl;
		delete[] p;
	}

	My_string& operator=(const My_string& other) {
		cout << "operator= ";
		this->~My_string();

		num = other.num;
		p = new char[num];
		memcpy(p, other.p, num);

		return *this;
	}

	size_t size() const {
		return num;
	}

	void show() const {
		cout << (void*)p << " --> ";

		for (int i = 0; i < num; ++i) {
			cout << p[i];
		}
		cout << endl;
	}
};

int main()
{
	My_string s1{ "123" };
	My_string s2{ "456" };
	My_string s3{ "789" };

	// s1 = s2 = s3;
	s1.operator=(s2.operator=(s3));

	s1.show();
	s2.show();
	s3.show();
}


// s1 = s2 = s3;의 순서는 s1 = (s2 = s3);
// s2.operator=(s3) 후 자기 자신인 s2를 반환
// 즉, s1.operator=(s2)

