#include <cstdlib>
#include <iostream>
#include <string>

#include <cmath>
// sytem time use
#include <ctime>

using namespace std;

int main()
{
    cout << "abs(-10) = " << abs(-10) << endl;

    cout << "Max(5, 4) = " << max(5, 4) << endl;

    // min
    cout << fmax(5.4, 4.3)
         << endl;
    //  *  = floating max
    cout << fmin(5.4, 4.3)
         << endl;
    // *  = floating min
    cout << ceil(10.45) << endl;

    //   = make it to go up
    cout << floor(10.45) << endl;

    //   = make  it to go floor
    cout << round(10.45) << endl;

    //   =round the value
    cout << pow(2, 3) << endl;

    //  = power
    cout << sqrt(100) << endl;
    //   *  = squre root
    cout << cbrt(1000) << endl;

    //   = cube root

    cout << "exp(1) = " << exp(1)<< endl;

    cout << "exp2(1) = "<< exp2(1) << endl;    

    /**
     * min
     * fmax(5.4, 4.3) = floating max
     * fmin(5.4, 4.3) = floating min
     * ceil(10.45) = make it to go up
     * floor(10.45) = make  it to go floor
     * round(10.45) =round the value
     * pow(2, 3)= power
     * sqrt(100) = squre root
     * cbrt(1000) = cube root
     */
}