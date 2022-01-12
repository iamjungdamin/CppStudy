#include <iostream>
#include <random>
using namespace std;

default_random_engine dre;
uniform_int_distribution<> uid{ 0, 100 };

struct Balloon {
	float x;
	float y;
};

int main()
{
	Balloon balloons[1000];

	for (Balloon& b : balloons) {
		b.x = uid(dre);
		b.y = uid(dre);
	}

	int cnt{};

	for (Balloon b : balloons) {
		float dx = b.x - 50;
		float dy = b.y - 50;
		
		if (sqrt(dx * dx + dy * dy) <= 20.0) {
			cout << "풍선(" << b.x << "," << b.y << ")" << endl;

			++cnt;
		}
	}

	cout << "모두 " << cnt << "개의 풍선이 터졌다" << endl;
}


// 1. 풍선 100개를 생성한다


// 2. 풍선의 x, y 값을 [0, 100] 사이의 랜덤값으로 설정한다


// 3. 위치 (50, 50)에서 반경 20의 영향을 미치는 폭탄이 터졌다
// 폭탄의 영향권에 있는 풍선의 정보와, 영향받은 풍선의 개수를 출력하라


// 4. 전체 풍선의 개수를 1000개로 바꿔보자


// for (const Balloon& b : balloons)
// const (읽기 전용), & (복사하지 않음)

