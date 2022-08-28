// C++ code for " Mixed Fraction "
// Author : Siddhant Deshmukh


#include <iostream>
using namespace std;


int main()
{

    int n, d, q, r;
        
        cout << "Enter the fraction (as numerator and denominator)->\n";

        cin >> n >> d;
        
        q=n/d;
        r=n%d;
        
        cout << "Mixed fraction is   " << q << " (" << r << "/" << d << ")";
        
        return 0;


}
