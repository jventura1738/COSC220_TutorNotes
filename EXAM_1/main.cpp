/*
 * Justin Ventura COSC220 Tutor Notes
 * 
 * Algorithms.
*/

#include <iostream>
#include <string>

/*
 * Function to find the min/max of value
 * an array.
 *
 * Parameters: array, len of array, bool
 * for min(1), max(0).
 * Returns: the min/max value.
*/
int min_max(int * arr, int len, bool mini) {

  if (!arr) {

    std::cout << "bruh\n";
    return -9999999;

  }

  int i, max = arr[0];
  int min = arr[0];

  if (!mini) {

    for(i = 1; i < len; i++) {

      if (arr[i] > max) {

        max = arr[i];

      }

    } 

    return max;

  }
  else {

    for(i = 1; i < len; i++) {

      if (arr[i] < min) {

        min = arr[i];

      }

    } 

    return min;

  }

}

/*
 * Recursive Palindrome Function.
*/
int is_palindrome(std::string arr, int start, int end) {

  if (start < end) {

    if (arr[start] != arr[end]) {

      return 0;

    }
    
    return is_palindrome(arr, start + 1, end - 1);

  }
  else {

    return 1;

  }

}

int main(int argc, char **argv) {

  std::string name = "hannah";
  int decision = is_palindrome(name, 0, 5);
  if (decision == 1) {

    std::cout << name <<  " is a palindrome!\n";

  }
  else {

    std::cout << name << " is not a palindrome.\n";


  }

  return 0;

}