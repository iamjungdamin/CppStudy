#include <iostream>
#include <thread>
using namespace std;

int main()
{
	cout << "메모리 계속 할당 중";

	while (true) {
		int* p;
		try {
			p = new int[25'000'000];
		}
		catch (exception& e) {
			cout << e.what() << endl;
			break;
		}

		for (int i = 0; i < 25'000'000; ++i) {
			p[i] = i;
		}

		this_thread::sleep_for(1s);
		cout << ".";
	}
}


// 1. 시스템 메모리를 안준다고 할때까지 동적으로 할당해보자

