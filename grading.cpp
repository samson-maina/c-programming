#include <iostream>
using namespace std;

int main()
{
int eng,bio,chem,agri,histoly;
cout <<" enter marks obtained in 5 units";
cin>>eng>>bio>>chem>>agri>>histoly;
avg=(eng+bio+chem+agri+histoly)/5;

if(avg>=70&&avg<=100)
{
cout<<"grade A";
}
else if(avg>=60&&avg<=70)
{
cout<<"grade B";
}
else if(avg>=50&&avg<=60)
{
cout<<"grade C";
}
else if (avg>=40&&avg<=50)
{
cout<<"grade D";
}
else if (avg>=0&&avg<=40)
{
cout<<"grade E";
}
return 0;
}