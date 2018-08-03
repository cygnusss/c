#include <stdio.h>
#include <stdlib.h>  
/*
typedef struct LinkedList *node; //Define node as pointer of data type struct LinkedList

node createNode(){
    
    node temp; // declare a node
    temp = (node)malloc(sizeof(struct LinkedList)); // allocate memory using malloc()
    temp->next = NULL;// make next point to NULL
    return temp;//return the new node
}
typedef is used to define a data type in C.

malloc() is used to dynamically allocate a single block of memory in C, it is available in the header file stdlib.h.

sizeof() is used to determine size in bytes of an element in C. Here it is used to determine size of each node and sent as a parameter to malloc.

node addNode(node head, int value){
    node temp,p;// declare two nodes temp and p
    temp = createNode();//createNode will return a new node with data = value and next pointing to NULL.
    temp->data = value; // add element's value to data part of node
    if(head == NULL){
        head = temp;     //when linked list is empty
    }
    else{
        p  = head;//assign head to p 
        while(p->next != NULL){
            p = p->next;//traverse the list until p is the last node.The last node always points to NULL.
        }
        p->next = temp;//Point the previous last node to the new node created.
    }
    return head;
}
*/

struct LinkedList {
  int data;
  struct LinkedList *next;
  struct LinkedList *head;
  struct LinkedList *tail;
};

typedef struct LinkedList *node;

node makeLinkedList(int val) {
  node temp;
  temp = (node)malloc(sizeof(struct LinkedList));
  temp->data = val;
  temp->next = NULL;
  if (temp->head == NULL) { temp->head = temp; }
  if (temp->tail == NULL) { temp->tail = temp; }
  return temp;
}

int main() {
  node NewNode = makeLinkedList(20);
  printf("\n");
  printf("Linked list's data is: %d\n\n", NewNode->head->data);
}