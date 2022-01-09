#include <iostream>
using namespace std;

int main()
{
	char c[100'000];
	cout << static_cast<void*>(c) << endl;

	static int i{};
	cout << "main recursive call - " << ++i << endl;
	main();
}


// 1. 스택을 overflow 해보아라
// main() 재귀호출


// 2. main()이 10번 호출되면 STACK이 넘치게 해보아라
// 스택의 한계는 1MB 이므로 c의 크기를 100KB로 잡으면 됨
// 그런데 코드 안에서 c를 사용하지 않기 때문에 컴파일러가 c를 없는 것으로 취급함


// 3. c를 사용하는 척 하기 위해서 c의 시작번지수를 출력하라
// 그런데 cout << c은 cout << (char*)c 이기 때문에 \0이 나올때까지 출력함
// 번지수만 출력할수 있도록 void* 로 형변환


