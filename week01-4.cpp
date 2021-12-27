// 파일 입출력
// 코드를 저장할 수 있도록 save 기능을 만든다

#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>

int main()
{
	// 입력 파일을 연다
	std::ifstream in{ "week01-4.cpp" };

	// 출력 파일을 덧붙여 쓰기 모드로 연다
	std::ofstream out{ "save.txt", std::ios::app };

	// 출력 파일에 시간을 기록한다
	std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
	time_t ct = std::chrono::system_clock::to_time_t(tp);
	tm* lt = localtime(&ct);

	out.imbue(std::locale("korean"));
	out << "\n\n\n";
	out << "---------------------------------------------" << '\n';
	out << "저장 시간: " << std::put_time(lt, "%c (%A)") << '\n';
	out << "---------------------------------------------" << "\n\n";


	// 입력 파일을 읽어 출력 파일에 기록한다
	int c;
	while ((c = in.get()) != EOF) {
		out.put(c);
	}

	std::cout << "코드를 save.txt에 저장하였습니다\n";
}


// 1. 화면이 아니라 파일에 출력해보자
// 화면에 출력은 cout.put(c);
// 파일에 출력은 out.put(c);


// 1-2. 기존의 파일에 덮어쓰자
// 출력할 파일을 덧붙여 쓰기 모드 = append 로 연다


// 2. 저장한 시간도 기록해보자
// 복잡한 자료형은 auto로 가능


