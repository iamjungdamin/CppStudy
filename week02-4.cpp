// 주사위 프로그램

#include <iostream>
#include <random>

int main()
{
	std::cout << "주사위 프로그램입니다\n\n";

	std::random_device rd;
	// CPU 온도, 스택의 base 번지, 마우스 좌표 등을 조합한 랜덤 수
	std::default_random_engine dre{ rd() };
	// 특정한 값을 뽑아내주는 엔진, MT19937
	std::uniform_int_distribution<int> uid{ 1, 6 };
	// 균등 분포 객체, 범위를 지정할 수 있음
	
	//std::cout << "주사위 수는 " << rand() % 6 + 1 << '\n';
	// 6
	// 랜덤이란? 어떤 사건이 앞뒤 사건에 전혀 영향을 받지 않음
	// 컴퓨터가 만든 랜덤한 수는 수식으로 나오기 때문에 사실 랜덤이 아님
	// 특히 rand() 는 16비트 시절에 만들어진 함수로, 랜덤 함수 중 최악임


	//std::cout << "주사위 수는 " << uid(dre) << '\n';
	// dre가 뽑아낸 값을 uid가 가공하도록 함
	

	int num[6]{ };

	for (int i = 0; i < 1000; ++i) {
		//int diceValue = uid(dre);

		//for (int j = 0; j < 6; ++j) {
		//	if (diceValue == j + 1) {
		//		num[j]++;
		//	}
		//}

		num[uid(dre) - 1]++;
	}

	for (int i = 0; i < 6; ++i) {
		std::cout << i + 1 << "의 개수 " << num[i] << '\n';
	}
}


// 1. 주사위를 굴리는 프로그램을 작성하고 랜덤 넘버를 만드는 방법을 알아보자
// i++가 아니라 ++i를 쓰자 (반복문)


// 2. 주사위 값을 1000개 만들어서 각 숫자가 몇번 나오는지를 출력하라
// 2-2. 코드를 짧게 개선하라


// 3. 현재의 코드로는 항상 같은 값이 나오고, 예측 가능하기 때문에 랜덤이 아님
// 컴퓨터로 만드는 모든 랜덤은 사실 진짜 랜덤이 아니라 pseudo random, 진짜 랜덤은 불가능함
// 다른 숫자가 나오도록 하기 위해서는 seed를 다르게 해야함 -> random_device



