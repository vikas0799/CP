#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int mod = 1000000007;
        string s;
        cin >> s;
        string pt;
        cin >> pt;
        long long int n = s.size();
        long long int m = pt.size();

        long long int pow[n];
        long long int prime = 31;
        pow[0] = 1; // array to store p^i;
        for (long long int i = 1; i < n; i++)
        {
            pow[i] = (pow[i - 1] * prime) % mod;
        }
        long long int hvpt = 0; // total hashvalue of pattern
        for (long long int i = 0; i < m; i++)
        {
            hvpt = (hvpt + ((pt[i] - 'a' + 1) * pow[i]) % mod) % mod;
        }
        long long int hvs[n];
        hvs[0] = (s[0] - 'a' + 1) * pow[0];
        // hashvalue of string at i-th index
        for (long long int i = 1; i < n; i++)
        { 
            hvs[i] =(hvs[i-1]+ ((s[i] - 'a' + 1) * pow[i]) % mod)%mod;
        }

        // sliding window technique with fix size window, pt.size()
        long long int cnt = 0;
        vector<long long int> idx; // idx=i+1
        long long int sum = 0;
        for (long long int i = 0; i < m; i++)
        {
            sum = (sum + ((s[i] - 'a' + 1) * pow[i]) % mod) % mod;
        }
        if (sum == hvpt)
        {
            cnt++;
            idx.push_back(1);
        }
        long long int si = 0, ei = m - 1;
        for (; ei < n;)
        {
            ei++;
            sum =(hvs[ei] - hvs[si] + mod) % mod;
            si++;
            if (sum == (hvpt * pow[si]) % mod)
            {
                cnt++;
                idx.push_back(si + 1);
            }
        }
        if (cnt == 0)
            cout << "Not Found" << endl;
        else
        {
            cout << cnt << endl;
            for (auto i : idx)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}