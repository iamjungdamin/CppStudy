// 시험 점수의 평균

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


// 1. 학생 100명의 점수를 임의의 값 (0-100 사이) 으로 설정하고 전체 평균값을 구하여 출력하라


// int sum{ };
// 디폴트 초기화, int의 디폴트 초기화는 0으로 초기화
// but 가독성을 높이기 위해서 0을 써주는 것이 좋음


// 2. range based for loop
// 유지보수가 쉬운 코드가 좋은 코드

