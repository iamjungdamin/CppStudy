#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

class Dog {
public:
	Dog() {
		PlaySound(L"resource/dog.wav", 0, SND_FILENAME | SND_SYNC);
	}

	Dog(const Dog&) {
		PlaySound(L"resource/copy.wav", 0, SND_FILENAME | SND_SYNC);
	}

	~Dog() {
		PlaySound(L"resource/growl.wav", 0, SND_FILENAME | SND_SYNC);
	}
};

Dog& f(Dog& a) {
	return a;
};

int main()
{
	Dog dog[2];

	Dog* p = new Dog;

	Dog a = *p;

	for (const Dog& d : dog) {
	}

	delete p;
}


// 복사 생성이 되는 경우와 그렇지 않은 경우


