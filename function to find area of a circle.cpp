// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
float circle(int r);
int main() {
    int radius;
    float area;
    cout<<"enter radius"<<endl;
    cin>>radius;
    area=circle(radius);
    cout<<"the area of the circle is"<<area<<endl;
    return 0;
}
float circle(int r){
float area=3.142*r*r;
return area;
}