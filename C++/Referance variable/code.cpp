// C++ code for " Reference variable "
// Author : Siddhant Deshmukh


#include <iostream>
using namespace std;


int main()
{

    int n;
    cout << "Enter the value of n\n";
    cin >> n;
	int sum = n;
    int &total = sum;
    // same value to total and sum will be assigned 
    // Bcoz the use of Reference variable 

    cout << "Value of Sum = " << sum;    
    cout << "\nValue of Total = " << total;
	return 0;
}