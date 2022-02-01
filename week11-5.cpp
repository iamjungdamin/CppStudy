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


// Ŭ������ ���� (p.214)


// ���
// 1. �̹� ���� �ڵ带 ����
// 2. ������ polymorphism �� ����

