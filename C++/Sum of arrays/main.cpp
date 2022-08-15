// C++ code for " sum of n numbers using arrays "
// Author : Siddhant Deshmukh


#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    cout << "Enter the numbers\n";
    int i,a[n],sum;
    sum = 0;
	for(i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum = " << sum;

    
	return 0;
}
