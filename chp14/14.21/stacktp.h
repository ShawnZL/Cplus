//
// Created by Shawn Zhao on 2022/4/4.
//

#ifndef INC_14_21_STACKTP_H
#define INC_14_21_STACKTP_H

template <class Type>
class Stack {
private:
    enum {Max = 10};
    Type items[Max]; //holds stack items
    int top;
public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Type & item); // add item to stack
    bool pop(Type & item); //pop top into item
};

template <class Type>
Stack<Type>::Stack() {
    top = 0;
}

template <class Type>
bool Stack<Type>::isempty() {
    return top == 0;
}

template <class Type>
bool Stack<Type>::isfull() {
    return top == Max;
}

template <class Type>
bool Stack<Type>::push(const Type & item) {
    if (top < Max) {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

template <class Type>
bool Stack<Type>::pop(Type & item) {
    if (top > 0) {
        item = items[--top];
        return true;
    }
    else
        return false;
}


#endif //INC_14_21_STACKTP_H
