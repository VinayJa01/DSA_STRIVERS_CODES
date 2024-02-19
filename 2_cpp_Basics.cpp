#include <bits\stdc++.h>
using namespace std;
/*
int main()
{
    // string and getline
    /*string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " <<  s2;*/

// now getline
/*string str;
 getline(cin, str);
 cout << str;

}
*/

/*int main()
{
    int marks;
    cin >> marks;
    if (marks < 25)
    {
        cout << "F";
    }

    else if (marks <= 44)
    {
        cout << 'E';
    }

    else if (marks <= 49)
    {
        cout << 'D';
    }

    else if (marks <= 59)
    {
        cout << 'C';
    }

    else if (marks <= 79)
    {
        cout << "B";
    }

    else if (marks <= 100)
    {
        cout << "A";
    }

    return 0;
}*/



// sum fun with return type int
/*int sum (int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}

int main()
{
   int num1, num2;
   cin >> num1 >> num2; 
   int res = sum(num1, num2);
   cout << res;
   return 0; 
}*/



// sum function with return type void
/*void sum (int num1, int num2)
{
    int num3 = num1 + num2;
    cout <<  num3;
}

int main()
{
   int num1, num2;
   cin >> num1 >> num2; 
   sum(num1, num2);
   return 0; 
}*/


// pass by value
/*void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    int num = 10;
    doSomething(num);     // a copy pf orignal number is passed
    cout << num << endl;     // orignal value 10 printed 
    return 0;
}
*/


// similar in case of strings

/*void doSomething(string s)
{
    s[0] = 'B';
    cout << s << endl;
}

int main()
{
    string s = "Vinay";
    doSomething(s);      // a copy of te orignal name is passed
    cout << s << endl;  // orignal name priinted 
    return 0;
}*/



// pass by reference
/*void doSomething(string &s)
{
    s[0] = 'B';
    cout << s << endl;
}

int main()
{
    string s = "Vinay";
    doSomething(s);      // a copy of te orignal name is passed
    cout << s << endl;  // orignal name priinted 
    return 0;
}
*/


// arrays 
// arrays are always passsed by reference no need of &var required here
/*int main()
{
    int arr[5];
    for(int i = 0; i<=4; i++)
      { cin >> arr[i];  }

    for(int i = 0; i<=4; i++)
      { cout << arr[i]<< " ";}
}
*/

// another eg
/*void doSomething(int arr[], int n)
{
    arr[0] += 100;
    cout << "Value inside function: "  << arr[0] << endl;
}

int main()
{
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++)
      { cin >> arr[i]; }
    
    doSomething(arr, n);

    cout << "Value inside int main: "  << arr[0] << endl;

}*/