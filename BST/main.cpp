#include "BST.h"

int main () {

  BST<int> tree;
  int x;
  std::cout << "enter a root: ";
  std::cin >> x;
  BSTnode<int> * node = new BSTnode<int>(x);
  tree.insert(node);

  int i;
  for (i = 0; i < 10; i++) {

    BSTnode<int> * node = new BSTnode<int>(i);
    tree.insert(node);

  }
  
  tree.in_order(tree.root);

  return 0;
}