#include "BSTnode.h"

template <class T>
BSTnode<T>::BSTnode(T val) {

  this->data = val;
  this->parent = nullptr; // -std=c++11
  this->left = nullptr;
  this->right = nullptr;

}

template <class T>
void BSTnode<T>::print() {

  std::cout << this->data << "\n";

}