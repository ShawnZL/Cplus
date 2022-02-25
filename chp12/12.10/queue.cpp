//
// Created by Shawn on 2022/2/25.
//
#include "queue.h"
#include <cstdlib>
//Queue methods
Queue::Queue(int qs) : qsize(qs) { //在创建queue对象时进行初始化
    front = rear = NULL;
    items = 0;
}
/* 另一种写法
Queue::Queue(int qs) : qsize(qs), front(NULL), rear(NULL), items(0){}
*/

Queue::~Queue() {
    Node * temp;
    while(front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty() const {
    return items == 0;
}

bool Queue::isfull() const {
    return items == qsize;
}

int Queue::queuecount() const {
    return items;
}

//Add item to queue
bool Queue::enqueue(const Item &item) {
    if (isfull())
        return false;
    Node * add = new Node;
    add->item = item;
    add->next = NULL;
    items++;
    if (front == NULL)
        front = add;
    else
        rear->next = add;
    rear = add;
    return true;
}

//place front item into item variable and remove from queue

bool Queue::dequeue(Item &item) {
    if (isempty())
        return false;
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = NULL;
    return true;
}

void Customer::set(long when) {
    processtime = std::rand() % 3 + 1;
    arrive = when;
}