#include <iostream>
#include <string>
#include <random>
#include <fstream>
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

	friend ostream& operator<<(ostream&, const Dog&);
};

ostream& operator<<(ostream& os, const Dog& dog) {
	os << dog.id << '\t' << dog.name;
	return os;
}

int main()
{
	ofstream out("Dog만개");

	for (int i = 0; i < 10'000; ++i) {
		Dog dog;
		out << dog << endl;
	}
}


// 1. Dog 디폴트 생성 시 id는 임의의 정수, name은 임의의 소문자 [1~30] 글자로 생성


// 2. Dog 객체 10000개를 파일 "Dog만개"에 저장한다


