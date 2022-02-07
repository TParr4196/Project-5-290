#include "llist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, const char *argv[]) {
  int i;
  struct node *head=NULL;
  for(i=0; i<argc; i++){
    if(strcmp(argv[i], "ih")==0){
      struct node *n = node_alloc(atoi(argv[i+1]));
      llist_insert_head(&head, n);
      printf("check");
      i++;
    }
    if(strcmp(argv[i], "it")==0){
      struct node *n = node_alloc(atoi(argv[i+1]));
      llist_insert_tail(&head, n);
      i++;
    }
    if(strcmp(argv[i], "dh")==0){
      llist_delete_head(&head);
    }
    if(strcmp(argv[i], "f")==0){
      llist_free(&head);
    }
    if(strcmp(argv[i], "p")==0){
      llist_print(head);
    }
  }
}

void llist_insert_head(struct node **head, struct node *n){
  if (*head==NULL){
    *head=n;
  }
  else{
    n->next=*head;
    *head=n;
  }
}

struct node *llist_delete_head(struct node **head){
  if(head!=NULL){
    struct node *n=head->next;
    node_free(*head);
    return n;
  }
}

void llist_insert_tail(struct node **head, struct node *n){
  if(head==NULL){
    *head=n;
  }
  else{
    struct node *pointer=head->next;
    while(pointer->next!=NULL){
      pointer=pointer->next;
    }
    pointer->next=n;
  }
}

void llist_print(struct node *head){
  printf("%d", head->value);
  struct node *pointer=head->next;
  while(pointer!=NULL){
    printf(" -> %d", pointer->value);
  }
  printf("\n");
}

void llist_free(struct node **head){
  if(*head!=NULL){
    struct node *pointer=head->next;
    node_free(*head);
    while(pointer->next!=NULL){
      *head=pointer;
      pointer=pointer->next;
      node_free(*head);
    }
  }
}

struct node *node_alloc(int value){
  struct node n=malloc(sizeof(int)+sizeof(struct node *));
  n.value=value;
  n.next=NULL;
  return &n;
}

void node_free(struct node *n){ 
  free(n);
}
