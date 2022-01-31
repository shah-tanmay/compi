#include <bits/stdc++.h> //includes all the contaienrs.
// Don't use this in interivew.
using namespace std; //used for a scope

struct node
{
    string str;
    int num;
    double doub;
    char x;

}; //a datatype in itself;
//semicolon here is important;
//always use constructor with struct;

int main()
{
    //if we define array in int main all the value are garbage values, but if we declare globally,
    // it will be 0;
    array<int, 5> arr;
    arr.fill(5); //fills every value with the element in fill function.
    int index = 0;
    arr.at(index); //gives the element at that index;

    //iterations
    //begin -> always point to the starting element.
    //end -> always point right after the end element.
    //rend -> always point to the last element. reverse iterator.
    //rbegin. -> always points right before the start. reverse iterator.

    // auto automatically takes the data type.
    // it is the pointer, so always print * of it to get the elements.
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    // dierctly prints the elements in the arrary.
    //this can also print strings. suppose arr = "shah", it will print s h a h
    for (auto it : arr)
    {
        cout << it;
    }
    arr.size();  //-> prints the size.
    arr.front(); // -> prints the first elemenet
    arr.back();  // -> prints the last element.
    // 10^6 in main, 10^7 gloabllay , max size of array. -> int, double, char
    // 10^7 in main, 10^8 for bool dataype.

    vector<int> arr;   //size have to not be specified.
    arr.push_back(10); //pushes 10 into the vector.
                       // vector takes the value dynamically.
    arr.pop_back();    // removes the last element from the arry.
    arr.clear();       // erase all the elements at once

    vector<int> vec(7, 0); // initial size would be 7 with all the elements filled with 0,but still has no
    // limitations to pushing to it.

    vector<int> vec3(vec.begin(), vec.end()); //copies the vector vec.
    vector<int> vec(vec);                     // also copies the same one.
    //push_back and emplace_back will do the same operation but, emplace_back takes less time thane push_back.
    // always use emplace_back for most of the cases.

    // defining 2D vectors.
    vector<vector<int>> vector; // this defines a 2D vector.
    // printing the 2D arrays.
    for (auto vctr : vector)
    {
        for (auto it : vctr)
        {
            cout << it;
        }
        cout << endl;
    }
    //printing the vector in traditional way...
    for (int i = 0; i < vector.size(); i++)
    {
        for (int j = 0; j < vector[i].size(); j++)
        {
            cout << vector[i][j];
        };
        cout << endl;
    }

    // define m*n array;
    int m = 10;
    int n = 20;
    vector<vector<int>> vect(m, vector<int>(n, 0));

    set<int> st; //only containes unique values.
    //elements of the set are always in sorted order.
    for (int i = 0; i < st.size(); i++)
    {
        st.insert(i); //takse log(n) time.
    }
    st.erase(st.begin());           // erase the element of on that particular function.
    st.erase(st.begin(), st.end()); // deletes all the elements inclusive of first pointer to exclusive of the
    // last pointer.
    st.erase(key); //deletes the key at that position.
    // takes log (n) time.
    auto it = st.find(3); //returns the iterator where 3 is present, if not present, if returns the end() iterator.
    st.emplace(10);       //faster than insert.
    st.size();            // returns the size of the set.

    //unordered_set
    unordered_set<int> st;
    // all the operations are simiilar, but time complexity is constant in nature, but we don't know the order of
    // the elements.
    // make sure we use unordered_set rather than ordered set.

    //multiset
    multiset<int> ms;
    // helps to store element in sorted order, but thery are not unique.
    // if we use erase a particular key, it will erase all of them.
    ms.find(2);  // returns the iterator finding to the fist 2.
    ms.clear();  // it clears the whole array of set.
    ms.count(2); //returns the number of times that element occurs..

    // map
    // log(n) is the complexity for the map.
    map<string, int> mpp; //like objects in js.
    // map only stores unique value of keys.
    mpp.emplace("tanmay", 1);
    mpp.erase('tanmay'); //deletes the given key.
    mpp.clear();         //clears the entire map.
    mpp.empty();         // gives a boolean if the map is empty or not.
    //printing the map
    for (auto it : mpp)
    {
        cout << it.first << it.second;
    }
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it->first << it->second;
    }

    //unordered_map, o(1) in all cases, but in worst case it is o(n);
    // does not follow any order.

    // pairs
    pair<int, int> pr = {1, 2};
    // we acess it by using,, pr.first and pr.second;
    multimap<int, int> mpp;
    //keys won't be unique, but it would always store in sorted order
    // same functions as map.

    // Stack -> Last in first out data structure.
    stack<int> st;
    st.emplace(10);
    st.emplace(20);
    // functions
    // pop(),top(),size(),empty(),push() and emplace(),
    st.top();   //returns the first element of stack
    st.pop();   // deletes the last element pushed in array.
    st.empty(); // returns a bool wehter a stack is empty or not.
    // there does not exist a clear function in stack, we need to use while loop to clear the stack.
    // always have a check to print st.top()

    //Queue
    // push(), front(), pop(),size(), empty()
    // all the operations are o(1) , except pop(),
    queue<int> q;
    // always have a check for using q.pop()

    //there is not iterator in stack and queue.

    //priority queue
    //push(),size(),top(),pop(),empty()
    // keeps all the element in descending order.
    // performs all the operations of unordered_set but time complexity is log(n)
    //if we store pair in queue, it will sort according to first one, if equal according to the second one.
    // to store elements in ascending order in pq. while inserting store them with a negative sign
    // after that while printing print with -1 multiplied.
    //duplicates are obviously allowed.
    // defining minimum priority queue.

    priority_queue<int, vector<int>, greater<int>> > pq;

    //dequeue
    //functions push_front(), push_back(), pop_front(), push_back(),begin(),end(),rbegin(),rend(),pop_front(),pop_back
    // size,clear,empty,at
    // list
    list<int> ls;
    // push_front, remove -> removes in O(1) time.
};
