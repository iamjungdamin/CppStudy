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
	ifstream in("Dog만개");

	if (!in) {
		cout << "파일을 열지 못했습니다" << endl;
		exit(-1234);
	}

	Dog* dogs = new Dog[10000];

	cout << "파일에서 읽는 중" << endl;
	int i = 0;
	while (in >> dogs[i++]) {
		;
	}

	cout << "정렬하는 중" << endl;
	sort(&dogs[0], &dogs[10000], [](const Dog& a, const Dog& b) {
		return a.getName().size() < b.getName().size();
		} );

	cout << "정렬이 끝났습니다. 아무 키나 누르세요 ";
	char ch;
	cin >> ch;

	for (int i = 0; i < 10'000; ++i) {
		cout << dogs[i] << endl;
	}

	cout << "정렬하는 중" << endl;
	sort(&dogs[0], &dogs[10000], [](const Dog& a, const Dog& b) {
		return a.getID() < b.getID();
		});

	cout << "정렬이 끝났습니다. 아무 키나 누르세요 ";
	cin >> ch;

	for (int i = 0; i < 10'000; ++i) {
		cout << dogs[i] << endl;
	}

	delete[] dogs;
}


// 1. Dog 디폴트 생성 시 id는 임의의 정수, name은 임의의 소문자 [1~30] 글자로 생성


// 2. Dog 객체 10000개를 파일 "Dog만개"에 저장한다


// 3. "Dog만개"에 있는 Dog 객체의 정보를 모두 읽는다


// 4. 이름 길이 오름차순으로 정렬한 후 화면에 출력한다


// 5. id 오름차순으로 정렬한 후 화면에 출력한다

