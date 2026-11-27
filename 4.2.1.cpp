#include<iostream>
using namespace std;
class Person
{
public:
void walk()
{
  cout<<"the person is walking"<<endl;

}
};
class Student:public Person
{
public:
void walk()
{
   cout<<"the student is walking"<<endl;
}
};
int main()
{
Student s;
s.walk();
return 0;
}

