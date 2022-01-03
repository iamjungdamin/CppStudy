// 이름 없는 함수 람다 lambda

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	[]() {
		cout << "안녕? 난 람다라고 해!" << endl;
	}();

	char str[]{ "C++ is a nice programming language" };
	cout << str << endl;

	//sort(begin(str), end(str) - 1);
	sort(begin(str), end(str), [](char a, char b) {
		return a > b;
		} );
	cout << "정렬 후 " << endl;
	cout << str << endl;
}


// sort()는 오름차순 정렬이 디폴트
// 내림차순 정렬을 해보자
// 호출할 필요가 없는 함수 람다
