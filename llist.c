#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, const char *argv[]) {
  int i;
  node head;
  for(i=0; a<argc; i++){
    if(argv[i].equals("ih"){
      llist_insert_head(head, atoi(argv[i+1]));
      i++;
    }
    if(argv[i].equals("it"){
      llist_insert_tail(head, atoi(argv[i+1]));
      i++;
    }
    if(argv[i].equals("dh"){
      llist_delete_head(head);
    }
    if(argv[i].equals("f"){
      llist_free(head);
    }
    if(argv[i].equals("p"){
      llist_print(head);
    }
  }
}