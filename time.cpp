#include<iostream>
#include<cstring>
using namespace std;
typedef struct book{
	char title[50];
	char author[20];
	int pages;
	int cost;
};
void printb(struct book *b){
	cout<<"Title"<<"\t\t"<<"Author"<<"\t\t"<<"Pages"<<"\t"<<"Cost"<<endl;
	cout<<b->title<<"\t"<<b->author<<"\t"<<b->pages<<"\t"<<b->cost;

}
int main()
{
	book b1;
	book b2;
	strcpy(b1.title,"5AM Club");
	strcpy(b1.author,"Robin Sharma");
	b1.pages=350;
	b1.cost=500;
	printb(&b1);
	cout<<"my Name";
}
