#include <iostream>
using namespace std;

class DynamicQueue
{
private:
    int *arr;
    int capacity, front, rear, size;

public:
    DynamicQueue(int size)
    {
        arr = new int[size];
        front = 0;
        rear = -1;
        capacity = size;
        this->size = 0;
    }

    void push(int element)
    {
        if (size == capacity)
        {
            resize();
        }

        arr[++rear] = element;
        ++size;
    }

    void pop()
    {
        if (size == 0)
        {
            cout << "Queue is already empty" << endl;
            return;
        }

        for (int i = 0; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }

        --rear;
        --size;
    }

    void peek()
    {
        if (size == 0)
        {
            cout << "Queue is already empty" << endl;
            return;
        }

        cout << "Element at the front: " << arr[front] << endl;
    }

    void display()
    {
        if (size == 0)
        {
            cout << "Queue is already empty" << endl;
            return;
        }

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " | ";
        }
        cout << endl;
    }

    void resize()
    {
        int newCapacity = 2 * capacity;
        int *temp = new int[newCapacity];

        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }

        delete[] arr;

        arr = temp;
        capacity = newCapacity;
    }

    ~DynamicQueue()
    {
        delete[] arr;
    }
};

int main()
{
    DynamicQueue q(3);

    q.push(10);
    q.push(20);
    q.push(30);
    q.display(); // 10 | 20 | 30 |

    q.pop();
    q.display(); // 20 | 30 |

    q.push(40);
    q.push(50);  // This should trigger resize()
    q.display(); // 20 | 30 | 40 | 50 |

    q.peek(); // 20

    return 0;
}