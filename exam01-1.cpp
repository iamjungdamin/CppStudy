// [문제1] 프로그램의 출력을 확인하고 이유를 설명하라 (15)

#include <iostream>
using namespace std;

int main()
{
	char c = 'A' + 'a';

	cout << static_cast<int>(c) << '\n';
	// -94를 출력
}


// cout << c 하면
// 자료형에 맞게 char(c)를 출력

// cout << (int)((unsigined char)c) 하면
// c = 65 + 97 = 162
// 162를 출력

// c = 0x41 + 0x61 = 0xa2 = 0b1010'0010
// 맨 앞자리 1은 음수를 나타냄 (2의 보수)
// 0b0101'1110
// -94


// 오버플로우 x, 1바이트만 받음
// char c = 0x12345678; 는
// char c = 0x78;		와 같음


