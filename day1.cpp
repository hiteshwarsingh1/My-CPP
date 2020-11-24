#include<iostream>
using namespace std;
void swap(int *x,int *y);
int main(){
//	int a=10;
////	cout<<a;
//	typedef int bla;
//	bla b=a;
//	cout<<h;
////	cout<<b;
//	enum color{blue,red=4,green} c;
//	c=green;
//	cout<<c;
//conditonal formatting
	int a=10;
	int b=20;
	int c=10;
//	a==b?cout<<"True1":cout<<"False1";
//	a==c?cout<<"True2":cout<<"False2";
//	cout<<b<<" "<<a<<"\n";
	cout<<"f"<<&a<<"\n";
	swap(&a,&b);
	cout<<"l"<<&a;
//	cout<<b<<" "<<a;
//	cout<<*&a;
}
void swap(int *x,int *y){
	cout<<x<<" "<<*x<<" "<<&x<<"\n";
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	//return;
	return;
}
