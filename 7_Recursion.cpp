#include<bits/stdc++.h>
using namespace std;

// Sum of N numbers
int sum(int n)
{
    if(n == 0)  return 0;
    return n + sum(n -1);
}
int main()
{
    int n = 3;
    cout << sum(n);
}


// Factorial of an number
int fact(int n)
{
    if(n == 0)  return 1;   // if returned 0 then it will always give a wrong ans.
    return n * fact(n -1);
}
int main()
{
    int n = 3;
    cout << fact(n);
    return 0;
}


//// Problems on functional recursion

// Reverse an array:
void f(int i, int arr[], int n)
{
    if(i >= n/2)  return;
    swap(arr[i], arr[n-i-1]);
    f(i+1, arr, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[100]; 
    for(int i = 0; i < n; i++)  cin >> arr[i];
    f(0, arr, n);
    for(int i = 0; i , n; i++)  cout << arr[i] << " ";
    return 0;
}


// Check if a string is a palindrome
bool f(int i, string &s)
{
    if(i >= s.size() / 2)  return true;
    if(s[i] != s[s.size() - i - 1])  return false;
    return f(i + 1, s);
}
int main()
{
    string s = "madam";
    cout << f(0, s);
    return 0; 
}


////  Multiple Recursion calls:
int f(int n)
{
    if(n <= 1)  return n;
    int last = f(n -1);
    int slast = f(n -2);
    return last + slast;
}
int main()
{
    cout << f(4);
    return 0;
}



