// C++ program to calculate the
// value of pi up to n decimal
// places
#include "bits/stdc++.h"
using namespace std;

// Function that prints the
// value of pi upto N
// decimal places
void printValueOfPi(int N)
{

	// Find value of pi upto
	// using acos() function
	double pi = 2 * acos(0.0);

	// Print value of pi upto
	// N decimal places
	printf("%.*lf\n", N, pi);
}

// Driver Code
int main()
{
	int N = 45;

	// Function that prints
	// the value of pi
	printValueOfPi(N);
	return 0;
}
