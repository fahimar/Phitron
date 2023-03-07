// C++ program to find GCD of two or
// more numbers
#include <bits/stdc++.h>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
if (a == 0)
	return b;
return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
int findGCD(int arr[], int n)
{
int result = arr[0],cnt=0;
for (int i = 1; i <= 16; i++)
{
	result = gcd(arr[i], result);

	if(result == 1)
	{
	 cnt++;
	}
}
return cnt;
}

// Driver code
int main()
{
int arr[] = {2, 1 ,6 ,7 };
int n = sizeof(arr) / sizeof(arr[0]);
cout << findGCD(arr, n) << endl;
return 0;
}
