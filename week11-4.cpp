#include <iostream>
#include <string>
#include <random>
#include <fstream>
#include <algorithm>
using namespace std;

default_random_engine dre;
uniform_int_distribution<> uid;
uniform_int_distribution<> uid_len{ 1,30 };
uniform_int_distribution<> uid_alpha{ 'a', 'z' };

class Dog {
	int id;
	string name;

public:
	Dog() {
		id = uid(dre);
		for (int i = 0; i < uid_len(dre); ++i) {
			name += uid_alpha(dre);
		}
	}

	void show() const {
		cout << id << " - " << name << endl;
	}

	int getID() const {
		return id;
	}

	string_view getName() const {
		return name;
	}

	friend ostream& operator<<(ostream&, const Dog&);
	friend istream& operator>>(istream&, Dog&);
};

ostream& operator<<(ostream& os, const Dog& dog) {
	os << dog.id << '\t' << dog.name;
	return os;
}

istream& operator>>(istream& is, Dog& dog) {
	is >> dog.id >> dog.name;
	return is;
}

int main()
{
	ifstream in("Dog����");

	if (!in) {
		cout << "������ ���� ���߽��ϴ�" << endl;
		exit(-1234);
	}

	Dog* dogs = new Dog[10000];

	cout << "���Ͽ��� �д� ��" << endl;
	int i = 0;
	while (in >> dogs[i++]) {
		;
	}

	cout << "�����ϴ� ��" << endl;
	sort(&dogs[0], &dogs[10000], [](const Dog& a, const Dog& b) {
		return a.getName().size() < b.getName().size();
		} );

	cout << "������ �������ϴ�. �ƹ� Ű�� �������� ";
	char ch;
	cin >> ch;

	for (int i = 0; i < 10'000; ++i) {
		cout << dogs[i] << endl;
	}

	cout << "�����ϴ� ��" << endl;
	sort(&dogs[0], &dogs[10000], [](const Dog& a, const Dog& b) {
		return a.getID() < b.getID();
		});

	cout << "������ �������ϴ�. �ƹ� Ű�� �������� ";
	cin >> ch;

	for (int i = 0; i < 10'000; ++i) {
		cout << dogs[i] << endl;
	}

	delete[] dogs;
}


// 1. Dog ����Ʈ ���� �� id�� ������ ����, name�� ������ �ҹ��� [1~30] ���ڷ� ����


// 2. Dog ��ü 10000���� ���� "Dog����"�� �����Ѵ�


// 3. "Dog����"�� �ִ� Dog ��ü�� ������ ��� �д´�


// 4. �̸� ���� ������������ ������ �� ȭ�鿡 ����Ѵ�


// 5. id ������������ ������ �� ȭ�鿡 ����Ѵ�

