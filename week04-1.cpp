#include <iostream>
using namespace std;

void mul(int*, size_t);

int main()
{
	int a[]{ 1, 2, 3, 4, 5, 6, 7, 45, 54, 38, 61 };

	// 함수 호출
	mul(a, sizeof(a) / sizeof(int));

	for (int num : a) {
		cout << num << ' ';
	}
	cout << endl;
}

void mul(int* p, size_t num)
{
	for (int i = 0; i < num; ++i) {
		//*p *= 2;
		//p++;

		p[i] *= 2;
		// p[i]는 *(p+i)
		// syntactic sugar
	}
}


// 1. 함수를 선언, 정의, 호출하여 a의 값을 2배로 변경하라


// 배열의 이름은 배열의 메모리 주소를 저장하는 포인터


// 함수의 인자로 받은 int 배열의 크기는 20이 아닌 4
// 즉 int[]가 아닌, int*로 받음


// 2. 배열을 변경해도 코드는 수정하지 않도록 하라
// = 유지보수가 쉽도록


// 3. 개수는 양수이기 때문에 unsigned int = size_t를 사용함

