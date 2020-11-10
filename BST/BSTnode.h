#ifndef BSTNODE_H
#define BSTNODE_H

#include <iostream>

template <class T>
class BSTnode {

public:
  T data;
  BSTnode<T> * parent;
  BSTnode<T> * left;
  BSTnode<T> * right;
  BSTnode(T val);
  void print();

};

#include "BSTnode.cpp"
#endif