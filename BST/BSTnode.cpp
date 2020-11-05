#include "BSTnode.h"

template <class T>
BST<T>::BST<T>(T val) {

  this->data = val;
  this->parent = nullptr; // -std=c++11
  this->left = nullptr;
  this->right = nullptr;

}

void print() {

  std::cout << this->data << "\n";

}