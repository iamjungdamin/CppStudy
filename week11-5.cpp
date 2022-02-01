#include <iostream>
#include <string>
using namespace std;

class STRING : public string {
public:
	STRING(const char* s) : string{ s } {
		for (int i = 0; i < size(); ++i) {
			operator[](i) = toupper(operator[](i));
		}
	}
};

int main()
{
	STRING a{ "abcde" };
	STRING b{ "fghijklmnopqrstuvwxyz" };

	cout << a + b << endl;
}


// 클래스의 관계 (p.214)


// 상속
// 1. 이미 만든 코드를 재사용
// 2. 다형성 polymorphism 을 구현

