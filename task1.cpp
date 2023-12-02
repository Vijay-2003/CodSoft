#include <bits/stdc++.h>
using namespace std;

void guess(int &number, int &randomnumber){

    cout << endl <<"**** Welcome to the Number Guessing Game. ****" << endl << endl;
    cout << "Grade Sheet :";
    cout << "   Attempts <= 5 will award you with Grade A." << endl; 
    cout << "\t\t(5 < Attempts <= 10 ) will award you with Grade B." << endl;
    cout << "\t\tAttempts > 10 will award you with Grade C." << endl << endl;

    int cnt = 1;
    cout << "Enter the Correct Number (between 1 to 100) to Win the game: " << " | " <<"Attempt number " << cnt << endl << "-> ";
    cnt++;
    while(number != randomnumber){
        cin >> number;
        if(number == randomnumber){
            if(cnt <= 5){
                cout << "You Won" << "\t" << "with Grade A." << endl;
            }
            else if(cnt > 5 && cnt <= 10){
                cout << "You Won" << "\t" << "with Grade B." << endl;
            }
            else{
                cout << "You Won" << "\t" << "with Grade C." << endl;
            }
        }
        else if(number > randomnumber){
            cout << "Guess Lesser" << "\t" << "| " << "Attempt number " << cnt << endl << "-> ";
            cnt++;
        }
        else if(number < randomnumber){
            cout << "Guess Higher" << "\t" << "| " << "Attempt number " << cnt << endl << "-> ";
            cnt++;
        }
    }
}

int main(){
    int number;
    srand((unsigned int) time(NULL));
    int randomnumber = (rand() % 100) + 1;

    guess(number, randomnumber);

    return 0;
}