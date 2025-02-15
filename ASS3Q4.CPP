
#include<iostream.h>
#include<conio.h>
class number
{
int s;
int n;
public:
number(int num)
{
n=num;
}
void sum()
{
s=0;
for(int i=1;i<=n;i++)
{
s=s+i;
cout<<"Sum of number is :"<<s<<endl;
}
}
};
void main()
{
int n1;
clrscr();
cout<<"enter a value upto addition will done"<<endl;
cin>>n1;
number o1(n1);
o1.sum();
getch();
}



