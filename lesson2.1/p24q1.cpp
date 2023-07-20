#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double pi = 3.14159265358975;
    int base, pendicular, hypotenus ;
    
    cout<< "Enter the pendiculer : "<<endl;
    cin>> pendicular;
    cout<< "Enter the base : "<<endl;
    cin>> base;
    cout<< "Enter the hypotenus : "<<endl;
    cin>> hypotenus;
    
    double x = atan(3/4);
    cout<< x;

    // cout<< "The angle beetween base and pendicular "<< ((atan((pendicular/base)))*(180/pi))<<endl;
    // cout<< "The angle beetween base and hypotenus "<< acos((base/hypotenus))<<endl;
    // cout<< "The angle beetween pendiculer and hypotenus "<< asin((pendicular/hypotenus))<<endl;
    return 0;
}