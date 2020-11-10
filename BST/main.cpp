#include "BST.h"

int main () {

  BST<char> tree;
  int i;
  for (i = 65; i < 91; i++) {

    BSTnode<char> * node = new BSTnode<char>(i);
    tree.insert(node);

  }
  
  tree.in_order(tree.root); 

  return 0;
}