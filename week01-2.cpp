// int�� �ִ�

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

	std::cout << "������ �ִ밪�� " << old << '\n';



	int n{ 0x7FFFFFFF };
	// 0111 1111 1111 1111... ���� ���� ��Ʈ�� ��ȣ�� ��Ÿ���� sign bit
	std::cout << "������ �ִ밪�� " << n << '\n';

	unsigned int n2{ 0xFFFFFFFF };
	// 1111 1111 1111 1111...
	std::cout << "��ȣ ���� ������ �ִ밪�� " << n2 << '\n';
	// 2��

	int n3{ 0B0111'1111'1111'1111'1111'1111'1111'1111 };
	// n, 2������ ��Ÿ���� �޸𸮰� ����



	std::cout << std::numeric_limits<int>::max() << '\n';
}


// 1. int ���� �Ѱ�� ���ΰ�?
// ��� ��ü�� �ʱ�ȭ�� {} �� �̿���, uniform initialization
// std::endl ��� '\n'�� ��ȣ��


// 2147483647

