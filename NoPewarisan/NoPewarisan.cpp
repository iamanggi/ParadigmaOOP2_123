#include<iostream>
using namespace std;

class basecClass final {
public:
	virtual void perkenalan() {
		cout << "Hallo saya function dari base class";
	}
};

class derivedClass :public basecClass {
public:
	void perkenalan() {
		cout << "Hallo saya function dari derived class";
	}
};