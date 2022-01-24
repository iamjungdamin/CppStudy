#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

default_random_engine dre;
uniform_int_distribution<> uid_num{ 1, 50 };
uniform_int_distribution<> uid_char{ 'a', 'z' };

struct My_string {
	int num;
	char* p;

	My_string() {
		num = uid_num(dre);
		p = new char[num];
		for (int i = 0; i < num; ++i) {
			p[i] = uid_char(dre);
		}
	}

	My_string(const char* str) {
		num = strlen(str);
		p = new char[num];
		memcpy(p, str, num);
	}

	My_string(const My_string& other) {
		num = other.num;
		p = new char[num];
		memcpy(p, other.p, num);
	}

	~My_string() {
		cout << "�Ҹ��� - " << (void*)p << endl;
		delete[] p;
	}

	My_string& operator=(const My_string& other) {
		if (this == &other) {
			cout << "�ڱ� �ڽ��� ����" << endl;
			return *this;
		}

		cout << "operator= ";
		this->~My_string();

		num = other.num;
		p = new char[num];
		memcpy(p, other.p, num);

		return *this;
	}

	size_t size() const {
		return num;
	}

	void show() const {
		cout << (void*)p << " --> ";

		for (int i = 0; i < num; ++i) {
			cout << p[i];
		}
		cout << endl;
	}
};

int main()
{
	My_string str[30];

	for (const My_string& ms : str) {
		ms.show();
	}

	cout << "�����Ϸ��� Ű�� �����ÿ� ";
	char ch;
	cin >> ch;
	
	sort(begin(str), end(str), [](const My_string& a, const My_string& b) {
		return a.num < b.num;
		} );

	for (const My_string& ms : str) {
		ms.show();
	}

	cout << "�������� Ű�� �����ÿ� ";
	cin >> ch;
}


// 1. My_string�� 30�� ��������


// 2. default ���� �� ���ڼ��� [1, 50] ��������, ���ڴ� ������ ���ĺ����� ä����


// 3. 30���� My_string�� ���� ������������ ��������


// 4. �� ���ĵǾ����� ����Ͽ� Ȯ������


// ���� �ÿ� �ڿ��� Ȯ���ߴٸ� �Ҹ��ڿ��� �ڿ��� ��ȯ�ؾ� �Ѵ�
// ��������ڿ� �����Ҵ翬���ڿ��� ���� ���簡 �ǵ��� �ؾ� �Ѵ�


// ����� ���� �ڷ��������� ���� �����ڸ� ����� �� �ִµ� �̰��� ��� �Լ��� ȣ���ϴ� ���̴�


