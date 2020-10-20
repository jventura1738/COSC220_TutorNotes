#include "Node.h"
#include "List.h"

int main(int argc, char** argv) {

  Node head(1, "Justin");
  head.fprint();

  std::cout << head.get_hidden_data() << "\n";

  List list;

  list.insert_node();
  list.insert_node();
  list.insert_node();

  return 0;
}