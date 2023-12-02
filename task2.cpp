#include <bits/stdc++.h>
using namespace std;

void add(int &n1, int &n2){
    cout << "Enter 1 number : ";
    cin >> n1;
    cout << "Enter 2 number : ";
    cin >> n2;

    int res = n1 + n2;
    cout << n1 << " + " << n2 << " = " <<  res << endl << endl;
}

void sub(int &n1, int &n2){
    cout << "Enter 1 number : ";
    cin >> n1;
    cout << "Enter 2 number : ";
    cin >> n2;

    int res = n1 - n2;
    cout << n1 << " - " << n2 << " = " <<  res << endl << endl;
}

void mul(int &n1, int &n2){
    cout << "Enter 1 number : ";
    cin >> n1;
    cout << "Enter 2 number : ";
    cin >> n2;

    int res = n1 * n2;
    cout << n1 << " * " << n2 << " = " <<  res << endl << endl;
}

void divi(int &n1, int &n2){
    cout << "Enter 1 number : ";
    cin >> n1;
    cout << "Enter 2 number : ";
    cin >> n2;

    int res = n1 / n2;
    cout << n1 << " / " << n2 << " = " <<  res << endl << endl;
}

void mod(int &n1, int &n2){
    cout << "Enter 1 number : ";
    cin >> n1;
    cout << "Enter 2 number : ";
    cin >> n2;

    int res = n1 % n2;
    cout << n1 << " % " << n2 << " = " <<  res << endl << endl;
}

int main(){
    int n1, n2;
    int choice;
    cout << endl << "+-*/% " << "Calculator" << " +-*/%" << endl << endl;
    while(choice != 6){
        cout << "| 1" << " | " << "2" << " | " << "3" << " | " << "4" << " | " << "5" << " | " << "6    |" << endl;
        cout << "| +" << " | " << "-" << " | " << "*" << " | " << "/" << " | " << "%" << " | " << "exit |" << endl << endl;
        cout << "Enter 1, 2, 3, 4, 5 or 6 to perform the preferred operation : ";
        cin >> choice;
        switch(choice){
            case 1 : add(n1, n2);
            break;
            case 2 : sub(n1, n2);
            break;
            case 3 : mul(n1, n2);
            break;
            case 4 : divi(n1, n2);
            break;
            case 5 : mod(n1, n2);
            break;
            case 6 : exit(0);
            break;
            default : cout << endl << "Invalid Choice! Please enter a valid choice." << endl << endl;
            break; 
        }
    }
}