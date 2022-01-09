#include <iostream>
using namespace std;

int main()
{
	while (true) {
		cout << "필요한 정수의 개수를 알려주세요 ";
		int num;
		cin >> num;
		int* p = new int[num];

		cout << "메모리에 값을 기록" << endl;
		for (int i = 0; i < num; ++i) {
			p[i] = i;
		}

		cout << "키를 누르면 메모리를 반환합니다 ";
		char ch;
		cin >> ch;
		delete[] p;
	}
}


// 동적 메모리 Dynamic Memory
// 프로그램이 실행될 때 (= 프로그램이 메모리에 올라온 상태)


// 1. 시스템에게 일정 크기의 메모리를 요청한다
// 2. 메모리를 사용한다
// 3. 사용했으면 반환한다


// 위 과정을 반복하면서 작업관리자에서 관찰

