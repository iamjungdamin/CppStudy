// [����4] ����(int)�� 1���� n���� ��� ���س����� (1 + 2 + 3 + ... + n)
// ����(int)�� �ִ� �Ѱ踦 �ʰ����� �ʴ� n�� ���� ã�Ƽ� ȭ�鿡 ����϶� (40)

#include <iostream>
using namespace std;

int main()
{
	int max = numeric_limits<int>::max();

	// int sum = 0;
	long long sum = 0;
	int i;

	for (i = 1; sum <= max; ++i) {
		sum += i;
	}

	cout << "�հ�: " << sum << endl;
	cout << "n�� ���� " << i - 2 << endl;


	// �ٸ� ���

	int n = 1;
	sum = 0;

	while (true) {
		sum += n;
		if (max < sum) {
			break;
		}
		++n;
	}

	cout << "n�� ���� " << n - 1 << endl;


	// �˻�

	int sum_c{};
	for (int i = 1; i <= 65535 + 1; ++i) {
		sum_c += i;
	}
	cout << sum_c << endl;
}


// 65535

