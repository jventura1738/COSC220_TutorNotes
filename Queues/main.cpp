#include "queue.h"

int main(int argc, char ** argv) {

  Queue<int> iqueue;

  for (int i = 0; i < 10; i++) {

    iqueue.enqueue(i);

  }

  iqueue.print_queue();

  return 0;

}