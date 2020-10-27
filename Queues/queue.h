#ifndef QUEUE_H
#define QUEUE_H

template<class T>
struct q_node {

  T data;
  q_node<T> * next;

}

class Queue {
private:

  q_node * front;
  q_node * back;

  int q_size;
  int q_cnt;

public:
  Queue(int n = 10);
  ~Queue();

  void enqueue(const T);
  T dequeuq();
  bool isEmpty() const;
  bool isFull() const;

};

#include "queue.cpp"
#endif