// ����� ���� �ڷ��� User-defined Data Type
// struct

#include <iostream>
#include <string>
using namespace std;

struct Dog {
	char age;
	string name;
};

int main()
{
	Dog dog;
	dog.age = '2';
	dog.name = "�����";

	cout << "�̸�: " << dog.name << ", ����: " << dog.age << endl;

	cout << sizeof(Dog);
}


// 1. ����� ���� �ڷ����� ������
// struct, class


// 2. �޸��� ũ��� ��� ���������� �˾ƺ���
// sizeof(dog) == 28
// int�� 4, string�� 24

// char�� 1, string�� 24
// sizeof(dog) == 28
// padding, �ּҰ� 4 �������� �ӵ��� ����

// alignas(32), alignas(64) �� ����


// 3. �޸��� ���� ��� �ʱ�ȭ�ϴ��� �˾ƺ���
// special function
