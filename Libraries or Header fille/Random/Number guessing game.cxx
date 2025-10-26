#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()
using namespace std;

int main()
{
    srand(time(0)); // seed current time se

    int secret = rand() % 100 + 1; // 1–100 ke beech random number
    int guess;
    int tries = 0;

    cout << "=== Number Guessing Game ===\n";
    cout << "Maine 1 se 100 ke beech ek number socha hai.\n";
    cout << "Tumhe usse guess karna hai!\n\n";

    do
    {
        cout << "Apna guess likho: ";
        cin >> guess;
        tries++;

        if (guess > secret)
        {
            cout << "Too high! 😅\n";
        }
        else if (guess < secret)
        {
            cout << "Too low! 🙃\n";
        }
        else
        {
            cout << "🎉 Sahi pakde! Number tha " << secret
                 << ". Tumne " << tries << " tries me guess kiya.\n";
        }

    } while (guess != secret);

    return 0;
}