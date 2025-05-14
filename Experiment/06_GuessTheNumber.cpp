#include <bits/stdc++.h>
using namespace std;

void GuessTheNumber(int randomNum)
{
    int userInput;

    while (true)
    {
        cout << "Enter your guess (1 to 100): ";
        cin >> userInput;

        if (userInput < randomNum)
        {
            cout << "Too low. Try again.\n";
        }
        else if (userInput > randomNum)
        {
            cout << "Too high. Try again.\n";
        }
        else
        {
            cout << "Congratulations! You guessed the correct number.\n";
            break;
        }
    }
}

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    GuessTheNumber(randomNumber);
    return 0;
}