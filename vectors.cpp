#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vector1;
    vector<int> vector2;

    // Adding elements to vector1
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "vector1 elements:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The size of vector1 is: " << vector1.size() << endl;

    // Adding elements to vector2
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "vector2 elements:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The size of vector2 is: " << vector2.size() << endl << endl;

    // 2D vector initialization
    vector<vector<int>> vector2d;

    // Modifying vector1
    vector1[0] = 1000;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    // Printing updated elements of vector2d
    cout << "After modifying vector1:" << endl;
    cout << vector2d[0][0] << " " << vector2d[0][1] << endl;
    cout << vector2d[1][0] << " " << vector2d[1][1] << endl;

    return 0;
}














