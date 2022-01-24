// struct와 class의 차이
// struct는 기본이 public, class는 기본이 private
// 정보 은닉은 객체 지향 프로그래밍의 기본

#include <iostream>
using namespace std;

class My_string {
private:
	int num;
	char* p;

public:
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
	My_string a{ "0123456789" };

	//a.num;
	//a.p;

	a.show();
}


// access specifier



