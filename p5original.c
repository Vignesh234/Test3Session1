#include <stdio.h>
int main() {
  int n;
  int f;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
      f=i;
    }
  }

  printf("Largest element = %.2lf", arr[0]);
  printf("The Index Is:%d",f);

  return 0;
}