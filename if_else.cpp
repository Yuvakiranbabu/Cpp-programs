#include<iostream>
using namespace std;

int main()
{
    int marks{};
    cout<<"Enter the marks obtained in the placement metrics: ";
    cin>>marks;
    if (marks>=90){
        cout<<"Your score "<<marks<<" is the best.";
    }
    else if(marks>=80){
        cout<<"Your score "<<marks<<" is really good.";
    }
    else if (marks>=70){
        cout<<"Your score "<<marks<<" is average.";
    }
    else if (marks>=60){
        cout<<"Your score "<<marks<<" is below average.";
    }
    else
        cout<<marks<<" you have a really low score.";


   return 0;

}











































