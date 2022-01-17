#include <iostream>
using namespace std;

struct My_string {
	int num;	//글자수
	char* p;	//문자의 시작번지

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
	
	cout << s1.size() << endl;
	
	//cout << s1 << endl;
	s1.show();
}


// 1. string을 직접 만들어보자


// 2. 생성자
// 전달된 str의 글자수를 센다
// 글자수를 저장할 수 있는 메모리를 요청한다
// 할당받은 메모리에 전달된 str을 복사한다


// 3. size()


// 4. cout << s1 대신 show()


// 5. 소멸자
// 할당받은 메모리를 해제한다

