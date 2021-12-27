// 파일을 읽어서 화면에 출력

#include <iostream>
#include <fstream>

int main()
{
	// 파일을 연다
	std::ifstream in{ "week01-3.cpp" };

	if (!in) {
		std::cout << "파일을 열 수 없습니다\n";
		return 0;
	}

	/*
	for (int i = 0; i < 200; ++i) {
		// 파일에서 한글자를 읽는다
		char c;
		//in >> c;

		// 공백도 읽는다
		c = in.get();

		// 읽은 글자를 화면에 출력한다
		std::cout << c;
	}
	*/

	int c;
	while ((c = in.get()) != EOF) {
		//std::cout << static_cast<char>(c);
		std::cout.put(c);
	}
}


// 1. 파일을 열고 한글자를 읽어서 화면에 출력하는 것을 200번 반복한다
// in >> c 하면 엔터키, 스페이스키, 탭키 등의 white space는 읽을 수 없음
// c = in.get()


// 2. c = in.get() 이 EOF가 아닐 때까지 반복, 이때 c는 int형
// cout << c 하면 기본적으로 정수형으로 출력됨
// 강제로 타입 캐스팅 (권장x) 또는 cout.put 사용


// 스테이지와 맵 데이터, 에셋 등을 가져와서 쓰기 때문에 파일 입출력이 매우 중요함


// return 0;은 쓰지 않는다 컴파일러가 자동으로 해준다
