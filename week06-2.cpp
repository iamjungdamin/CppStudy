#include <iostream>
using namespace std;

int main()
{
	while (true) {
		cout << "�ʿ��� ������ ������ �˷��ּ��� ";
		int num;
		cin >> num;
		int* p = new int[num];

		cout << "�޸𸮿� ���� ���" << endl;
		for (int i = 0; i < num; ++i) {
			p[i] = i;
		}

		cout << "Ű�� ������ �޸𸮸� ��ȯ�մϴ� ";
		char ch;
		cin >> ch;
		delete[] p;
	}
}


// ���� �޸� Dynamic Memory
// ���α׷��� ����� �� (= ���α׷��� �޸𸮿� �ö�� ����)


// 1. �ý��ۿ��� ���� ũ���� �޸𸮸� ��û�Ѵ�
// 2. �޸𸮸� ����Ѵ�
// 3. ��������� ��ȯ�Ѵ�


// �� ������ �ݺ��ϸ鼭 �۾������ڿ��� ����

