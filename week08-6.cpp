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
	My_string s1{ "문자열 저장 전문가" };
	My_string s2 = s1;
	My_string s3{ "오늘은 월요일" };

	//s3 = s1;
	s3.operator=(s1);

	s1.show();
	s2.show();
	s3.show();

	//cout << 1 << 2 << 3 << endl;
	(((cout.operator<<(1)).operator<<(2)).operator<<(3)).operator<<(endl);
}


// 6. 복사 생성자
// shallow copy: 메모리 주소가 함께 복사되어서 하나가 소멸된후 dangling pointer 문제 발생
// deep copy
// 원본의 num을 내 num에 대입한다
// num만큼 새 메모리를 요청한다
// 할당받은 메모리에 원본의 데이터를 복사한다


// 7. 복사 할당 연산자
// 자기 자신 리턴, *: 간접 참조 연산자 indirection operator, 역참조 연산자 dereference operator


// 8. 연산자 오버로딩
// s3 = s1;은 사실 s3.operator=(s1)
// cout << 1;은 사실 cout.operator<<(1)
// 자기 자신 리턴
