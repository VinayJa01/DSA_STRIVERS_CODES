#include<bits/stdc++.h>
using namespace std;

int main()         //    The input is 5 | 13213 | 5 | 1 4 2 3 12
{                  // no of ele in array | arr ele | no of queries | queries (how many times 1 appear , 4 appear...., 12 appear)
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precompute          (Under Precompute we write a hash array)
    int hash[13] = {0};
    for(int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;   // After hash array is declared we take the no of queries
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;

        // Fetch             (After taking individual query we fetch from hash array)
        cout << hash[number] << endl;
    }
    return 0;
}


// if only lowercase letters are there
int main()
{
    string s;
    cin >> s;

    // precompute
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}



// if both case letters are there
int main()
{
    string s;
    cin >> s;

    // precompute
    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c] << endl ;
    }
    return 0;
}