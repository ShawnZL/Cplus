//
// Created by Shawn on 2022/2/25.
//

#ifndef INC_12_10_QUEUE_H
#define INC_12_10_QUEUE_H
class Customer {
private:
    long arrive;
    int processtime;
public:
    Customer() {arrive = processtime = 0;} //default constructor

    void set(long when);
    long when() const {return arrive;}
    int ptime() const {return processtime;}
};

typedef Customer Item;

class Queue{
private:
    struct Node {
        Item item;
        struct Node * next;
    };
    enum {Q_SIZE = 10};
// private class member
    Node * front;
    Node * rear;
    int items; // numberof items in Queue
    const int qsize; //maximum number of items in Queue
    Queue(const Queue & q) : qsize(0) {} //preemptive definition
    Queue & operator=(const Queue & q) {
        return *this;
    }

public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};
#endif //INC_12_10_QUEUE_H
