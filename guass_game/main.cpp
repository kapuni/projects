#include <iostream>

using namespace std;

int main()
{
    int sceretNum = 8;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;


    while(sceretNum != guess && !outOfGuesses)
    {
        if(guessCount < guessLimit)
        {
            cout << "Enter your guess: ";
            cin >> guess;
            guessCount++;
        }else
        {
            outOfGuesses = true;
        }
    }
    if(outOfGuesses)
    {
        cout << "You Lose!";
    }else
    {
        cout << "You Win!";
    }
    return 0;
}
