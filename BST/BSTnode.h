#ifndef BSTNODE_H
#define BSTNODE_H

#include <iostream>

template <class T>
class BSTnode {

private:
  T data;
  BSTNode<T> * parent;
  BSTNode<T> * left;
  BSTNode<T> * right;

public:
  BSTnode(T val);
  void print();

};

#include "BSTnode.cpp"
#endif