// ���� ������ ���

#include <iostream>
#include <random>

int main()
{
	std::default_random_engine dre;
	std::uniform_int_distribution<int> uid{ 0, 100 };

	int student[1000];

	for (int& score : student) {
		score = uid(dre);
	}

	int sum{ 0 };

	for (int n : student) {
		sum += n;
	}
	std::cout << static_cast<double>(sum) / 1000 << '\n';
}


// 1. �л� 100���� ������ ������ �� (0-100 ����) ���� �����ϰ� ��ü ��հ��� ���Ͽ� ����϶�


// int sum{ };
// ����Ʈ �ʱ�ȭ, int�� ����Ʈ �ʱ�ȭ�� 0���� �ʱ�ȭ
// but �������� ���̱� ���ؼ� 0�� ���ִ� ���� ����


// 2. range based for loop
// ���������� ���� �ڵ尡 ���� �ڵ�

