#include <stdio.h>

void swap(int *a, int *b)
{
  printf("A:: %d", a);
  int temp = a;
  a = b;
  b = temp;
}

int insertion_sort(int s[], int n)
{
  int i, j;

  for (i=1; i<n; i++)
  {
    j = i;
    while ((j>0) && (s[j] < s[j-1]))
    {
      swap(&s[j], &s[j-1]);
      j--;
    }
  }

  return *s;
}

int main() {
  int array[5] = {1, 2, 5, 3, 4};

  insertion_sort(array, 5);

  printf("Array is:");
  for (int i=0; i < 5; i++) 
  {
    printf("%d", array[i]);
  }
  printf("\n");

  return 0;
}