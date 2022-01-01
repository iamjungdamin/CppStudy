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


// 포인터와 레퍼런스는 원격 조작을 하기 위해서 사용함
// 같은 지역 내에서 사용하는 것이 아님



