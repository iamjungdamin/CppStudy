#include <iostream>
using namespace std;

void mul(int*, size_t);

int main()
{
	int a[]{ 1, 2, 3, 4, 5, 6, 7, 45, 54, 38, 61 };

	// �Լ� ȣ��
	mul(a, sizeof(a) / sizeof(int));

	for (int num : a) {
		cout << num << ' ';
	}
	cout << endl;
}

void mul(int* p, size_t num)
{
	for (int i = 0; i < num; ++i) {
		//*p *= 2;
		//p++;

		p[i] *= 2;
		// p[i]�� *(p+i)
		// syntactic sugar
	}
}


// 1. �Լ��� ����, ����, ȣ���Ͽ� a�� ���� 2��� �����϶�


// �迭�� �̸��� �迭�� �޸� �ּҸ� �����ϴ� ������


// �Լ��� ���ڷ� ���� int �迭�� ũ��� 20�� �ƴ� 4
// �� int[]�� �ƴ�, int*�� ����


// 2. �迭�� �����ص� �ڵ�� �������� �ʵ��� �϶�
// = ���������� ������


// 3. ������ ����̱� ������ unsigned int = size_t�� �����

