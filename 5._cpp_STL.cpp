#include<bits/stdc++.h>
using namespace std;

/*void print()
{
    cout << "Viany";
}

int sum(int a,int b)
{
    return a+b;
}*/

// Pairs
void explainPair()
{
   pair<int, int> p = {1, 3};     // p contains 1 and 3
   
   cout << p.first << " " << p.second;

   pair<int, pair<int, int>> p = {1, {3,4}};

   cout << p.first << " " << p.second.first << " " <<  p.second.second;

   pair<int, int> arr[] = { {1,2}, {2, 5}, {5, 1}};

   cout << arr[1].second;   // 5
}


// 1(a) - Vectors
void expalinVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v(5, 100);   // initialize and declared

    vector<int> v(5);   // only declared

    vector<int> v1(5, 20);
    vector<int> v2(v1);  // content of v1 copied in v2 and now v2 is similar to v1
}

// To access the element of the vector
// cout << v[0] << " " << v.at(0);+++


// 2 - Iterators
vector<int>::iterator it = v.begin();

it++;
cout << *(it) << " ";

it = it + 2;
cout << *(it) << " ";

vector<int>::iterator it = v.end();

vector<int>::iterator it = v.rend();
vector<int>::iterator it = v.rbegin();

cout << v[0] << " " << v.at(0);
cout << v.back() << " ";


for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
{
    cout << *(it) << " ";
}

for (auto it = v.begin(); it != v.end(); it++)
{
    cout << *(it) << " ";
} 

for (auto it : v)
{
    cout << it << " ";   
}

v.erase(v.begin() + 1);    // address is passed as an argument
//{10, 11, 20, 30} -----  {10, 20, 30}

v.erase(v.begin() + 2, v.begin() + 4);   
//{10, 20, 12, 23, 35} ----- {10, 20, 35}  

// Insert function
vector<int> v(2, 100);  //{100, 100}
v.insert(v.begin(), 300);  // {300,100,100}
v.insert(v.begin() + 1, 2, 10);  // {300,10,10,100,100}

vector<int> copy(2, 50);  // {50,50}
v.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

// v1 - {10,20}
// v2 - {30,40}

v1.swap(v2);   // v1 - {30,40}  v2 - {10,20}

v.clear();   // erase the entire vector

cout << v.empty();  // if atlest 1 element gives 0 else if empty gives 1

// 1(b) - list

void explainList()
{
    list<int> ls;

    ls.push_back(2);  // {2}
    ls.emplace_back(4);  // {2,4}

    ls.push_front(5);  //{5,2,4}

    ls.emplace_front();   //{2,4}
    
    // rest functions are same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap


   // 1(c) - Deque
   void explainDeque()
   {
    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2);  // {1,2}
    dq.push_front(4);  // {4,1,2}
    dq.empalce_front(3);  // {3,4,1,2}

    dq.pop_back(); // {3,4,3}
    dq.pop_front(); // {4,1}

    dq.back();
    dq.front();

    // rest functions are same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap


    // 1(d) - Stack 
    void explainStack()
    {
        stack<int>st;
        st.push(1);   // {1}
        st.push(2);   // {2,1}
        st.push(3);   // {3,2,1}
        st.emplace(5);  // {5,3,3,2,1}

        cout << st.top();   // prints 5   ** st[2]  such indexing is not valid in stack **
        
        st.pop();   // st looks like  {3,3,2,1}
        cout << st.top();  // 3
        cout << st.size();  // 4
        cout << st.empty();

        stack<int>st1, st2;
        st1.swap(st2);
    }
    

    // 1(e) - Queue
    void explainQueue()
    {
        queue<int> q:
        q.push(1);  // {1}
        q.push(2);  // {1,2}
        q.emplace(4); // {1,2,4}
        
        q.back() += 5;

        cout << q.back();  // prints 9

        // q is {1,2 9}

        cout << q.front();  // prints 1

        q.pop();  // {2.9}

        cout << q.front();  // print 2

        // size, swap, empty same as stack

        // 1(f) - Priority Queue
        void explainPQ()
        {
            priority_queue<int>pq;

            pq.push(5);  // {5}
            pq.push(2);  // {5,2}
            pq.push(8);  // {8,5,2}
            pq.empalce(10) // {10,8,5,2}

            cout << pq.top();  // prints 10
            pq.pop();   // {8,5,2}
            cout << pq.top();  // prints 8

            // size, swap, empty function same  as others

            // Min Heap 
            // Special syntax required  
            priority_queue<int, vector<int>, greater<int>> pq;
            pq.push(5);   // {5}
            pq.push(2);   // {2,5}
            pq.push(8);   // {2,5,8}
            pq.emplace(10); // {2.5.8.10}

            cout << pq.top();    // prints 2


            // 1(g) - Set
            void explainSet() 
            {
                set<int>st;
                st.insert(1);  // {1}
                st.empalce(2);  // {1,2}
                st.insert(2);  // {1,2}  // 2 already there so not inserted again
                st.insert(4);  // {1,2,4}
                st.insert(3);  // {1,2,3,4}

                // Functionality of insert in vector
                // can be used also, that only increases efficiency

                // begin(), end(), rbegin(), rend(), size(), empty(), and swap()  are same as those of above 

                // {1,2,3,4,5}
                auto it = st.find(3);

                // {1,2,3,4,5}
                auto it = st,find(6);

                // {1,4,5}
                st.erase(5);   // erases 5, takes lograthmic time

                int cnt = st.count(1);
                auto it = st.find(3);
                st.erase(it);   // it takes constant time

                {1,2,3,4,5}
                auto it1 = st.find(2);
                auto it2 = st.find(4);
                st.erase(it1, it2);  // after erase{1,4,5}  {first, last}

                // lower_bound and upper_bound works in same way as in the vector it does

                //Syntax
                auto it = st.lower_bound(2);
                auto it = st.upper_bound(3);

                // Binary Search with C++ STL and also lb and ub
                
                // 1 - Binary Search
                // que: Check if X exists in sorted order or not
                A [] = {1,4,5,8,9}

                bool res = binary_search(a, a+n, 3);  // returns false as 3 not there

                bool res = binar_search(a, a+n, 4);   // returns true as 4 is there 
                 
                // 2 - lower_bound   * it acts similar to binary serch
                a[] = {1,4,5,6,9,9}
                int ind = lower_bound(a, a+n, 4) - a;  // 1
                
                int ind = lower_bound(a, a+n, 7) - a;   // 4

                int ind = lower_bound(a, a+n, 10) - a;   // 6
                 
                // To perform action on vectors 
                int ind  = lower_bound(a.begin(), a.end(), a) - a.begin();
                
                 
                // 3 - upper_bound
                 a [] = {1,4,5,6,9,9}

                 int ind = upper_bound(a, a+n, 4) - a;  // 1

                 int ind = upper_bound(a, a+n, 7) - a;  // 4

                 int ind = upper_bound(a. a+n, 10) - a;  // 6
                 
                 // To perform action on vectors 
                 int ind  = upper_bound(a.begin(), a.end(), a) - a.begin();
                 
                 // que: Find the first occourence of X in a sorted array. If it does not exists it returns -1.
                 A [] = {1,4,4,4,4,9,9,10,11}

                 int ind = lower_bound(a, a+n, X) - a;

                 if(ind != n && a[ind] == X) cout << ind;
                 else cout << -1;
                 
                 // X = 4 (1),  2(-1),  12(-1)

                 // que: Find the last occourence .....
                 A [] = {1,4,4,4,4,9,9,10,11}
                 int ind = upper_bound(a,a+n, X) - a;
                 ind--;

                 if(ind >=0 && a[ind] == X)  cout << ind;
                 else cout << -1;                 

                 // X = 4(4), 2(-1), 0(-1);

                 // que: Find the largest no smaller than a sorted array
                 A [] = {1,4,4,4,4,9,9,10,11}
                 
                 int ind = lower_bound(a, a+n, X) - a;
                 ind--;

                 if(ind >= 0) cout << a[ind];
                 else cout << -1;

                 // X = 4(1), 2(1), 1(-1) 

                 int ind = upper_bound(a, a+n, X) - a;

                 if(ind < n) cout << a[ind];
                 else cout << -1;

                 // X = 4(5), 2(1), 11(-1)

                // MultiSet
                // Its same as set and has elements in sorted order but here it stores the duplicates elements also

                multiset<int>ms;
                ms.insert(1);   //{1}
                ms.insert(1);   //{1,1}
                ms.insert(1);   //{1,1,1}

                ms.erase(1);  // all 1's are erased

                int cnt = ms.count(1);

                // only a single one erased
                ms.erase(ms.find91);

                ms.erase(ms.find(1), ms.find(1) + 2);  // 2  1's erased
                // (start, end)

                // 1(i) Union Set:

                void explainUSet()
                {
                    unordered set<int> st;

                    // lb and ub fun dosent work rest all fun are same
                    // it does not store it in a particular order it has a bette complexity
                    // than set in most cases, except some when collision happens
                }
            
                 
                 // 1(j) - Map

                 void explainMap()
                {
                   map<int, int> mpp;
                   map<int, pair<int, int>> mpp;
                   map< pair<int, int>, int> mpp;

                   mpp[1] = 2;
                   mpp.emplace({3 ,1});
                   mpp.insert({2, 4});
                   mpp({2, 3}) = 10;

                   for(auto it : mpp)    
                   {
                      cout << it.first << " " << it.second << endl;
                   }

                   cout << mpp[1];  // 2
                   cout << mpp[5];  // 5 not present so 0 printed

                   auto it = mpp.find(3);
                   cout << *(it.second);

                   auto it = mpp.find(5);

                   // To find the address or value of the key 
                   auto it = mpp.find(3);  // address 
                   cout << *(it).second;  // value of key

                   auto it = mpp.find(5);  // 5 not present so mpp.end();

                   // This is the syntax
                   auto it = mpp.lower_bound(2);
                   auto it = mpp.upper_bound(3);

                   // erase, swap, size, empty, are same as above 2

                   // 1{k} - Multimap():

                   // 1(l) - UnorderedMap():


                   // 3 - Algorithms
                   bool comp(pair<int, int>p1, pair<int, int> p2)   // datatype is pair so have couple of pairs
                   {
                      if(p1.second < p2.second) return true;
                      if(p1.second > p2.second) return false;
                      // they are same 

                      if(p1.first > p2.first)  return true;
                      return false;

                   }
                   void explainMultimap()
                   {
                      sort(a, a+n);  // if array is given
                      sort(v.begin(), v.end());  // if vector is given

                      sort(a+2, a+4);  // sort a specific group

                      sort(a, a+n, greater<int>);  // sort in decreasing order

                      pair<int, int> a[] = {{1,2}, {2,1}, {4,2}};
                      // sort acc to sec ele in inc order if its same then sort it acc to first ele but in dec
                      sort(a, a+n, comp);   // {4,1}, {2,1}, {1,2}

                      int num = 7;
                      int cnt = _builtin_popcount();

                      long long num = 165786578687;
                      int cnt = _builtincnt_popcount();

                      string s = "123";  // always start in sorted order to print all the permutations and combinations
                      sort(s.begin(), s.end());

                      do{
                        cout << s << endl;   
                      } while(next_permutation(s.begin(), s.end()));

                      int maxi = *max_element(a, a+n);

                      



                      
                    }
                   

                   




                }


            }
        }
    }

   }
}






int main()
{  
    //print();
    //int s = sum(1, 5);
    // prints 6
    //cout << s;



    return 0;
}


