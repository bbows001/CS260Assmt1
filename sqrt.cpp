#include <iostream>
#include <iomanip>

using namespace std;

double estimateSqrt(double target, double initial)
{
    // Set the initial guess and calculate the error
    double guess = initial;
    double error = guess * guess - target;

    // Refine the guess until the error is within the acceptable range
    while (error > 0.001 || error < -0.001)
    {
        guess = (guess + target / guess) / 2.0;
        error = guess * guess - target;
    }
    // Return the final estimate
    return guess;
}

int main()
{
    cout << "What number would you like the square root of? " << flush;

    double z;
    cin >> z;

    cout << "Enter an initial guess: " << flush;

    double x;
    cin >> x;
    if (x > 0.0 && z > 0.0)
    {
        double s = estimateSqrt(z, x);
        cout << "The square root is " << fixed << setprecision(3) << s << endl;
    }
    else
    {
        cout << "Sorry, but I can't do that" << endl;
    }

    return 0;
}
