#include <iostream>
using namespace std;

struct My_string {
	int num;	//���ڼ�
	char* p;	//������ ���۹���

	My_string(const char* str) {
		num = strlen(str);
		p = new char[num];
		memcpy(p, str, num);
	}

	~My_string() {
		delete[] p;
	}

	size_t size() const {
		return num;
	}

	void show() const {
		for (int i = 0; i < num; ++i) {
			cout << p[i];
		}
		cout << endl;
	}
};

int main()
{
	My_string s1{ "���ڿ� ���� ������" };
	
	cout << s1.size() << endl;
	
	//cout << s1 << endl;
	s1.show();
}


// 1. string�� ���� ������


// 2. ������
// ���޵� str�� ���ڼ��� ����
// ���ڼ��� ������ �� �ִ� �޸𸮸� ��û�Ѵ�
// �Ҵ���� �޸𸮿� ���޵� str�� �����Ѵ�


// 3. size()


// 4. cout << s1 ��� show()


// 5. �Ҹ���
// �Ҵ���� �޸𸮸� �����Ѵ�

