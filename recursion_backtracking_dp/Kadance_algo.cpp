// C++ program to print largest contiguous array sum
//when +ve elemets must present
//its a bottom_Up Dynamic problem
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int ans = INT_MIN, temp = 0;

	for (int i = 0; i < size; i++)
	{
		temp = temp + a[i];
		if (ans < temp)
			ans = temp;

		if (temp < 0)
			temp = 0;
	}
	return ans;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
