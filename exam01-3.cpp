// [문제3] 아래의 결과가 출력되도록 함수 makeUpper를 선언하고 (10) 정의하라 (15)

#include <iostream>
using namespace std;

void makeUpper(char&);		// 선언

int main()
{
	char str[]{ "C++ is a general-purpose programming language" };

	for (char& c : str) {
		makeUpper(c);
	}

	cout << str << endl;
	// 결과: C++ IS A GENERAL-PURPOSE PROGRAMMING LANGUAGE
}

void makeUpper(char& c) {	// 정의
	if ('a' <= c && c <= 'z') {
		c -= 0x20;
	}
}


