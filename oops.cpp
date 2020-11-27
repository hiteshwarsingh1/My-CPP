#include<iostream>
using namespace std;
class box{
	public://public class elements can be used anywhere in class
		double length;
		double breadth;
		double height;
};
int main(){
	box b;
	//direct member access operator(.) basically .dot operator
	//public members can be directly accessed by .dot operator
	double volume;
	b.height=10.0;
	b.breadth=3.0;
	b.length=5.0;
	volume=b.height*b.breadth*b.length;
	cout<<"Vol of box"<<volume;
	
}

