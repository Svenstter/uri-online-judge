
/*  ---------------------------------------------------------------------------------
    Problem
    Read three values (variables A, B and C), which are the three student's grades. 
    Then, calculate the average, considering that grade A has weight 2, grade B has 
    weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 
    10.0, always with one decimal place.

    Input
    The input file contains 3 values of floating points with one digit after the 
    decimal point.

    Output
    Print MEDIA(average in Portuguese) according to the following example, with a 
    blank space before and after the equal signal.
    ---------------------------------------------------------------------------------  */

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio( false );
    cout.setf( ios::fixed, ios::floatfield );
    cout.precision( 1 );

    double A, B, C, MEDIA;

    cin >> A >> B >> C;

    MEDIA = ( A * 2.0 + B * 3.0 + C * 5.0 ) / 10;

    cout << "MEDIA = " << MEDIA << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}