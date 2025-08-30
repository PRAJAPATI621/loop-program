#include <stdio.h>
int main()
{
 int i,n;
 float sum;
 printf("Enter a positive even integer (n):");
 scanf("%d", &n);
 for(i = 1; i <= n && i; i = i+2)
 sum = n*(n+1);
 {
  printf("sum of first %d natural number: %f\n", n,sum);
 }
 return 0;
}
