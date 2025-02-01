#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    //char selection{};
    // do{
    //     double length{},width{};
    //     cout<<"Enter the length and width seperated by a space: ";
    //     cin>>length>>width;
    //     double area{length*width};
    //     cout<<"The area of the rectangle is "<<area<<endl;

    //     cout<<"Do you want to calculate for another rectangle(Y/N): ";
    //     cin>>selection;

    // } while (selection=='Y' || selection=='y');{
    //     cout<<"done";
    // }



    char select_another;
    int selection;

    do {
        // Keep asking until a valid selection is made
        do {
            cout << "The cars in the garage are:\n";
            cout << "1. Ferrari LaFerrari\n";
            cout << "2. Porsche 911 Spyder\n";
            cout << "3. McLaren P1\n";
            cout << "Choose the car you want to ride today: ";
            cin >> selection;

            if (selection < 1 || selection > 3) {
                cout << "Invalid choice! Please try again.\n";
            }

        } while (selection < 1 || selection > 3); // Loop until a valid input

        // Output the chosen car
        if (selection == 1) {
            cout << "Great! Let's roll with LaFerrari.\n";
        } else if (selection == 2) {
            cout << "Great! Let's roll with 911 Spyder.\n";
        } else {
            cout << "Great! Let's roll with P1.\n";
        }

        // Ask if they want to select another car
        cout << "Do you want to take another car as well? (Y/N): ";
        cin >> select_another;

    } while (select_another == 'Y' || select_another == 'y'); // Continue if they want another car

    cout << "Thank you!\n";
    return 0;
}
