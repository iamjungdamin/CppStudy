#include <fstream>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <string>

void save(std::string fileName)
{
	// 입력 파일을 연다
	std::ifstream in{ fileName };

	// 출력 파일을 덧붙여 쓰기 모드로 연다
	std::string outFileName{ "save.txt" };
	std::ofstream out{ outFileName, std::ios::app };

	// 출력 파일에 시간을 기록한다
	auto tp = std::chrono::system_clock::now();
	auto ct = std::chrono::system_clock::to_time_t(tp);
	auto lt = localtime(&ct);

	out.imbue(std::locale("korean"));
	out << "\n\n\n";
	out << "---------------------------------------------" << '\n';
	out << fileName << std::put_time(lt, " - %c (%A)") << '\n';
	out << "---------------------------------------------" << "\n\n";


	// 입력 파일을 읽어 출력 파일에 기록한다
	int c;
	while ((c = in.get()) != EOF) {
		out.put(c);
	}

	std::cout << fileName << "를 " << outFileName << "에 저장하였습니다\n";
}


// 작명, 스네이크 스타일과 카멜 스타일


// string_view란?
