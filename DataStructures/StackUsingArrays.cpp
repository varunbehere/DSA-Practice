#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int initialCapacity)
    {
        this->capacity = initialCapacity;
        this->arr = new int[capacity];
        this->top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is already empty" << endl;
            return;
        }

        for (int i = top; i >= 0; i--)
        {
            cout << "| " << arr[i] << " |" << endl;
        }
        cout << "|___|" << endl;
    }

    void push(int element)
    {
        if (top == capacity - 1)
        {
            cout << "Stack reached its capacity, resizing stack" << endl;
            resize();
        }
        arr[++top] = element;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is already empty" << endl;
            return;
        }

        cout << "Popped Element: " << arr[top--] << endl;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is already empty" << endl;
            return;
        }
        cout << "Element at the top: " << arr[top] << endl;
    }

    bool isEmpty()
    {
        return top < 0;
    }

    int getSize()
    {
        return top + 1;
    }

    void resize()
    {
        int newCapacity = capacity * 2;
        int *newArr = new int[newCapacity];

        for (int i = 0; i <= top; i++)
        {
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
        cout << "Stack resized to " << capacity << endl;
    }
};

int main()
{
    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.display();
    st.push(6);
    st.display();

    cout << "Size: " << st.getSize() << endl;
}
