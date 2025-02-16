#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int *arr;
    int front, rear, size, capacity;

public:
    CircularQueue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[this->capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    void push(int element)
    {
        if ((rear + 1) % capacity == front)
        {
            cout << "queue is full" << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
        }

        rear = (rear + 1) % capacity;
        arr[rear] = element;
        ++size;
    }

    void pop()
    {
        if (front == -1 || size == 0)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Removing from queue" << endl;

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % capacity;
        }

        --size;
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        int i = front;
        while (true)
        {
            cout << arr[i] << " | ";
            if (i == rear)
            {
                break;
            }
            i = (i + 1) % capacity;
        }
        cout << endl;
    }

    void peek()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
        }

        cout << arr[front] << endl;
    }

    ~CircularQueue()
    {
        delete[] arr;
    }
};

int main()
{
    CircularQueue cq(5);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.push(5);
    cq.display();

    cq.pop();
    cq.pop();
    cq.display();

    cq.peek();

    return 0;
}