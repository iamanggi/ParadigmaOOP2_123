#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalam() final {
		cout << "Hallo saya function dari base class";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "hallo saya function dari derived class";
	}
};

int main()[
	derivedClass a;
	a.perkenalan();

	return 0;
]