#include<iostream>
using namespace std;
class Student
{
	public:        
	int roll_no;
	string name;
	float marks;
void accept()
	{
		cout<<"enter your name: ";
		cin>>name;
		cout<<"enter your roll Number: ";
		cin>>roll_no;
		cout<<"enter your marks: ";
		cin>>marks;
	}

void result()
	{
		if(marks>=33)
			{
				cout<<"pass"<<endl;
			}
		else
			{
				cout<<"fail"<<endl;
			}
	}

void display()
	{
		cout<<"#######The Details of the students are as follows#######"<<endl;
		cout<<"student name is: "<< name << endl;
		cout<<"student roll no. is: "<< roll_no << endl;
		cout<<"student marks is: "<< marks << endl;
		result();
	}

};

int main()
{
	Student s;
	s.accept();
	s.display();
	return 0;
}
