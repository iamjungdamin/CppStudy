// [����3] �Ʒ��� ����� ��µǵ��� �Լ� makeUpper�� �����ϰ� (10) �����϶� (15)

#include <iostream>
using namespace std;

void makeUpper(char&);		// ����

int main()
{
	char str[]{ "C++ is a general-purpose programming language" };

	for (char& c : str) {
		makeUpper(c);
	}

	cout << str << endl;
	// ���: C++ IS A GENERAL-PURPOSE PROGRAMMING LANGUAGE
}

void makeUpper(char& c) {	// ����
	if ('a' <= c && c <= 'z') {
		c -= 0x20;
	}
}


