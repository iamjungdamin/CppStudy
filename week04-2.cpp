// 정렬
// 1에서 10으로: 오름차순 ascending order
// 10에서 1으로: 내림차순 descending order

#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

default_random_engine dre{ 2020 };
uniform_int_distribution<> uid{ 0, 100'000 };

int main()
{
	int a[10000];

	for (int& num : a) {
		num = uid(dre);
	}

	size_t num = sizeof(a) / sizeof(int);

	for (int j = 0; j < num - 1; ++j) {
		for (int i = 0; i < num - 1 - j; ++i) {
			if (a[i] > a[i + 1]) {
				//int temp{ a[i] };
				//a[i] = a[i + 1];
				//a[i + 1] = temp;
				swap(a[i], a[i + 1]);
			}
		}
	}

	//sort(begin(a), end(a), [](int a, int b) {
	//	return a > b;
	//	} );

	cout << "정렬 후 " << endl;
	for (int n : a) {
		cout << n << ' ';
	}
	cout << endl;
}


// 1. a의 값 중에서 가장 큰 값을 제일 오른쪽으로 이동되게 하라


// 2. a를 오름차순으로 정렬하라
// n번째 루프가 끝나면 오른쪽의 n개의 원소는 이미 정렬된 상태이므로
// 왼쪽의 (num - n)개의 원소를 정렬하면 됨


// 3. a를 랜덤값 1만개로 초기화하고 오름차순으로 정렬하라


// 4. algorithm 헤더의 sort를 사용해보자
// 4-2. 내림차순으로 정렬해보자


// 3-2. 표준 함수 swap()을 사용해보자
// 함수 호출에는 비용이 든다 (cost of function call)
// 실제 함수 호출x, 컴파일러가 함수의 내용을 적는다 = 함수를 inline 한다

