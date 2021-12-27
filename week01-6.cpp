// C++ 입출력 연습

#include <iostream>
#include "save.h"

int main()
{
	while (true) {
		std::cout << "이름이 뭐예요? ";
		std::string name;
		std::cin >> name;
		std::cout << name << "님 반갑습니다!" << '\n';
	}

	save("week01-6.cpp");
}


// 1. 이름을 입력받고 입력받은 이름으로 인사를 하자
// 커서가 깜빡이면서, name에 합당한 형식으로 데이터가 있는 상태에서 엔터를 칠 때까지 대기

// 입력 버퍼, cin이라는 객체가 공백은 무시하고 의미있는 글씨만 읽어옴
// cpp 씨뿔뿔 이라고 입력하면 cpp만 읽어옴

// C에서는 char name[40];
// 40글자가 넘는 이름은 못 받고, 한국식 이름은 공간 낭비
// C++에서는 string name;


// 2. 계속 반복해보자


// 강의 내용을 꼭 따라할 것! 눈으로 코딩을 익힐 수는 없다 (할 수 있다면 천재)
// 관련 내용을 알아서 찾아볼 것! 공부를 편하게 할 수는 없다, 반복 또 반복
