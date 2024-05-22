#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node {
  int data;
  struct node *link;
};

int main(int argc, char *argv[]) {
  struct node *head = NULL;
  struct node *t = NULL;

  struct node *n1 = (struct node *)malloc(1 * sizeof(struct node));
  n1->data = 10;
  n1->link = NULL;

  head = n1;
  t = head;

  n1 = (struct node *)malloc(1 * sizeof(struct node));
  n1->data = 20;
  n1->link = NULL;

  t->link = n1;
  t = n1;

  n1 = (struct node *)malloc(1 * sizeof(struct node));
  n1->data = 30;
  n1->link = NULL;

  t->link = n1;
  t = n1;

  n1 = (struct node *)malloc(1 * sizeof(struct node));
  n1->data = 40;
  n1->link = NULL;

  t->link = n1;
  t = n1;

  n1 = (struct node *)malloc(1 * sizeof(struct node));
  n1->data = 50;
  n1->link = NULL;

  t->link = n1;
  t = n1;

  t = head;
  while (t != NULL) {
    printf("%d ->", t->data);
    t = t->link;
  }
  return EXIT_SUCCESS;
}
