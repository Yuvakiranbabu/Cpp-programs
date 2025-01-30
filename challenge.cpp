#include<iostream>
using namespace std;

int main()
{
    int amount{};
    cout<<"Enter the amount you want the change for: ";
    cin>>amount;
    int dollar{},quarter{},dime{},nickel{},penny{};
    int dol_rem{},qua_rem{},dim_rem{},nick_rem{};
    dollar=amount/100;
    dol_rem=amount%100;
    quarter=dol_rem/25;
    qua_rem=dol_rem%25;
    dime=qua_rem/10;
    dim_rem=qua_rem%10;
    nickel=dim_rem/5;
    nick_rem=dim_rem%5;
    penny=nick_rem/1;

    cout<<"dollars: "<<dollar<<endl;
    cout<<"quarter: "<<quarter<<endl;
    cout<<"dime: "<<dime<<endl;
    cout<<"nickel: "<<nickel<<endl;
    cout<<"penny: "<<penny<<endl;

    return 0;
}














































