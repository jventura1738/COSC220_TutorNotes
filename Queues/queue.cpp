#include "queue.h"

template <typename T>
Queue<T>::Queue(int n) {

  this->front = NULL;
  this->back = NULL;
  this->q_size = n;
  this->q_cnt = 0;

}

template <typename T>
Queue<T>::~Queue() {



}

template <typename T>
void Queue<T>::enqueue(const T) {

  if (!this->isFull()) {

    

  }

}

template <typename T>
T Queue<T>::dequeue() {



}

template <typename T>
bool Queue<T>::isEmpty() const {

  return (q_cnt == 0) : true ? false;

}

template <typename T>
bool Queue<T>::isFull() const {

  return (q_size == q_cnt) : true ? false;

}