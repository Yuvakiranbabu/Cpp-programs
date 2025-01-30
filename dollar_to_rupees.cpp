//converting dollars to rupees

#include<iostream>

using namespace std;

int main()
{
    double dollar_amt;
    cout<<"Enter the amount in dollars: ";
    cin>>dollar_amt;
    double rupees_per_dollar{86.57};
    double dollar_to_rupees=dollar_amt*rupees_per_dollar;
    cout<<dollar_amt<<" dollars is equal to "<<dollar_to_rupees<<" rupees"<<endl;

    return 0;
}
























