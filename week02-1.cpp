#include <iostream>
#include "save.h"

int main()
{
	while (true) {
		std::cout << "�� ���� ����ұ��? ";
		int num;
		std::cin >> num;

		std::cout << "������ " << num << "���Դϴ�\n";
		for (int i = 1; i <= 9; ++i) {
			std::cout << num << " * " << i << " = " << num * i << '\n';
		}
	}

	save("week02-1.cpp");
}


// 1. �������� ����ϴ� ���α׷��� ������
// �� ���� ������� ����� ���ϴ� ���� ȭ�鿡 ����ϴ� ���� ��� �ݺ��϶�

