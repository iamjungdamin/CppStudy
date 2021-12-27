// int의 최댓값

#include <iostream>
#include <numeric>

int main()
{
	int i{ 0 };
	int old{ i };

	while (true) {
		++i;
		if (i <= old) {
			break;
		}
		old = i;
	}

	std::cout << "정수의 최대값은 " << old << '\n';



	int n{ 0x7FFFFFFF };
	// 0111 1111 1111 1111... 제일 왼쪽 비트는 부호를 나타내는 sign bit
	std::cout << "정수의 최대값은 " << n << '\n';

	unsigned int n2{ 0xFFFFFFFF };
	// 1111 1111 1111 1111...
	std::cout << "부호 없는 정수의 최대값은 " << n2 << '\n';
	// 2배

	int n3{ 0B0111'1111'1111'1111'1111'1111'1111'1111 };
	// n, 2진수로 나타내면 메모리가 보임



	std::cout << std::numeric_limits<int>::max() << '\n';
}


// 1. int 값의 한계는 얼마인가?
// 모든 객체의 초기화는 {} 를 이용함, uniform initialization
// std::endl 대신 '\n'를 선호함


// 2147483647

