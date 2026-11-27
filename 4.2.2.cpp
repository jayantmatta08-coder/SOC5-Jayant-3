#include<iostream>
using namespace std;
class Person
{
public:
virtual void walk()
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
Person *ptr;
Student s;
ptr=&s;
ptr->walk();
return 0;
}
