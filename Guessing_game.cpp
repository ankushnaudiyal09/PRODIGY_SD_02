#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Guessing_Game()
{
    int attempt, secret_number, guess;
    char choice;

    srand(time(0));

    secret_number = rand() % 100 + 1;

    cout<<endl<<"-------------------------- WELCOME TO GUESSING GAME -------------------------------------"<<endl<<endl;

    do
    {

        cout << "GUESS A NUMBER BETWEEN 1 AND 100  ( INCLUSIVE ) : ";
        cin >> guess;

        attempt++;

        if (secret_number == guess)
        {
            cout << endl
                 << "CONGRATULATIONS YOU GUESS THE NUMBER IN " << attempt << " TRIES ." << endl;
        }
        else if (guess < secret_number)
        {
            cout <<endl<< "Your guess is too low. Try again." << endl;
        }
        else
        {
            cout <<endl<< "Your guess is too high. Try again." << endl;
        }

        cout << endl
             << "Do you want to play again (y/n)? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}

int main()
{

    Guessing_Game();

    return 0;
}