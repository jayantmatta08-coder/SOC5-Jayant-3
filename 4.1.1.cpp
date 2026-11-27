#include<iostream>
using namespace std;
class Calculator
{
private:
int num;
public:
float add(float x,float y)
{
       return x+y;
}
float add(float x,float y,float z)
{
    return x+y+z;
}
};
int main()
{
Calculator cal;
cout<<"the add of 2 no. is:"<<cal.add(5,4)<<endl;
cout<<"the add of 3 no. is:"<<cal.add(3,6,9)<<endl;
return 0;
}
