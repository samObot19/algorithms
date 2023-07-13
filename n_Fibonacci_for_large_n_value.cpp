#include<iostream>
#include <cmath>

using namespace std;

// fn = An-1 + An-2
// fn = pow(r, n)
// the general solution is An = k1*pow(r1, n) + k2*pow(r2, n)
// read about how to solve reccursion equaion

double Fibonacci(int n){
    const double k = 1/sqrt(5);
    const double m = sqrt(5);

    double An = k*(pow((1 + m)/2, n) - pow((1 - m)/2, n));
    return An;
}

// the time complexity of the function Fibonacci is O(log(n)) by assuming the complexity of pow() function O(log(n))
// its better than the reccursive function of Fibonacci the complexity is O(2^n)
int main(){
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
    cout << Fibonacci(i) << " ";    
    }
    return 0;
}