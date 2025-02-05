// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     //print table till 5 table

//     for(int i{1};i<=5;i++){
//         for(int j{1};j<=10;j++){
//             cout<<i<<" * "<<j<<" = "<<i*j<<endl; 
//         }
//         cout<<"---------------"<<endl;
//     }
//     return 0;

// }

#include<iostream>
#include<vector>
using namespace std;

int main (){
    int num_data_items{};
    cout<<"how many data items do you have? ";
    cin>>num_data_items;
    vector<int>data_items{};

    for (int i{1};i<=num_data_items;i++){
        int data{};
        cout<<"Enter the "<<i<<" number: ";
        cin>>data;
        data_items.push_back(data);

    }
    //always use this kind of loop to display the vectors or arrays
    for(auto val:data_items){//asssume val =3
        for(int j{1};j<=val;j++){
            cout<<"*";

        }
        cout<<endl;
    }

}