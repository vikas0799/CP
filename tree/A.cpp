#include <bits/stdc++.h>
using namespace std;
string mergeStrings(string s1, string s2)
{
	int len1 = s1.size();
	int len2 = s2.size();
	int pntr1 = 0;
	int pntr2 = 0;
	string ans = "";

	while (pntr1 < len1 && pntr2 < len2) {
		if (s1[pntr1] < s2[pntr2]) {
			ans += s1[pntr1];
			pntr1++;
		}
		else {
			ans += s2[pntr2];
			pntr2++;
		}
	}
	if (pntr1 < len1) 
		ans += s1.substr(pntr1, len1);
	
	if (pntr2 < len2) 
		ans += s2.substr(pntr2, len2);
	return ans;
}

int main()
{
	string S1; cin>>S1;
	string S2; cin>>S2;
	cout<<mergeStrings(S1, S2)<<endl;
	return 0;
}
