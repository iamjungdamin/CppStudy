#include <iostream>
#include <fstream>
#include <random>
using namespace std;

int main() {
	ofstream out{ "���� 1�ﰳ.txt" };

	default_random_engine dre;
	uniform_int_distribution<> uid;

	cout << "�����";
	for (int i = 0; i < 100'000'000; ++i) {
		out << uid(dre) << " ";
		if (!(i % 1'000'000)) {
			cout << ".";
		}
	}
}


// 1. ���� 1�ﰳ�� ����� ���� "���� 1�ﰳ.txt"�� �ִ�
// 2. ���� 1�ﰳ�� �޸𸮿� �о�ͼ� ������������ �����϶�
// 3. ���ĵ� ������ "���� 1�ﰳ ��������.txt"���� �����϶�


