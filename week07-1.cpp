#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int* arr = new int[100'000'000];

	ifstream in{ "정수 1억개.txt" };

	int num;
	int cnt{ };

	cout << "정수를 읽는 중";
	while (in >> num) {
		//arr[cnt++] = num;
		*(arr + cnt++) = num;
		if (!(cnt % 1'000'000)) {
			cout << ".";
		}
	}
	cout << endl;

	cout << "모두 " << cnt << "개의 정수를 읽었습니다" << endl;

	cout << "정렬하는 중";
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


// 1. 정수 1억개가 저장된 파일 "정수 1억개.txt"이 있다
// 2. 정수 1억개를 메모리에 읽어와서 오름차순으로 정렬하라
// 3. 정렬된 정수 중 앞에서 1천개를 화면에 출력하라


// 전역 메모리가 아닌 동적 메모리를 이용하라
