#include <iostream>
using namespace std;

int main()
{
	int a = 1;

	int* p = &a;
	*p = 10;

	int b = 2;

	int& r = b;
	r = 20;

	cout << a << ", " << b << endl;
}


// �����Ϳ� ���۷����� ���� ������ �ϱ� ���ؼ� �����
// ���� ���� ������ ����ϴ� ���� �ƴ�



