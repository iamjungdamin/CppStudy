// [����2] ���� main() �Լ��� �������� ����Ǵ� C��� ���α׷��� �Ϻζ�� ����
//         ���α׷� ���� �� ��µ� ������ ���� (10) �׷��� �Ǵ� ������ �����϶� (10)

#include <iostream>
using namespace std;

int main()
{
	char a{ 'O' };
	char z{ 'K' };

	change(a, z);

	cout << a << z << '!' << endl;
	// OK! �� ���
}


// C ���α׷��� ��� change �Լ����� ���������� �� �ִ� ����� ����
// void change(char*, char*) �̸� ȣ�� �� change(&a, &z) ���� �Ѵ�


// C++ ���α׷��� ��� void change(char&, char&) �� ����������
// change �Լ��� ������ �𸣱� ������ ��µ� ������ �� �� ����

