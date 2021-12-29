// 변수와 자료형 - variable, data type

#include <iostream>

int main()
{
	// 변수 - 1, 2, 4, 8 바이트의 메모리를 사용하여 원하는 값을 읽고 쓸 수 있도록 하는 식별자

	char c;
	// char는 자료형 data type, c는 변수 variable
	// -> sizeof(char) 만큼 메모리를 확보하라, 앞으로 c라는 이름으로 그 메모리의 값을 읽거나 쓰겠다 (즉 메모리에 access하겠다)

	std::cout << "char의 크기 - " << sizeof(char) << "바이트 입니다\n";
	// 각 자료형으로 확보할 수 있는 메모리 크기는 sizeof()로 알 수 있다

	// 변수에 값을 저장하고 그 값을 화면에 출력하여 메모리를 이해해 보자
	c = 0B0000'0001; // c = 0x01;	c = 1;
	std::cout << c << '\n';
	// cout은 default char로 c를 출력한다 -> ASCII의 1번을 출력한다

	c = 0B0100'0001;	// c = 0x41;	c = 65;
	std::cout << c << '\n';

	c = 0B0110'0001;	// c = 0x61;	c = 97;
	std::cout << c << '\n';

	c = 1;
	std::cout << static_cast<int>(c) << '\n';

	c = '1';
	std::cout << c << '\n';
}


