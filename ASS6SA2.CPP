#include<iostream.h>
#include<conio.h>
class car
{
protected:
int car_model_no;
float establish_year;
public:
void acc()
{
cout<<"Enter car model no"<<endl;
cin>>car_model_no;
cout<<endl<<"Enter car Establishment year"<<endl;
cin>>establish_year;
}
void dis()
{
cout<<endl<<"car madel no is:"<<car_model_no<<endl;
cout<<endl<<"car establish year is:"<<establish_year<<endl;
}
};
class maruti: public car
{
protected:
char model_name[30];
char car_color[20];
public:
void  accept()
{
acc();
cout<<endl<<"Enter Model name of maruti car"<<endl;
cin>>model_name;
cout<<endl<<"Enter car color you want "<<endl;
cin>>car_color;
}
void display()
{
dis();
cout<<endl<<"Model name you entered is"<<model_name<<endl;
cout<<endl<<"car color you want is:"<<car_color<<endl;
}
};
class maruti800 :public maruti
{
public:
void getdata()
{
accept();
}
void putdata()
{
display();
}
};
void main()
{
maruti800 m;
clrscr();
m.getdata();
cout<<"=============You enterd details are=============="<<endl;
m.putdata();
cout<<"================================================="<<endl;
getch();
}
