#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{

    int no_of_small_rooms{0};
    int no_of_big_rooms{0};
    cout<<"Welcome to jake room cleaning service"<<endl;
    cout<<"Enter the number of small rooms you would like to be cleaned ?: ";
    cin>>no_of_small_rooms;
    cout<<"Enter the number of big rooms you would like to be cleaned ?: ";
    cin>>no_of_big_rooms;
    const double price_of_small_room{25};
    const double price_of_big_room{35};
    const double tax_percentage{6};
    double tax=((price_of_small_room*no_of_small_rooms)+(price_of_big_room*no_of_big_rooms))*0.06;
    cout<<"price of cleaning one small room: "<<price_of_small_room<<endl;
    cout<<"price of cleaning one big room: "<<price_of_big_room<<endl;
    cout<<"Tax: "<<tax_percentage<<" percentage"<<endl;
    cout<<"Estimated tax amount for cleaning given rooms: "<<tax<<endl;
    cout<<"Total estimated cost: "<<((price_of_small_room*no_of_small_rooms)+(price_of_big_room*no_of_big_rooms))+tax;



}
