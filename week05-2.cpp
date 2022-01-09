// 메모리 영역
// DATA segment, STACK segment, HEAP (Free Store)

#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

default_random_engine dre;
uniform_int_distribution<int> uid{ 'a', 'z' };

int main()
{
	char c[1'000'000];

	for (char& c : c) {
		c = uid(dre);
	}

	sort(begin(c), end(c), [](char a, char b) {
		return a > b;
		} );

	cout << c[0] << endl;
	cout << c[sizeof(c) - 1] << endl;
}


// 1. 임의의 소문자 100개를 저장하고 내림차순으로 정렬하여 출력하라


// 2. 지역변수는 몇 개까지 저장할 수 있을까?
// c는 지역변수이고 STACK에 생성된다 STACK의 크기는 최대 1MB이다


