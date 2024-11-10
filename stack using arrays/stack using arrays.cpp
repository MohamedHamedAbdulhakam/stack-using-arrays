#include <iostream>
using namespace std;

class Stack {
    int arr[5];
    int top;

public:
    Stack() {
        top = -1;  // Initialize stack to be empty
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 4;  // Stack is full when `top` reaches the last index (4)
    }

    void push(int item) {
        if (isFull()) {
            cout << "Stack overflow" << item << endl;
        } else {
            arr[++top] = item;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
        } else {
            top--;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty " << endl;
            return 0; 
        } else {
            return arr[top];
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    int count() {
        return top + 1;  
    }
};

int main() {
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);

    myStack.display();  // Displays elements in stack

    myStack.pop();
    myStack.display();

    cout << "The top element is: " << myStack.peek() << endl;
    cout << "The number of elements in the stack: " << myStack.count() << endl;

    return 0;
}