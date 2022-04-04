//
// Created by Shawn Zhao on 2022/4/3.
//

#ifndef INC_14_6_STCKTP1_H
#define INC_14_6_STCKTP1_H

template <class Type>
class Stack {
private:
    enum {SIZE = 10}; //default size
    int stacksize;
    Type * items; //holds stack items
    int top;
public:
    explicit Stack(int ss = SIZE); //显式构造函数
    Stack(const Stack & st);
    ~Stack() { delete [] items; }
    bool isempty() {return top == 0; }
    bool isfull() {return top == stacksize; }
    bool push(const Type & item); //add item to stack
    bool pop(Type & item); //pop top into item
    Stack & operator=(const Stack & st);
};

template <class Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0) {
    items = new Type [stacksize];
}

template <class Type>
Stack<Type>::Stack(const Stack<Type> &st) {
    stacksize = st.stacksize;
    top = st.top;
    items = new Type [stacksize];
    for (int i = 0; i < top; ++i)
        items[i] = st.items[i];
}

template <class Type>
bool Stack<Type>::push(const Type &item) {
    if (top < stacksize) {
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

template <class Type>
Stack<Type> & Stack<Type>::operator=(const Stack<Type> &st) {
    if (this == st)
        return *this;
    delete [] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new Type [stacksize];
    for (int i = 0; i < top; ++i) {
        items[i] = st.items[i];
    }
    return *this;
}

#endif //INC_14_6_STCKTP1_H
