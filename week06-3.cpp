#include <iostream>
#include <thread>
using namespace std;

int main()
{
	cout << "�޸� ��� �Ҵ� ��";

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


// 1. �ý��� �޸𸮸� ���شٰ� �Ҷ����� �������� �Ҵ��غ���

