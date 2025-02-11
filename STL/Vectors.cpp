#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1 = {1};
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.push_back(3);
    vector1.push_back(3);

    cout << "size:" << vector1.size() << endl;
    cout << "Capacity:" << vector1.capacity();

    cout << "Elements of vector1: ";
    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;

    // Removing the last element
    vector1.pop_back();
    cout << "After pop_back, size: " << vector1.size() << endl;

    // Inserting an element at the beginning
    vector1.insert(vector1.begin(), 0);
    cout << "After insert at beginning, elements: ";
    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;

    // Erasing the first element
    vector1.erase(vector1.begin());
    cout << "After erase at beginning, elements: ";
    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;

    // Clearing the vector
    vector1.clear();
    cout << "After clear, size: " << vector1.size() << endl;

    return 0;
}