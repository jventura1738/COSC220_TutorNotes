#include "BST.h"

template <typename T>
BST<T>::BST() {

  this->root = nullptr;

}

template <typename T>
BST<T>::~BST() {

  subtreeRemoval(this->root);

}

// Recursive deletion. L R N
template <typename T>
void BST<T>::subtreeRemoval(BSTnode<T> * r) {

	if (r) {

		subtreeRemoval(r->left);
		subtreeRemoval(r->right);
		delete r;

	}

}

template <typename T>
BSTnode<T> * BST<T>::_max(BSTnode<T> * x) {

  BSTnode<T> * y;
  while(y->right) {

    y = y->right;

  }
  return y;

}

template <typename T>
BSTnode<T> * BST<T>::_min(BSTnode<T> * x) {

  BSTnode<T> * y;
  while(y->left) {

    y = y->left;

  }
  return y;

}




template <typename T>
BSTnode<T> * BST<T>::_successor(BSTnode<T> * x) {

  if (x->right) {

    return _min(x->right);

  }
  else {

    BSTnode<T> * y = x->parent;
    while (y && x == y->right) {

      x = y;
      y = y->parent;

    }

    return y;

  }

}

template <typename T>
BSTnode<T> * _predecessor(BSTnode<T> * x) {

  if (x->left) {

      return _max(x->left);

  }
  else {

    BSTnode<T> * y = x->parent;
    while (y && x == y->left) {

      x = y;
      y = y->parent;

    }

    return y;

  }

}

template <typename T>
void BST<T>::pre_order(BSTnode<T> * r) {

  if (r) {

    std::cout << r->data << "\n";
    pre_order(r->left);
    pre_order(r->right);

  }

}

template <typename T>
void BST<T>::in_order(BSTnode<T> * r) {

  if (r) {

    pre_order(r->left);
    std::cout << r->data << "\n";
    pre_order(r->right);

  }

}

template <typename T>
void BST<T>::post_order(BSTnode<T> * r) {

  if (r) {

    pre_order(r->left);
    pre_order(r->right);
    std::cout << r->data << "\n";

  }

}


template <typename T>
void BST<T>::insert(BSTnode<T> * z) {

  BSTnode<T> * y = NULL;
  BSTnode<T> * x = this->root;
  while(x) {

    y = x;
    if (z->data < x->data) {

      x = x->left;

    }
    else {

      x = x->right;

    }

  }
  z->parent = y;
  if (!y) {

    this->root = z;

  }
  else if (z->data < y->data) {

    y->left = z;

  }
  else {

    y->right = z;

  }

}

template <typename T>
void BST<T>::remove(BSTnode<T> * z) {

  if (!this->search(this->root, z->data)) {

    std::cout << z->data << " is not in BST.\n";
    return;

  }

  BSTnode<T> * y = NULL;
  BSTnode<T> * x = NULL;
  if (!z->left || !z->right) {

    y = z;

  }
  else {

    y = this->_successor(z);

  }
  if (y->left) {

    x = y->left;

  }
  else {

    x = y->right;

  }
  if (x) {

    z->parent = y->parent;

  }
  if (!y->parent) {

    this->root = x;

  }
  else if (y == y->parent->left) {

    y->parent->left = x;

  }
  else {

    y->parent->right = x;

  }
  if (y != z) {

    z->data = y->data;

  }
  delete y;

}


// NLR (Pre-order) scheme!
template <typename T>
BSTnode<T> * BST<T>::search(BSTnode<T> * x, const T & key) {

  if (!x || key == x->data) {

    return x; // return NULL or requested data.

  }
  if (key < x->data) {

    return search(x->left, key);

  }
  else {

    return search(x->right, key);

  }

}