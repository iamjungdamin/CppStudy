#include <iostream>
using namespace std;

int main()
{
	char c[100'000];
	cout << static_cast<void*>(c) << endl;

	static int i{};
	cout << "main recursive call - " << ++i << endl;
	main();
}


// 1. ������ overflow �غ��ƶ�
// main() ���ȣ��


// 2. main()�� 10�� ȣ��Ǹ� STACK�� ��ġ�� �غ��ƶ�
// ������ �Ѱ�� 1MB �̹Ƿ� c�� ũ�⸦ 100KB�� ������ ��
// �׷��� �ڵ� �ȿ��� c�� ������� �ʱ� ������ �����Ϸ��� c�� ���� ������ �����


// 3. c�� ����ϴ� ô �ϱ� ���ؼ� c�� ���۹������� ����϶�
// �׷��� cout << c�� cout << (char*)c �̱� ������ \0�� ���ö����� �����
// �������� ����Ҽ� �ֵ��� void* �� ����ȯ


