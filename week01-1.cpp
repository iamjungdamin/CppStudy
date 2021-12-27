// 강의 소개, 객체지향 언어로서의 C++
// coding convention
// cout을 이용한 출력

#include <iostream>

int main()
{	
	for (int i = 0; i < 100'000; ++i) {
		std::cout << i+1 << " - Hello, World! ";
	}
}


// 1. 화면에 "Hello, World!"를 출력하라
// C는 문자열을 함수의 인자로 전달함
// printf("Hello, World!\n");
// C++는 std에 소속되어 있는 cout이라는 객체를 이용함
// << 는 데이터의 흐름을 표현하는 연산자


// 2. 화면에 "Hello, World!"를 100번 출력하라
// ++i


// 2-2. 몇 번째 출력인지 출력하라
// 2-3. 칸을 맞춰서 출력하라
// #include <iomanip>, std::setw(4)
// 자주 쓰이는 방법은 아님


// 2-4. 더 많이 출력해보자
// 숫자에 ' 넣어서 가독성 높이기
// "\n"를 지우면 출력이 빨라짐
