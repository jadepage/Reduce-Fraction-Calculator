#include <iostream>
using namespace std;

int num;
int denom;
int gcd;
int numReduced;
int denomReduced;

// Function to get the greatest common divider.
int gcdFunc(int num, int denom)
{
	for (int i = 1; i <= num && i <= denom; ++i)
	{
		// Checks if i is factor of both integers.
		if (num % i == 0 && denom % i == 0)
			gcd = i;
	}

	return gcd;
}

// Function to reduce the numerator and dominator. 
int reduce(int num, int denom)
{
	gcdFunc(num, denom);

	/* If the user enters 0 for either the numerator
		or denominator then let user know about error.
	*/
	if (num == 0 || denom == 0)
	{	
		cout << "Failure to reduce" << endl;
		return 0;
	}

	/* If the numerator and the dominator is
		not 0 then reduce them by dividing them
		by the gcd and output the result to
		the user.
	*/
	else
	{
		numReduced = num / gcd;
		denomReduced = denom / gcd;
		cout << num << "/" << denom << " reduced = " << numReduced << "/" << denomReduced << endl;
		return 1;
	}
}

int main()
{
	cout << "Reduce Fraction Calculator" << endl;
	cout << "--------------------------" << endl;
	cout << "Please enter numerator & denominator" << endl;
	cin >> num >> denom;
	reduce(num, denom);

	return 0;
}

