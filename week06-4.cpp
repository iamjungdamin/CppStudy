#include <iostream>
#include <fstream>
#include <random>
using namespace std;

int main() {
	ofstream out{ "정수 1억개.txt" };

	default_random_engine dre;
	uniform_int_distribution<> uid;

	cout << "기록중";
	for (int i = 0; i < 100'000'000; ++i) {
		out << uid(dre) << " ";
		if (!(i % 1'000'000)) {
			cout << ".";
		}
	}
}


// 1. 정수 1억개가 저장된 파일 "정수 1억개.txt"이 있다
// 2. 정수 1억개를 메모리에 읽어와서 오름차순으로 정렬하라
// 3. 정렬된 정수를 "정수 1억개 오름차순.txt"으로 저장하라


