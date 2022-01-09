// 메모리가 다 같은 곳에 사는 것은 아니다
// 1. STACK
// 2. DATA
// 3. Free Store

#include <iostream>
using namespace std;

int a[250'000'000]{ 1,2,3 };	// DATA

int main()
{
	for (int& n : a) {
		n = 1;
	}

	cout << "키를 누르면 끝납니다";
	char ch;
	cin >> ch;
}


// 어떤 일이 일어나는가?


// 1. 시스템 메모리가 크기만큼 사용된다 (작업관리자에서 확인 가능)
// 한 프로그램은 2GB까지 사용할 수 있다 (OS가 제한)
// exe 파일의 크기는 얼마인가?


// 2. 전역 데이터를 초기화하면 하드디스크에 기록된다 (초기화하지 않으면 상관없음)


