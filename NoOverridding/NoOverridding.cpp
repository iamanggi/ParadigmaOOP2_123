#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalam() final {
		cout << "Hallo saya function dari base class";
	}
};