#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    const int lowerBound = 1;
    const int upperBound = 100;
    const int maxAttempts = 7;

    int secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I've selected a number between " << lowerBound << " and " << upperBound << ". You have " << maxAttempts << " attempts to guess it." << endl;

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        attempts++;

        if (guess < lowerBound || guess > upperBound) {
            cout << "Your guess is out of bounds. Please guess between " << lowerBound << " and " << upperBound << "." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts << " attempts!" << endl;
            break;
        }
    }

    if (attempts >= maxAttempts) {
        cout << "Sorry, you've run out of attempts. The correct number was " << secretNumber << "." << endl;
    }

    return 0;
}
