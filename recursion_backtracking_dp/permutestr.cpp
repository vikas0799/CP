// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;


// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
// void permute(string a, int l, int r)
// {
// 	// Base case
// 	if (l == r)
// 		cout<<a<<endl;
// 	else
// 	{
// 		// Permutations made
// 		for (int i = l; i <= r; i++)
// 		{

// 			// Swapping done
// 			swap(a[l], a[i]);

// 			// Recursion called
// 			permute(a, l+1, r);

// 			//backtrack
// 			swap(a[i], a[l]);
// 		}
// 	}
// }



 void permute(string a, string ans){
	 if(a.size()==0){
		 cout<<ans<<endl;
		 return;
	 }
	 for(int i=0;i<a.size();i++)
	 {
		 string na=a.substr(0,i)+a.substr(i+1);
		 permute(na,ans+a[i]);
	 }

 }



// Driver Code
int main()
{
	string str = "1234";
	int n = str.size();
	string ans="";
	// permute(str, 0, n-1);
	permute(str, ans);
	return 0;
}

// This is code is contributed by rathbhupendra
