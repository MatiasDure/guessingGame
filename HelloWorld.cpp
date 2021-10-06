//Guess the number game
#include <iostream>

using namespace std;

int main(){
    int number = 9;
    int guess = 0;
    while(guess != number){
        cout<< "Guess the number: ";
        cin >> guess;
    }

}
