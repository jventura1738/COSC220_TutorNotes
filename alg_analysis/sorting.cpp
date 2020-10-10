/*
 * Justin Ventura
 * Sorting File
*/

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

// Function to swap 2 integers.
void swap(int &xp, int &yp) {  
    int temp = xp;  
    xp = yp;  
    yp = temp;  
}

/*
 * Bad Bubble Sort.
 *
 * Best case: O(n^2)
 * Worst case:O(n^2)
 *
 * Think how we can improve this!
*/
void bubbleSort(int * arr, int n) {  
    int i, j;
    for (i = 0; i < n-1; i++)
      // Last i elements are already in place  
      for (j = 0; j < n-i-1; j++)
          if (arr[j] > arr[j+1])
              swap(arr[j], arr[j+1]);
}  

int main() {

  srand(time(0));
  int N = 10;
  int * arr = new int[N];

  std::cout << "Before sorting:\n";
  for (int i = 0; i < N; i++) {

    arr[i] = rand() % 10;
    std::cout << arr[i] << " ";
  }
  std::cout << "\nAfter sort:\n";

  bubbleSort(arr, N);

  for (int i = 0; i < N; i++) {

    std::cout << arr[i] << " ";
  
  }

  std::cout << "\n";
  
  return 0;
}
