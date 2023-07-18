#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double base, pendicular, hypotenuse;
    cout<< "Enter the base : "<<endl;
    cin>> base;
    cout<< "Enter the pendiculer : "<<endl;
    cin>> pendicular;
    cout<< "Enter the hypotenus : "<<endl;
    cin>> hypotenus;

    cout<< "The angle beetween base and pendicular "<< atan((pendicular/base))<<endl;
    cout<< "The angle beetween base and hypotenus "<< acos((base/hypotenus))<<endl;
    cout<< "The angle beetween pendiculer and hypotenus "<< asin((pendicular/hypotenus))<<endl;
    return 0;
}