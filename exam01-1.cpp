// [����1] ���α׷��� ����� Ȯ���ϰ� ������ �����϶� (15)

#include <iostream>
using namespace std;

int main()
{
	char c = 'A' + 'a';

	cout << static_cast<int>(c) << '\n';
	// -94�� ���
}


// cout << c �ϸ�
// �ڷ����� �°� char(c)�� ���

// cout << (int)((unsigined char)c) �ϸ�
// c = 65 + 97 = 162
// 162�� ���

// c = 0x41 + 0x61 = 0xa2 = 0b1010'0010
// �� ���ڸ� 1�� ������ ��Ÿ�� (2�� ����)
// 0b0101'1110
// -94


// �����÷ο� x, 1����Ʈ�� ����
// char c = 0x12345678; ��
// char c = 0x78;		�� ����


