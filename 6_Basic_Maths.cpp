#include<bits/stdc++.h>
using namespace std;

// 1 - Count digits:
int count(int n)
{
    int cnt = 0;
    while(n > 0)
    {
        int LastDigit = n % 10;
        cnt = cnt ++;
        n = n/10;
    }
    return cnt;
}

// we can remove LastDigit

int count(int n)
{
    int cnt = 0;
    while(n > 0)
    {
       // int LastDigit = n % 10;
        cnt = cnt ++;
        n = n/10;  // no are digits are equal to the no of times the number is divided
            
    }
    return cnt;
}

// Method 2: Using log to find the number of digits

int count(int n)
{
    int cnt = (int) (log10(n) + 1);  // typecast it in int
    return cnt;
}


// 2 - Reverse a number:

int main()
{
    int n;
    cin >> n;
    int revNum = 0;
    while(n > 0)
    {
        int Ld = n % 10;
        revNum = (revNum * 10) + Ld;
        n = n / 10;
    }
    cout << revNum;
}


// 3 - Palindrome 
int amin()
{
    int n;
    cin >> n;
    int revNum = 0;
    int dup = n;
    while(n > 0)
    {
        int Ld  = n % 10;
        revNum = (revNum * 10) + Ld;
        n = (n / 10);
    }
    if(dup = revNum)  cout << "true";
    else cout << "false";
}


// 4 - Armstrong Number
bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == originalno);
}
int main()
{
    int n1 = 153;
    if (ArmstrongNumber(n1))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }
    return 0;
}


// 5 - Print all divisors
// Method 1: TC : O(n)
void printDivisors(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i)
        {
            cout << i << " ";
        }
    }
}


// Method 2:  TC : O(1)
void printDivisors(int n)
{
    vector<int> ls;

    // O(sqrt(n))
    for(int i = 1; i*i <= n; i++)    // i <= sqrt(n)  can be used in loop but as fun it will take time
    {
        if(n % i == 0)   // i is a divisor of n
        {
            ls.push_back(i);
            if(n / i != i)
            {
                ls.push_back(n / i);
            }
        }
    }

    // O(n logn)      but here  O(no of fatctos * log(mo of factors))
    sort(ls.begin(), ls.end());

    // O(no of factors)
    for(auto it : ls) cout << it << " ";
}

int main()
{
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}



// 6 - Check Prime:
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int  i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            cnt++;
            if((n / i) != i)  cnt++;
        }
    }
    if(cnt == 2) cout << "true";
    else cout << "false";
}


// 7 - GCD / HCF
int gcd(int a, int b)
{
    while(a > 0 && b > 0)
    {
        if(a > b)  a = a % b;
        else  b - b % a;
    }
    if(a == 0)  cout << b;
    return a;
}