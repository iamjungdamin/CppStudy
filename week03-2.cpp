// * �����ʹ� �� ����ұ�? -> �޸𸮸� ���� �����Ϸ���
// & ���۷����� �� ����ұ�? -> alias

#include <iostream>
using namespace std;

void swap_(int, int);
void swap(int*, int*);
void swap(int&, int&);

int main()
{
	int a{ 10 }, b{ 20 };

	cout << a << ", " << b << endl;

	cout << &a << '\n';
	cout << &b << '\n';

	swap_(a, b);
	cout << a << ", " << b << endl;

	swap(&a, &b);
	cout << a << ", " << b << endl;

	swap(a, b);
	cout << a << ", " << b << endl;
}

void swap_(int x, int y)
{
	int temp{ x };
	x = y;
	y = temp;
}

void swap(int* p, int* q)
{
	int temp{ *p };
	*p = *q;
	*q = temp;
}

void swap(int& x, int& y)
{
	int temp{ x };
	x = y;
	y = temp;
}


// a�� b�� ���� ��ȯ�϶�


// 1. a�� b�� �޸� �ּҸ� ����϶�
// cout�� �ڵ����� 16������ ������ش�
// ���� = �޸� ���� �پ��


// 2. �Լ��� ����(declaration)�ϰ� ����(definition)�ϰ� ȣ��(call)�Ͽ� a�� b�� ���� ��ȯ�϶�


// 3. ���۷����� ����϶�
