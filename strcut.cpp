#include<iostream>
#include<cstring>
using namespace std;
struct book{ //if we use it as typedef struct book{}; then at A we can write book b1 instead of strcut book b1
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
	struct book b1;//this is A
	struct book b2;
	strcpy(b1.title,"5AM Club");
	strcpy(b1.author,"Robin Sharma");
	b1.pages=350;
	b1.cost=500;
	printb(&b1);
}
