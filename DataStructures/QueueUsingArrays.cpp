#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int capacity, size, front, rear;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[this->capacity];
        size = 0;
        rear = -1;
        front = 0;
    }

    void enqueue(int element)
    {
        if (size == capacity)
        {
            cout << "Queue is full, cannot enqueue " << element << endl;
            return;
        }

        arr[++rear] = element;
        ++size;
        cout << "Enqueued: " << element << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty, cannot dequeue" << endl;
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;
        ++front;
        --size;

        // Reset front & rear when queue becomes empty
        if (size == 0)
        {
            front = 0;
            rear = -1;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " | ";
        }
        cout << endl;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Peek: " << arr[front] << endl;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(6);
    q.enqueue(7);

    q.display();

    return 0;
}
