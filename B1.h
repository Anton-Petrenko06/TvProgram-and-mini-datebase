#pragma once
#include <iostream>
using namespace std;
class B1
{
	int a;
public:
	B1(int _a) { a = _a; }
	void showInfoB1()const { cout << "Переменная a1: " << a << endl; }
};
class B2
{
	int b;
public:
	B2(int _b) { b = _b; }
	void showInfoB2() const { cout << "Переменная b2: " << b << endl; }
};
class D1:public B1{
	int c;
public:
	D1(int a, int _c) :B1(a) { c = _c; }
	void showInfoD1()const {
		B1::showInfoB1();
		cout << "Переменная d1: " << c << endl;
	}
};
class D2:private B2,private D1 {
	int d;
public:
	D2(int a, int b, int c,int _d ) :B2(a), D1(b,c) { d = _d; }
	void showInfoD2() const {
		B2::showInfoB2();
		cout << "Переменная d2: " << d << endl;
	}
};
class D3 :public D2 {
	int e;
public:
	D3(int a, int b, int c, int d, int _e) : D2(a,b,c,d) { e = _e; }
	void showInfoD3()const {
		D2::showInfoD2();
		cout << "Переменная d3: " << e << endl;
	}
};



