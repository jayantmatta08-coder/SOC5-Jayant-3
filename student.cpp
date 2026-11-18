#include <iostream>
using namespace std;
class Student
{
public:
int rno;
float percentage;
void display()
{
cout<<rno<<"is the rollno of student"<<endl;
cout<<percentage<<"Is the Percentage of student"<<endl;
}
};
int main()
{
Student S1;
cout<<"Enter the Roll no.: "<<endl;
cin>>S1.rno;
cout<<"enter the percentage: "<<endl;
cin>>S1.percentage;
S1.display();

Student S2;
cout<<"enter the roll no.: "<<endl;
cin>>S2.rno;
cout<<"enter the percentage : "<<endl;
cin>>S2.percentage;
S2.display();
return 0;
}

