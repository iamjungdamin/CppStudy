// [문제4] 정수(int)를 1부터 n까지 계속 더해나간다 (1 + 2 + 3 + ... + n)
// 정수(int)의 최댓값 한계를 초과하지 않는 n의 값을 찾아서 화면에 출력하라 (40)

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

	cout << "합계: " << sum << endl;
	cout << "n의 값은 " << i - 2 << endl;


	// 다른 방법

	int n = 1;
	sum = 0;

	while (true) {
		sum += n;
		if (max < sum) {
			break;
		}
		++n;
	}

	cout << "n의 값은 " << n - 1 << endl;


	// 검산

	int sum_c{};
	for (int i = 1; i <= 65535 + 1; ++i) {
		sum_c += i;
	}
	cout << sum_c << endl;
}


// 65535

