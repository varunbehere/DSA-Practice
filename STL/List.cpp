/*
    Implemented in CPP as Doubly Linked List
    Has similar operations like vectors and has few additional ones
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> list1;

    list1.push_back(1);
    list1.push_front(5);

    // Display the list
    cout << "List after push_back and push_front: ";
    for (int val : list1)
    {
        cout << val << " ";
    }
    cout << endl;

    // Insert elements
    auto it = list1.begin();
    advance(it, 1);
    list1.insert(it, 10);
    cout << "List after inserting 10 at position 1: ";
    for (int val : list1)
    {
        cout << val << " ";
    }
    cout << endl;

    // Erase elements
    it = list1.begin();
    advance(it, 1);
    list1.erase(it);
    cout << "List after erasing element at position 1: ";
    for (int val : list1)
    {
        cout << val << " ";
    }
    cout << endl;

    // Pop elements
    list1.pop_back();
    list1.pop_front();
    cout << "List after pop_back and pop_front: ";
    for (int val : list1)
    {
        cout << val << " ";
    }
    cout << endl;

    // Reverse the list
    list1.push_back(3);
    list1.push_back(4);
    list1.reverse();
    cout << "List after reversing: ";
    for (int val : list1)
    {
        cout << val << " ";
    }
    cout << endl;

    // Sort the list
    list1.sort();
    cout << "List after sorting: ";
    for (int val : list1)
    {
        cout << val << " ";
    }
    cout << endl;

    // Clear the list
    list1.clear();
    cout << "List after clearing: ";
    for (int val : list1)
    {
        cout << val << " ";
    }
    cout << endl;

    // Size of the list after clearing
    cout << "Size of the list after clearing :" << list1.size() << endl;
    return 0;
}