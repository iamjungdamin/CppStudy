// [문제2] 다음 main() 함수가 문제없이 실행되는 C언어 프로그램의 일부라고 하자
//         프로그램 실행 시 출력될 내용을 쓰고 (10) 그렇게 되는 이유를 설명하라 (10)

#include <iostream>
using namespace std;

int main()
{
	char a{ 'O' };
	char z{ 'K' };

	change(a, z);

	cout << a << z << '!' << endl;
	// OK! 를 출력
}


// C 프로그램의 경우 change 함수에서 원격조작할 수 있는 방법이 없다
// void change(char*, char*) 이면 호출 시 change(&a, &z) 여야 한다


// C++ 프로그램의 경우 void change(char&, char&) 가 가능하지만
// change 함수의 내용을 모르기 때문에 출력될 내용을 알 수 없다

