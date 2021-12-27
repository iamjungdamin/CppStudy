// ���� �����
// �ڵ带 ������ �� �ֵ��� save ����� �����

#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>

int main()
{
	// �Է� ������ ����
	std::ifstream in{ "week01-4.cpp" };

	// ��� ������ ���ٿ� ���� ���� ����
	std::ofstream out{ "save.txt", std::ios::app };

	// ��� ���Ͽ� �ð��� ����Ѵ�
	std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
	time_t ct = std::chrono::system_clock::to_time_t(tp);
	tm* lt = localtime(&ct);

	out.imbue(std::locale("korean"));
	out << "\n\n\n";
	out << "---------------------------------------------" << '\n';
	out << "���� �ð�: " << std::put_time(lt, "%c (%A)") << '\n';
	out << "---------------------------------------------" << "\n\n";


	// �Է� ������ �о� ��� ���Ͽ� ����Ѵ�
	int c;
	while ((c = in.get()) != EOF) {
		out.put(c);
	}

	std::cout << "�ڵ带 save.txt�� �����Ͽ����ϴ�\n";
}


// 1. ȭ���� �ƴ϶� ���Ͽ� ����غ���
// ȭ�鿡 ����� cout.put(c);
// ���Ͽ� ����� out.put(c);


// 1-2. ������ ���Ͽ� �����
// ����� ������ ���ٿ� ���� ��� = append �� ����


// 2. ������ �ð��� ����غ���
// ������ �ڷ����� auto�� ����


