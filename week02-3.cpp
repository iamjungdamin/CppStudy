#include <iostream>

int x;

struct Player {
};

int main()
{
	int n;
	//std::cout << n << '\n';
	// 초기화되지 않은 'n' 지역 변수를 사용했습니다.
	// 지역 변수는 지역에 있는 변수
	// 지역은 전역이 아닌 모든 영역
	std::cout << x << '\n';

	Player mario;
	// 객체
	//if (key == UP) {
	//	mario.jump();
	//}
	//
	std::cout << sizeof(Player) << '\n';
	// 가짜 크기 1바이트
}


// 지역변수는 [][][][], 스택에 생성됨
// 전역변수는 [00000000][00000000][00000000][00000000], 데이터 세그먼트에 생성됨


// Debug 모드는 실행파일로 만드는 과정에서 코드에 한줄한줄 디버깅 코드를 붙임
// Release 모드는 빠르게 돌아가는 배포 파일임


// 아기가 말을 배우듯이 반복 학습, 계속 읽고 써보자
// C++의 키워드의 수는 100개 내외

// 많이 해보는 사람이 프로그래밍을 잘하게 된다
