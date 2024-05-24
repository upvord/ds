#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node {
  int data;
  struct node *link;
};

struct node *create_node(int n) {
  struct node *n1 = (struct node *)malloc(1 * sizeof(struct node));
  if (n1 == NULL) {
    return NULL;
  }
  n1->data = n;
  n1->link = NULL;

  return n1;
}

int main(int argc, char *argv[]) {
  struct node *head = NULL;
  struct node *t = NULL;

  int i = 0;
  int n = 10;
  while (i < n) {
    t = create_node(i);
    if (head == NULL) {
      head = t;
    } else {
      struct node *temp = head;
      while (temp->link != NULL) {
        temp = temp->link;
      }
      temp->link = t;
    }
    i++;
  }

  t = head;
  while (t != NULL) {
    printf("%d ->", t->data);
    t = t->link;
  }
  return EXIT_SUCCESS;
}
