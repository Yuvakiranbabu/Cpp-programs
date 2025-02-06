#include <iostream>
#include<vector>
using namespace std;

int main()
{
    char choice{};
    vector<int>numbers{1,3,5,7,9};
    do{
        cout<<"P - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;


        if (choice=='p' || choice=='P'){
            if(numbers.size()==0){
                cout<<"[] the list is empty."<<endl;
            }else{
                cout<<"[";
                for(auto val:numbers){
                    cout<<" "<<val<<" ";
                }
                cout<<"]"<<endl;
            }
        }else if(choice=='a' || choice=='A'){
            int num_add;
            cout<<"Enter the number to be added to the list: ";
            cin>>num_add;
            numbers.push_back(num_add);
            cout<<"the number "<<num_add<<" was added to the list."<<endl;
        }else if (choice=='m' || choice=='M'){
            if(numbers.size()==0){
                cout<<"Unable to calculate the mean - no elements in the list."<<endl;

            }else{
                double sum{};
                double average{};
                for(auto val:numbers){
                    sum=sum+val;          
                }
                average=sum/numbers.size();
                cout<<"the mean of the numbers is "<<average<<endl;
            }
            
        }else if(choice=='s' || choice=='S'){
            if(numbers.size()==0){
                cout<<"[] the list is empty."<<endl;
            }else{
                int small{};
                small=numbers.at(0);
                for(auto val:numbers){
                    if(val<=small){
                        small=val;
                    }
                }cout<<"the smallest number in this list is: "<<small<<endl;
            }
        }
        else if(choice=='l' || choice=='L'){
            if(numbers.size()==0){
                cout<<"[] the list is empty."<<endl;
            }else{
                int large{};
                large=numbers.at(0);
                for(auto val:numbers){
                    if(val>=large){
                        large=val;
                    }
                }cout<<"the largest number in this list is: "<<large<<endl;
            }
        }
        else if(choice=='q' || choice=='Q'){
            cout<<"goodbye";
        }else{
            cout<<"Unknown selection.";
        }

    }while(choice!='q' && choice !='Q');
    
}

