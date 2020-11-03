/*
 * Justin Ventura Fall 2020
 * COSC220 Tutor Notes
*/

#include "queue.h"

template <typename T>
Queue<T>::Queue(int n) {

  this->front = nullptr; // -std=c++11 flag
  this->back = nullptr;  // -std=c++11 flag
  this->q_size = n;
  this->q_cnt = 0;

}

template <typename T>
Queue<T>::~Queue() {

  while (this->is_empty()) {

    this->dequeue();

  }

}

template <typename T>
void Queue<T>::enqueue(const T val) {

  q_node<T> * newnode = new q_node<T>;
  newnode->data = val;
  newnode->next = nullptr; // -std=c++11 flag

  if (!this->is_full()) {

    // If the queue is empty
    if (this->is_empty()) {

      this->front = newnode;
      this->back = newnode;
      this->q_cnt++;

    }
    else {

        this->back->next = newnode;
        this->back = newnode;

        this->q_cnt++;

    }

  }
  else {

    std::cout << "Queue is full!\n";

  }#include "queue.cpp"
template <typename T>
T Queue<T>::dequeue() {

  if (this->is_empty()) {

    std::cout << "The queue is empty!\n";

  }
  else {

    q_node<T> * temp = this->front;
    T retval = temp->data;
    this->front = temp->next;
    temp->next = nullptr;
    delete temp;

    this->q_cnt--;
    return retval;

  }

}

template <typename T>
bool Queue<T>::is_empty() const {

  return this->q_cnt == 0;
  //return (this->q_cnt == 0) : true ? false;

}

template <typename T>
bool Queue<T>::is_full() const {

  return this->q_size == this->q_cnt;
  //return (this->q_size == this->q_cnt) : true ? false;

}

template <typename T>
void Queue<T>::front_queue() {

  if (!this->this_empty()) {

    std::cout << "Front of queue: " << this->front->data << "\n";
    return;

  }
  
  std::cout << "Queue is empty!\n";

}

template <typename T>
void Queue<T>::print_queue() {

  if (!this->is_empty()) {

    q_node<T> * temp = this->front;
    while (temp) {

      std::cout << temp->data << " ";
      temp = temp->next;

    }

    std::cout << "\n";
    return;

  }

  std::cout << "Queue is empty!\n";

}