#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

template<class T>
struct q_node {

  T data;
  q_node<T> * next;

};

template<class T>
class Queue {
private:

  q_node<T> * front;
  q_node<T> * back;

  int q_size;
  int q_cnt;

public:
  Queue(int n = 10);
  ~Queue();

  void enqueue(const T);
  T dequeue();
  void front_queue();
  void print_queue();
  bool is_empty() const;
  bool is_full() const;

};

#include "queue.cpp"
#endif