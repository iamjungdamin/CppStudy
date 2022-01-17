#include <iostream>
#include <string>
using namespace std;

struct Test {
	Test() = default;
	~Test() = default;
	Test(const Test&) = default;
	Test& operator= (const Test&) = default;
	Test(Test&&) = default;
	Test& operator= (Test&&) = default;
};

int main()
{
	Test a;		// Test();
	Test b;

	Test c = a;	// 복사 생성
	b = c;		// 복사 대입

	string s1{ "C++ 언어에서 문자열 처리는 이걸로" };
	//string s2 = s1;		// 복사 생성
	string s2 = move(s1);	// 이동
	//string s2 = static_cast<string&&>(s1);

	cout << "s1 - " << s1 << endl;
	cout << "s2 - " << s2 << endl;
}


// C++ 언어는 필요에 따라 6개의 special function을 만든다
// 1. Test()							default constructor
// 2. ~Test()							destructor
// 3. Test( const Test& )				copy constructor
// 4. Test& operator=( const Test& )	copy assignment operator
// 5. Test( Test&& )					move constructor
// 6. Test& operator=( Test && )		move assignment operator


