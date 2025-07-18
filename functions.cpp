#include <iostream>
using namespace std;

int factorial(int n) {
    // Base Case
    if (n == 0 || n == 1)
        return 1;
    // Recursive Case
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);
    cout << "Factorial of " << num << " is " << result << endl;

    return 0;
}
