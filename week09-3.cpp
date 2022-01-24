#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

default_random_engine dre;
uniform_int_distribution<> uid_num{ 1, 50 };
uniform_int_distribution<> uid_char{ 'a', 'z' };

struct My_string {
	int num;
	char* p;

	My_string() {
		num = uid_num(dre);
		p = new char[num];
		for (int i = 0; i < num; ++i) {
			p[i] = uid_char(dre);
		}
	}

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
		if (this == &other) {
			cout << "자기 자신을 대입" << endl;
			return *this;
		}

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
	My_string str[30];

	for (const My_string& ms : str) {
		ms.show();
	}

	cout << "정렬하려면 키를 누르시오 ";
	char ch;
	cin >> ch;
	
	sort(begin(str), end(str), [](const My_string& a, const My_string& b) {
		return a.num < b.num;
		} );

	for (const My_string& ms : str) {
		ms.show();
	}

	cout << "끝내려면 키를 누르시오 ";
	cin >> ch;
}


// 1. My_string을 30개 생성하자


// 2. default 생성 시 글자수는 [1, 50] 랜덤으로, 글자는 임의의 알파벳으로 채우자


// 3. 30개의 My_string을 길이 오름차순으로 정렬하자


// 4. 잘 정렬되었는지 출력하여 확인하자


// 생성 시에 자원을 확보했다면 소멸자에서 자원을 반환해야 한다
// 복사생성자와 복사할당연산자에서 깊은 복사가 되도록 해야 한다


// 사용자 정의 자료형에서도 각종 연산자를 사용할 수 있는데 이것은 사실 함수를 호출하는 것이다


