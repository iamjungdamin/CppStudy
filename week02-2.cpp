// ������ �ڷ��� - variable, data type

#include <iostream>

int main()
{
	// ���� - 1, 2, 4, 8 ����Ʈ�� �޸𸮸� ����Ͽ� ���ϴ� ���� �а� �� �� �ֵ��� �ϴ� �ĺ���

	char c;
	// char�� �ڷ��� data type, c�� ���� variable
	// -> sizeof(char) ��ŭ �޸𸮸� Ȯ���϶�, ������ c��� �̸����� �� �޸��� ���� �аų� ���ڴ� (�� �޸𸮿� access�ϰڴ�)

	std::cout << "char�� ũ�� - " << sizeof(char) << "����Ʈ �Դϴ�\n";
	// �� �ڷ������� Ȯ���� �� �ִ� �޸� ũ��� sizeof()�� �� �� �ִ�

	// ������ ���� �����ϰ� �� ���� ȭ�鿡 ����Ͽ� �޸𸮸� ������ ����
	c = 0B0000'0001; // c = 0x01;	c = 1;
	std::cout << c << '\n';
	// cout�� default char�� c�� ����Ѵ� -> ASCII�� 1���� ����Ѵ�

	c = 0B0100'0001;	// c = 0x41;	c = 65;
	std::cout << c << '\n';

	c = 0B0110'0001;	// c = 0x61;	c = 97;
	std::cout << c << '\n';

	c = 1;
	std::cout << static_cast<int>(c) << '\n';

	c = '1';
	std::cout << c << '\n';
}


