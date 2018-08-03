#include <stdio.h>
#include <stdlib.h>

int maxSubArraySum(int a[], int size, int *begin, int *end) {
  int prev_max = a[0], max_so_far = a[0], max_end = a[0];
  int i, current_index = 0;

  for (i = 1; i < size; i++) {
    max_end += a[i];
    if (max_end <= 0 && max_end < a[i]) {
      max_end = a[i];
      current_index = i;
    }
    if (max_so_far < max_end) {
      max_so_far = max_end;
      *begin = current_index;
      *end = i;
    }
  }
  return max_so_far;
}
 
int main()
{
    // int arr1[] = {10, -2, 15, 9, -80, 12, 20, -5};
    int arr1[] = {-10, -2, -1, 2, -15, -9, -8, -12, -20, -5};
    int start = 0, end = 0;
    int size = sizeof(arr1)/sizeof(arr1[0]);
 
    // printf(" The max sum is %d", maxSubArraySum(arr1, size, &start, &end));
    // printf(" The begin and End are %d & %d", start, end);
    // printf("\n");
    printf(" The max sum is %d", maxSubArraySum(arr1, size, &start, &end));
    printf(" The begin and End are %d & %d", start, end);
    printf("\n");
    // getchar();
    return 0;
}
