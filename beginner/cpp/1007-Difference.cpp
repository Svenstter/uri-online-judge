
/*  ---------------------------------------------------------------------------------
    Problem
    Read four integer values named A, B, C and D. Calculate and print the difference 
    of product A and B by the product of C and D (A * B - C * D).

    Input
    The input file contains 4 integer values.

    Output
    Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters,
    according to the following example, with a blank space before and after the
    equal signal.
    ---------------------------------------------------------------------------------  */

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio( false );

    int A, B, C, D, DIFF;

    cin >> A >> B >> C >> D;

    DIFF = ( A * B - C * D );

    cout << "DIFERENCA = " << DIFF << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}