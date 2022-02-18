//
// Created by Shawn on 2022/2/18.
//

#ifndef INC_10_4_STOCK_H
#define INC_10_4_STOCK_H
typedef unsigned long Item;

class Stack {
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack(); // 无参数默认构造函数
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item); //add item to stack
    bool pop(Item & item);// 引用
};
#endif //INC_10_4_STOCK_H
