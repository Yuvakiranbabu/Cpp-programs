#include<iostream>
#include<vector>
using namespace std;

int main(){
    //print table till 5 table

    for(int i{1};i<=5;i++){
        for(int j{1};j<=10;j++){
            cout<<i<<" * "<<j<<" = "<<i*j<<endl; 
        }
    }
    return 0;

}