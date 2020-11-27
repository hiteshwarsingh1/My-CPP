#include<iostream>
using namespace std;
void swap1(int *x,int *y);
void swap2(int x,int y);
void swap3(int &x,int &y);
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
//	cout<<"f"<<&a<<"\n";
//	swap(&a,&b);
//	cout<<"l"<<&a;
//	cout<<b<<" "<<a;
//	cout<<*&a; 
	
//	int& ref=a;
//	cout<<ref<<endl;
//	
//	int* ptr;
//	ptr=&a;
//	*ptr=*ptr+2;
//	
//	cout<<*ptr<<endl;
//	cout<<a;
	cout<<a<<" "<<b<<endl;
	swap1(&a,&b);
	cout<<a<<" "<<b<<endl;
	cout<<a<<" "<<b<<endl;
	swap3(a,b);
	cout<<a<<" "<<b<<endl;
}
void swap1(int *x,int *y){
	cout<<x<<" "<<*x<<" "<<&x<<"\n";
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	//return;
	return;
}
void swap2(int x,int y){
	cout<<x<<" "<<y<<"\n";
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<x<<" "<<y<<"\n";
	//return;
	return;
}
void swap3(int &x,int &y){
	
	int temp;
	temp=x;
	x=y;
	y=temp;
	//return;
	return;
}
