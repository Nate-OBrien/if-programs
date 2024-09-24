/* 
Name: Nate O'Brien
Date: 9/24/24
Program Name: If statements
*/

#include <iostream>
using namespace std;

int userGuess;
int main(){
    int anshBench = 515;

    /* runs until user gets correct answer*/
    while (true){
        cout << "\nHow much can ansh bench? ";
        cin >> userGuess;
        if (userGuess == 515){
            cout << "CORRECT!!!!" << endl;
            break;
        } else if (userGuess == 120){
            cout << "...uhhh this is for sure not right... definitely." << endl;
            break;
        } else if (userGuess < 515){
            cout << "Wrong! Ansh is so much stronger than that." << endl;
        } else if (userGuess > 515){
            cout << "WRONG! Ansh is weaker than that." << endl;
        }
        userGuess = 0;
    }

    return 0;
}
