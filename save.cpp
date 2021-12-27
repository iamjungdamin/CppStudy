#include <fstream>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <string>

void save(std::string fileName)
{
	// �Է� ������ ����
	std::ifstream in{ fileName };

	// ��� ������ ���ٿ� ���� ���� ����
	std::string outFileName{ "save.txt" };
	std::ofstream out{ outFileName, std::ios::app };

	// ��� ���Ͽ� �ð��� ����Ѵ�
	auto tp = std::chrono::system_clock::now();
	auto ct = std::chrono::system_clock::to_time_t(tp);
	auto lt = localtime(&ct);

	out.imbue(std::locale("korean"));
	out << "\n\n\n";
	out << "---------------------------------------------" << '\n';
	out << fileName << std::put_time(lt, " - %c (%A)") << '\n';
	out << "---------------------------------------------" << "\n\n";


	// �Է� ������ �о� ��� ���Ͽ� ����Ѵ�
	int c;
	while ((c = in.get()) != EOF) {
		out.put(c);
	}

	std::cout << fileName << "�� " << outFileName << "�� �����Ͽ����ϴ�\n";
}


// �۸�, ������ũ ��Ÿ�ϰ� ī�� ��Ÿ��


// string_view��?
