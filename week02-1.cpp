#include <iostream>
#include "save.h"

int main()
{
	while (true) {
		std::cout << "몇 단을 출력할까요? ";
		int num;
		std::cin >> num;

		std::cout << "구구단 " << num << "단입니다\n";
		for (int i = 1; i <= 9; ++i) {
			std::cout << num << " * " << i << " = " << num * i << '\n';
		}
	}

	save("week02-1.cpp");
}


// 1. 구구단을 출력하는 프로그램을 만들어보자
// 몇 단을 출력할지 물어보고 원하는 단을 화면에 출력하는 것을 계속 반복하라

