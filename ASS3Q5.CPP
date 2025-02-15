
#include<iostream.h>
#include<conio.h>
class point
{
int x,y,a,b,z,t;
public:
point()
{
x=3;
y=4;
}

point(int n1,int n2)
{
a=n1;
b=n2;
}
point(point &N)
{
z=N.z;
t=N.t;
}
void display1()
{
cout<<"the value of x and y in default contructor is "<<x<<"and"<<y<<endl;
}
void display3()
{
cout<<"the value of variable in copy constructor is "<<z<<"and"<<t<<endl;
}
void display2()
{
cout<<"the value of variables in parameterized constuctor is"<<a<<"and"<<b<<endl;
}
};
void main()
{
int p,q;
clrscr();
cout<<"Enter the value"<<endl;
cin>>p;
cout<<"Enter the value"<<endl;
cin>>q;
point p1;
point p2(p,q);
point p3(p2);
p1.display1();
p2.display2();
p3.display3();
getch();
}


