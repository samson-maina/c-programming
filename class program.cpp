// program to excute an addational class with 3 data memberand a member function
#include <iostream>
using namespace std;
//data member
class addation{
    //member function
    public:
    int i,j,k;
    int product(){
        return (i*j*k);
    }
    };
//main function
int main(){
    //object creation
    addation addation1;
    //variable declaration and intiallising
    int i=addation1.i=22;
    int j=addation1.j=30;
    int k=addation1.k=50;
    cout<<"product is"<<addation1.
    product();
    return 0;
}
