#include<iostream>
using namespace std;
class Car
{
    public:
    virtual void start()=0;

    virtual void stop()=0;
};
class Fortuner : public Car
{
    public:
    void start()
    {cout<<"Fortuner started"<<endl;}
    void stop()
    {cout<<"Fortuner stopped"<<endl;}
};
class BMW:public Car
{
    public:
    void start()
    {cout<<"BMW started"<<endl;}
    void stop()
    {cout<<"BMW stopped";}
};
int main()
{
    Car *c=new Fortuner();
    c->start();
    c->stop();
    c=new BMW();
    c->start();
    c->stop();
}