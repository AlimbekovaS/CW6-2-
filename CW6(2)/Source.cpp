#include"dsad.h"
#include<iostream>
using namespace std;
void main() {
	double a = 10.5;
	var v = a;
	cout << v << endl;
	system("pause");
}


//konec proecta CW6
//vector.h
//friend ostream & operator<<(ostream & os, vector v);
////cout << v;
//
//vector.cpp
//ostream & operator<<(ostream & os, vector v) //operator vyvoda rabotaet dlia nashego obekta
//{
//	for (int i = 0;i < v.size(); i++)
//		os << v[i] << "\t";
//	return os;
//}