// 구구단 프로그램

#include <iostream>

int main()
{
	while (true) {
		std::cout << "몇 단을 출력할까요? ";
		int num;
		std::cin >> num;

		if (num == -1) {
			break;
		}

		if (num < 2 || num > 9) {
			std::cout << "2~9 사이의 숫자를 입력하세요\n";
			continue;
		}

		std::cout << '\n';
		std::cout << "구구단 " << num << "단입니다\n";
		for (int i = 1; i <= 9; ++i) {
			std::cout << num << " * " << i << " = " << num * i << '\n';
		}
		std::cout << '\n';
	}
}


// 1. 구구단을 출력하는 프로그램을 만들어보자
// 몇 단을 출력할지 물어보고 원하는 단을 화면에 출력하는 것을 계속 반복하라


// 1-2. 사용자가 -1을 입력하면 종료한다
// 1-3. 2~9단만 출력하고 다른 숫자를 입력하면 다시 입력하도록 한다
