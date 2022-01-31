#include <bits/stdc++.h>
using namespace std;

// Array has max size of 10^6 in main function and if declared globally it becomes 10^7 for data types int ,char, string;
// If boolean data type it is 10^8 and 10^9 in int main and globally;

int main()
{
    array<int, 5> arr;        //declaring an array of size 5 with garbage values if the samee thing is global it would be initialized to 0;
    array<int, 4> arr1 = {0}; //This means the 0th index is initialized to 0, and hence all of them to zero;
    arr.fill(5);              // Fills the entire arrray with 5;
    arr.at(0);                // gives us the element at the index 0;
    arr.size();               //gives the size of the array;
    arr.front();              //gives the first element of the array;
    arr.back();               // gives the last element of the array;
    // iterators
    // begin() end() rbegin() rend()
    // begin points to the start;
    // rbegin points to the end and it is a reverse iterator;
    // end points to the space right after the end
    // rend points before the starting;

    // printing an array using iterators;
    // {auto it} takes the iterator of the data structure itself;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << endl;
    }
    // this will also print the array the same way;
    for (auto it = arr)
    {
        cout << it << endl;
    }
    // this will print the string character by character;
    // so auto it is also known as foreach;
    string a = "tanmay";
    for (auto it : a)
    {
        cout << it;
    }

    // Vector;
    // No need to declare the size before hand;
    // segmentation fault=>Memory issue;
    vector<int> arrVector;
    arrVector.size(); //size of the arr will be 0;
    arrVector.push_back(0);
    arrVector.push_back(1);
    arrVector.size();     //size of the arr will be 2;
    arrVector.pop_back(); //removes the last element in the array;
    arrVector.clear();    // clears the array (i.e the size will be 0);

    vector<int> vec(2, 0);                    //an vector declared of size 2 with all the 0's works like the fill function and still can be dynamically increased;
    vector<int> vec2(vec.begin(), vec.end()); //copies the vector vec in vec2 where the begin one is included and the last one is not;
    vector<int> vec2(vec2);                   //same as above;
    // emplace_back is the same as push_back but it is faaster than push_back;
    // defing 2D arrays using vector
    vector<vector<int>> vector2d;
    // printing the vector;
    for (auto vectr : vector2d)
    {
        for (auto it : vectr)
        {
            cout << it << endl;
        }
    }

    vector<vector<int>> vector10(10, vector<int>(20, 0)); // defing vector of size 10*20 this is dynamic;

    // defining a 3d vector of size 10 * 20 * 30;
    vector<vector<vector<int>>> vector3d(10, vector<vector<int>> vector10(10, vector<int>(20, 0)));

    set<int> st;
    // all the elements in the set are unique;
    // the set is always in sorted order;
    // can't acceess st[0], we need to use iterator to get the respective element;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        st.insert(x); //time complexity of insertion is O(logn);
    }

    // log(n) is the complexity for delete;
    // defining set<datatype> name
    // always store unique elements be the any datatype;
    st.erase(st.begin());           //st.erase(iterator) deletes the element at particular iterator;
    st.erase(st.begin(), st.end()); //giving the starting and the ending iterator where again the ending isn't excluded;
    st.erase(5);                    //st.erase(key) this deletes the key from the set;
    // All the vector functions can be implemented here;
    st.count(); // number of instances that occur;
    //if the element does'nt exist it will return st.end() that is next to the last element;
    auto it = st.find(7); // this returns an iterator that points to the key which is given; log(n) complexity
    st.emplace(4);        //same as insert but faster than emplace;

    // unordered_set we don't know which position element are stored the advantage being the avg time complexity is constant (i.e) O(1);
    //tle->switch to set;
    // but worst case is linaer in nature;

    multiset<int>
        ms; //store elements in sorted order;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);
    ms.erase(2); //all the instances are erased;
    ms.clear();  //clears the entire set; (log n) in size;

    map<string, int>
        mpp; //key values pair, where argument are datatypes that need to be stored and they always store in ascending order
    // according to the keys and only stores unique keys;
    //mpp.earse() just give the key name;
    // can also use emplace in place of insert;
    //find will give you first instance of a key;
    //mpp.empty() returns a boolean;
    //everything has logn;
    // printing a map;
    for (auto it : mpp)
    {
        cout << it.first + " " + it.second << endl;
    }
    // there are no iterator in stack and queue

    //undoreded map in almost all cases constant and worst case is O(n) and is not unique;

    // pair class
    pair<int, int> pr;
    //can store two integers in pair;

    //stack
    stack<int> st;
    //fucntionsn pop, push, emplace,top, size,

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // clearing a stack
    while (!st.empty())
    {
        st.pop();
    }

    // st.size() gives the size
    //always have a check while implementing st.empty()

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // front, size, pop, size

    //deleting the queue
    while (!q.empty())
    {
        q.pop();
    }

    // for stack and queue all of them are constant except deleting;
    // priority queue
    priority_queue<int> pq;
    //stores element in descending order;
    //stores pari acc to first element if they are equal then acc to second element;

    dequeue<int> dq;
    //push_front();
    //push_back();
    //pop_front();
    //pop_back();
    //size, clear, empty, at

    list<int> ls; // time complexity of deletion is O(1);
    ls.push_front(1);

    //  max_element(beginingIterator,endingIterator);
    //  same is for min element;
    //  *max_element to get the number, only max_element will return the iterator;
    //  accumulate is used to get the sum in particular range;
    // accumulate(beginingIterator,endingIterator,startingSum)
    // count(beginingIterator,endingIterator,key)
    // find(beginingIterator,endingIterator,key) this returns an iterator so to get the index we subtarct the begin() iterator to get the index;
    // binary_search(beginingIterator,endingIterator,key) returns a boolean
    // next_permutation(beginingIterator,endingIterator) returns a boolean and always lexicographically sorted;
}