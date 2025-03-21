#include<iostream.h>
#include<conio.h>
class median
{
int *ptr,n,i;
public:
median()
{
cout<<"\n Enter size of array";
cin>>n;
ptr=new int[n];
cout<<"\nEnter elements of array";
for(i=0;i<n;i++)
{
cin>>ptr[i];
}
}
void putdata()
{
if(n%2==1)
{
cout<<"\nMedian:"<<ptr[n/2]<<endl;
}
else
{
cout<<"\n median:"<<(ptr[n/2-1]+ptr[n/2])/2.0<<endl;
}
}
~median()
{
delete[] ptr;
}
};
void main()
{
clrscr();
median m;
m.putdata();
getch();
}