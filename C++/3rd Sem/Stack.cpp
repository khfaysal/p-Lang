#include <bits/stdc++.h>
using namespace std;

int size;
int *arr;
int top = -1;

void push(int value)
{
    if (top == size-1)
    {
        cout << ("Overflow.") << endl;
        return;
    }
    cout<<"Pushed "<< value << " in the Array.";
    arr[++top] = value;
}

void pop()
{
    if (top < 0)
    {
        cout << "Underflow." << endl;
        return;
    }
    cout<<"Poped "<< arr[top] << " from the array";
    top--;
}

void show()
{
    if (top < 0)
    {
        cout << "The Stack is Empty.";
    }
    for (int i = 0; i < top; i++)
    {
        cout << arr[i] << ' ';
    }
}

int main()
{
    cout << "Enter the size of the array: ";
    cin >> size;

    arr = new int[size];
    int value, choice;

    while (true)
    {
        cout<<"\nChose an option: \n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Show\n";
        cout << "4. Exit\n";

        cout << "Enter the Choice: \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the Value to push: \n";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
        cout<<"Exiting the code.\n"
            // delete[] arr;
            exit(0);
            return 0;
        }
    }
}