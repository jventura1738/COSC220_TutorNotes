/*
 * Justin Ventura COSC220 Tutor Notes
 * 
 * Algorithms.
*/

#include <iostream>

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

  int i, max = arr[0], min = arr[0];

  if (!min) {

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

int main(int argc, char **argv) {

  int * arr = new int[10];
  int i;
  for (i = 0; i < 10; i++) {

    arr[i] = i;

  }

  std::cout << min_max(arr, 10, 1) << "\n";
  
  return 0;

}