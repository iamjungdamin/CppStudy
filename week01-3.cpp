// ������ �о ȭ�鿡 ���

#include <iostream>
#include <fstream>

int main()
{
	// ������ ����
	std::ifstream in{ "week01-3.cpp" };

	if (!in) {
		std::cout << "������ �� �� �����ϴ�\n";
		return 0;
	}

	/*
	for (int i = 0; i < 200; ++i) {
		// ���Ͽ��� �ѱ��ڸ� �д´�
		char c;
		//in >> c;

		// ���鵵 �д´�
		c = in.get();

		// ���� ���ڸ� ȭ�鿡 ����Ѵ�
		std::cout << c;
	}
	*/

	int c;
	while ((c = in.get()) != EOF) {
		//std::cout << static_cast<char>(c);
		std::cout.put(c);
	}
}


// 1. ������ ���� �ѱ��ڸ� �о ȭ�鿡 ����ϴ� ���� 200�� �ݺ��Ѵ�
// in >> c �ϸ� ����Ű, �����̽�Ű, ��Ű ���� white space�� ���� �� ����
// c = in.get()


// 2. c = in.get() �� EOF�� �ƴ� ������ �ݺ�, �̶� c�� int��
// cout << c �ϸ� �⺻������ ���������� ��µ�
// ������ Ÿ�� ĳ���� (����x) �Ǵ� cout.put ���


// ���������� �� ������, ���� ���� �����ͼ� ���� ������ ���� ������� �ſ� �߿���


// return 0;�� ���� �ʴ´� �����Ϸ��� �ڵ����� ���ش�
