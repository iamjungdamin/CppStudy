#include <iostream>
using namespace std;

class �θ� {
protected:
	int �θ�����;

//public:
//	void set�θ�����(int n) {
//		�θ����� = n;
//	}
//
//	int get�θ�����() const {
//		return �θ�����;
//	}
};

class �ڽ� : public �θ� {
	int �ڽ�����;

public:
	�ڽ�() {
		�ڽ����� = 456;
		�θ����� = 123;
	}

	friend ostream& operator<<(ostream&, const �ڽ�&);
};

ostream& operator<<(ostream& os, const �ڽ�& child) {
	cout << "[�θ�����-" << child.�θ����� << "],[�ڽ�����-" << child.�ڽ����� << "]";
	return os;
}

int main()
{
	�ڽ� child;

	cout << sizeof(child) << endl;

	cout << child << endl;
}


// 1. child�� �����ϴ� �޸��� ũ���?
// 8, [�θ�����][�ڽ�����]


// 2. [�θ�����-123],[�ڽ�����-456] �� ��µǵ��� �غ���


// ��� ���迡�� �θ� Ŭ������ protected �����
// �ڽ� Ŭ������ �ڽ��� private ���ó�� ��� ����

