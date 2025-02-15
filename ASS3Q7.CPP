#include<iostream.h>
#include<conio.h>
#include<string.h>
class worker
{
char w_name[20];
int no_of_days_worked;
float pay_rate,salary;
public:
worker()
{
no_of_days_worked=45;
pay_rate=500;
}
worker(float n,float s)
{
no_of_days_worked=n;
pay_rate=s;
}
void calculate()
{
salary=(no_of_days_worked*pay_rate);
}
void display()
{
cout<<"salary of worker is"<<salary<<endl;
}
};
void main()
{
float a,b;
char c[30];
clrscr();
cout<<"Enter the worker name"<<endl;
cin>>c;
cout<<"enter the no of days worked"<<endl;
cin>>a;
cout<<"enter pay rate"<<endl;
cin>>b;
cout<<"worker name is:"<<c<<endl;
worker w1,w2(a,b);
w1.calculate();
w1.display();
w2.calculate();
w2.display();
getch();
}
