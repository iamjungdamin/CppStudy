#include <iostream>
using namespace std;

class 부모 {
protected:
	int 부모정수;

//public:
//	void set부모정수(int n) {
//		부모정수 = n;
//	}
//
//	int get부모정수() const {
//		return 부모정수;
//	}
};

class 자식 : public 부모 {
	int 자식정수;

public:
	자식() {
		자식정수 = 456;
		부모정수 = 123;
	}

	friend ostream& operator<<(ostream&, const 자식&);
};

ostream& operator<<(ostream& os, const 자식& child) {
	cout << "[부모정수-" << child.부모정수 << "],[자식정수-" << child.자식정수 << "]";
	return os;
}

int main()
{
	자식 child;

	cout << sizeof(child) << endl;

	cout << child << endl;
}


// 1. child가 차지하는 메모리의 크기는?
// 8, [부모정수][자식정수]


// 2. [부모정수-123],[자식정수-456] 가 출력되도록 해보자


// 상속 관계에서 부모 클래스의 protected 멤버는
// 자식 클래스가 자신의 private 멤버처럼 사용 가능

