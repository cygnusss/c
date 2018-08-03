#include <stdio.h>
#include <string.h>


#define MYNAME "David Kumarbai"

int globalVar = 10;

int main() {
  char middleInitial;

  printf("What is your middle intitial?");

  scanf(" %c", &middleInitial);

  printf("\n");

  printf("middle initial %c\n\n", middleInitial);

  char fistName[30], lastName[30];

  printf("What is your name?\n\n");

  scanf(" %s %s", fistName, lastName);

  printf("\n");

  printf("Your name is %s %c %s\n\n", fistName, middleInitial, lastName);
}