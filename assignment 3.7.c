#include <stdio.h>
int main()
{
 int i,n;
 float sum;
 printf("Enter a positive integers (n):");
 scanf("%d", &n);
 for(i = 1; i <= n; i++)
 sum = n*(n+1)/2;
 {
  printf("sum of first %d natural number: %f\n", n,sum);
 }
 return 0;
}

