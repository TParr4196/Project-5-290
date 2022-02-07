#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, const char *argv[]) {
  int i;
  struct node *head=NULL;
  for(i=0; a<argc; i++){
    if(argv[i].equals("ih"){
      struct node *n = node_alloc(atoi(argv[i+1]));
      llist_insert_head(&head, n);
      i++;
    }
    if(argv[i].equals("it"){
      struct node *n = node_alloc(atoi(argv[i+1]));
      llist_insert_tail(&head, n);
      i++;
    }
    if(argv[i].equals("dh"){
      llist_delete_head(&head);
    }
    if(argv[i].equals("f"){
      llist_free(head);
    }
    if(argv[i].equals("p"){
      llist_print(head);
    }
  }
}

void llist_insert_head(struct node **head, struct node *n){

}

struct node *llist_delete_head(struct node **head){

}

void llist_insert_tail(struct node **head, struct node *n){

}

void llist_print(struct node *head){

}

void llist_free(struct node **head){

}

struct node *node_alloc(int value){
  
}

void node_free(struct node *n){

}
