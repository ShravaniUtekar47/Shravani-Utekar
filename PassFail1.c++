#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks >= 40)
        cout << "You have passed." << endl;
    else
        cout << "You have failed." << endl;

    return 0;
}

