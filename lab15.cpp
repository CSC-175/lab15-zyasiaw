#include<iostream>
using namespace std;

// Function prototypes
void getInfo(int& poolSize, int& drawSize);
double computeWays(int n, int k);
double factorial(int n);

int main()
    char again;
    poolSize, drawSize;

    do {
      getInfo(poolSize, drawSize);
      double combinations = computeWays(poolSize, drawSize);

      double probability = 1.0 / combinations;
      cout << "Probability of winning is " << probability << endl;
      cout << "Odds of winning are 1 in " << combinations << endl << endl;

      cout << "Would you like to calculate the probability of another scenario? (y/n) ";
      cin >> again;
            } while (again == 'y' || again == 'Y');
            return 0;
            }
      void getInfo(int& poolSize, int& drawSize) {
        bool valid = false;

        while (!valid) {
          cout << "How many balls (1-12) are in the pool to pick from? ";

            if (!(cin >> poolSize)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Input Error! There must be between 1 and 12 balls." << endl;
                continue;
            }

            // Validate the range
            if (poolSize < 1 || poolSize > 12) {
                cout << "Input Error! There must be between 1 and 12 balls." << endl;
            } else {
                valid = true;
            }
        }

    // Reset for draw size validation
    valid = false;

    // Get and validate draw size
    while (!valid) {
        cout << "How many balls (1-" << poolSize << ") will be drawn? ";

        // Check if input is an integer
        if (!(cin >> drawSize)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input Error! " << endl;
            continue;
        }

        // Validate the range
        if (drawSize < 1 || drawSize > poolSize) {
            cout << "Input Error! " << endl;
        } else {
            valid = true;
        }
    }

    cout << endl;
}

// Calculate factorial (n!)
unsigned long long factorial(int n) {
    if (n <= 1) return 1;

    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

// Calculate combinations (n choose k)
unsigned long long computeWays(int n, int k) {
    // For large numbers, we use an optimized approach to avoid overflow
    if (k > n - k) {
        k = n - k; // Use symmetry property: C(n,k) = C(n,n-k)
    }

    unsigned long long result = 1;

    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;

/*******************************************************************
* getLotteryInfo                                                   *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
********************************************************************/



/*******************************************************************
* computeWays                                                      *
* Computes and returns the number of different possible sets       *
* of k numbers that can be chosen from a set of n numbers.         *
* The formula for this is     k!(n- k)!                            *
*                             --------                             *
*                                 n!                               *
* Note that the computation is done in a way that does not require *
* multiplying two factorials together. This is done to prevent any *
* intermediate result becoming so large that it causes overflow.   *
********************************************************************/


/*******************************************************************
* factorial                                                        *
* This function computes factorials recursively.                   *
*******************************************************************/


