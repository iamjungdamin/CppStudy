// 처리해야 할 자료의 수가 많을 때, 어떻게 해야 효율적일까?

#include <iostream>
#include <algorithm>
using namespace std;

bool 내림차순(char, char);

int main()
{
	char str[]{ "12345" };
	cout << str << endl;

	sort(begin(str), end(str), [](char a, char b) {
		return a > b;
	} );
	cout << str << endl;
}

bool 내림차순(char a, char b) {	// nlogn
	return a > b;
}


// 함수 vs 람다


// 람다의 장점: 가독성, 코드 인라인화
