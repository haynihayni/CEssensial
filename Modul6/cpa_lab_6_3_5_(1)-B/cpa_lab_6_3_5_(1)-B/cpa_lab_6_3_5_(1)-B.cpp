// cpa_lab_6_3_5_(1)-B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;
class Base
{
public:
	virtual string Draw(){ return " /\\ \n"; }
protected:
	string special;
};

class D1 :public Base {
public:
	D1() {
		special = "++";
	}
	string Draw() {
		return Base::Draw() + "/" + special + "\\\n";
	}
};
class D2 :public Base {
	public:
	D2() {
		special = "**";
	}
	string Draw() {
		return Base::Draw() + "/" + special + "\\\n";
	}
};
class D3 :public Base {
public:
	D3() {
		special = "/\\";
	}
	string Draw() {
		return Base::Draw() + "/" + special + "\\\n";
	}
};
int main()
{
	Base *d1, *d2, *d3;
	d1 = new D1();
	d2 = new D2;
	d3 = new D3;
	std::cout<<(d1->Draw());
	cout << d2->Draw();
	cout<<d3->Draw();
    return 0;
}

