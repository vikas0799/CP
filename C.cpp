#include<bits/stdc++.h>
using namespace std;
 
int countOccurrences(char *str,
                    string word)
{
    char *p;
 
    // split the string by spaces in a
    vector<string> a;
 
    p = strtok(str, ".");
    while (p != NULL)
    {
        a.push_back(p);
        p = strtok(NULL, ".");
    }
 
    // search for pattern in a
    int c = 0;
    for (int i = 0; i < a.size(); i++)
 
        // if match found increase count
        if (word == a[i])
            c++;
    return c;
}
 
// Driver code
int main()
{
   char str[100000];
   cin>>str;
   string word;
   cin>>word;
    cout << countOccurrences(str, word);
    return 0;
}