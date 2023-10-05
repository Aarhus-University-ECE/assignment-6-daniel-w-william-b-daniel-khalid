#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
int size(node *l) {
    node *p;
    p = l;
    int i = 0;
    while(p->next != NULL){
        p = p->next;
        i++;
    }
    return i;
}


// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  node *p = l;
  while (p->next != NULL) {
    p = p->next;              /*Sets p to point at the next element in the list*/
    printf("%d, ", p->data);  /*Prints the data value of the */
  }
  printf("\n");
}

// exersice 3.e
int largest(node *l) {
  // pre:  head poinst to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list
  node *p = l;  /*We make a pointer l, that points the same adress as l, so we dont change l and the list*/
  node *m = l->next; /*We make a pointer m, which point to the first element after head*/
  int max = m->data; /*The max value is the value of data for the node that p points to*/
  int numb;
  while (p->next != NULL){ /*While loop sees if any af the data values are higher than max for all the elements in the list*/
    p = p->next;
    numb = p->data;
    if (numb > max){
      max = numb;
    }
    
  }
  return max;
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  // Show list here
  add(list, 2);
  // Show list here

  return 0;
}

#endif
