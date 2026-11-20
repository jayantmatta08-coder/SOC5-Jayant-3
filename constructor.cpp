#include<iostream>
using namespace std;

class Books
{
public:
int bookid;
string bookauthor;
string booktitle;


Books(int i,string a,string t)
{
	bookid=i;
	bookauthor=a;
	booktitle=t;
}

Books(Books&b)
{
	bookid=b.bookid;
	bookauthor=b.bookauthor;
	booktitle=b.booktitle;
}

void display()
{
	cout<<"book Id: "<< bookid <<endl;
	cout<<"author of the book is: "<< bookauthor <<endl;
	cout<<"title of the book is: "<< booktitle <<endl;
}
};

int main()
{
	Books b1(22,"HC Verma","Physics");
	Books b2(b1);
	b1.display();
	b2.display();
	return 0;
}
