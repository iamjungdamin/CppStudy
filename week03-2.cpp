// * 포인터는 왜 사용할까? -> 메모리를 원격 조작하려고
// & 레퍼런스는 왜 사용할까? -> alias

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


// a와 b의 값을 교환하라


// 1. a와 b의 메모리 주소를 출력하라
// cout이 자동으로 16진수로 출력해준다
// 스택 = 메모리 값이 줄어듦


// 2. 함수를 선언(declaration)하고 정의(definition)하고 호출(call)하여 a와 b의 값을 교환하라


// 3. 레퍼런스를 사용하라
