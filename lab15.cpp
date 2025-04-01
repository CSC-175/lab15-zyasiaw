#include <iostream>
#include <limits>
using namespace std;

void getInfo(int& pickFrom, int& numPicks);
double computeWays(int n, int k);
unsigned long long factorial(int n);

void getInfo(int& pickFrom, int& numPicks) {
    bool valid = false;

    while (!valid) {
        cout << "How many balls (1-12) are in the pool to pick from? ";

        if (!(cin >> pickFrom)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input Error! There must be between 1 and 12 balls." << endl;
            continue;
        }

        if (pickFrom < 1 || pickFrom > 12) {
            cout << "Input Error! There must be between 1 and 12 balls." << endl;
        } else {
            valid = true;
        }
    }

    valid = false;

    while (!valid) {
        cout << "How many balls (1-" << pickFrom << ") will be drawn? ";

        if (!(cin >> numPicks)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input Error! " << endl;
            continue;
        }

        if (numPicks < 1 || numPicks > pickFrom) {
            cout << "Input Error! " << endl;
        } else {
            valid = true;
        }
    }
}

unsigned long long factorial(int n) {
    if (n <= 1) return 1;

    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

double computeWays(int n, int k) {
    if (k > n - k) {
        k = n - k;
    }

    double result = 1.0;

    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }

    return 1.0 / result;
}


