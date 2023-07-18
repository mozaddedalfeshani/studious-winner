#include<cmath>
#include<iostream>
using namespace std;
int main(){
    double x1,x2,y1,y2;
    cout<< "Enter the 1st co-ordinate digit x1 and y1 "<<endl;
    cin>> x1 >> y1;
    cout<< "Enter the 2nd co-ordinate digit x2 and y2 "<<endl;
    cin>> x2 >> y2;
    cout<< "The distance beetween 2 co-ordinate is : "<< endl;
    cout<< "\t Ans: "<< sqrt(pow((x1-x2),2)+pow((y1-y2),2))<<endl;
    return 0;
}