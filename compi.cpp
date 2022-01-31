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
};
