#include<iostream>
using namespace std;
class Parent
{
    public:
    void Display()
    {
        cout<<"Display of Parent"<<endl;
    }
};
class Child
{
    public:
    void Display()
    {
        cout<<"Display of child"<<endl;
    }
};
int main()
{
    Parent p;
    Child *c=&p;
    c->Display();

}