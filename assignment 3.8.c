#include <stdio.h>
int main()
{
 int i,n;
 float sum;
 printf("Enter a positive odd integer (n):");
 scanf("%d", &n);
 for(i = 1; i <= n; i = i+2)
 sum = n*n;
 {
  printf("sum of first %d natural number: %f\n", n,sum);
 }
 return 0;
}
