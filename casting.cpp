#include<iostream>
using namespace std;

int main()
{
    int num1{},num2{},num3{},num4{},num5{},sum{};
    cout<<"Enter five numbers for which you want the average: ";
    cin>>num1>>num2>>num3>>num4>>num5;
    sum=num1+num2+num3+num4+num5;
    cout<<"sum: "<<sum<<endl;
    double average{0.0};
    average=static_cast<double>(sum)/5;
    cout<<"The average of the given five numbers is: "<<average<<endl;


}
