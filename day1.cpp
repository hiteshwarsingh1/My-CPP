#include<iostream>
using namespace std;
extern int h=8;
int main(){
	int a=10;
//	cout<<a;
	typedef int bla;
	bla b=a;
	cout<<h;
//	cout<<b;
	enum color{blue,red=4,green} c;
	c=green;
//	cout<<c;
}
