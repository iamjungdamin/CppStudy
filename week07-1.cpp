#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int* arr = new int[100'000'000];

	ifstream in{ "���� 1�ﰳ.txt" };

	int num;
	int cnt{ };

	cout << "������ �д� ��";
	while (in >> num) {
		//arr[cnt++] = num;
		*(arr + cnt++) = num;
		if (!(cnt % 1'000'000)) {
			cout << ".";
		}
	}
	cout << endl;

	cout << "��� " << cnt << "���� ������ �о����ϴ�" << endl;

	cout << "�����ϴ� ��";
	cnt = 0;
	sort(arr, arr + 100'000'000, [&cnt](int a, int b) {
		if (!(++cnt % 1'000'000)) {
			cout << ".";
		}
		return a < b;
		} );
	cout << endl;

	for (int i = 0; i < 1'000; ++i) {
		cout << setw(20) << arr[i];
	}
}


// 1. ���� 1�ﰳ�� ����� ���� "���� 1�ﰳ.txt"�� �ִ�
// 2. ���� 1�ﰳ�� �޸𸮿� �о�ͼ� ������������ �����϶�
// 3. ���ĵ� ���� �� �տ��� 1õ���� ȭ�鿡 ����϶�


// ���� �޸𸮰� �ƴ� ���� �޸𸮸� �̿��϶�
