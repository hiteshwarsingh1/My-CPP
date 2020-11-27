#include<iostream>

using namespace std;

class student{
	double marks;
	
	public:
		
		int sub_code;
		student();	
		friend void printMarks(student h);//friend function declared
		void setmark(double m);
};
//member function
void student::setmark(double m){
	marks=m;
}
//constructor
student::student(void){
	cout<<"Constructor Called"<<endl;
}
//friend function is defined
void printMarks(student h){
	cout<<h.marks;
	
}
int main(){
	student hi;
	hi.setmark(22.5);
	printMarks(hi);
}
