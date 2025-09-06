#include <stdio.h>
int main()
{
 int a,b;
  printf("Enter the number (a):");
  scanf("%d", &a);
  printf("Enter the number (b):");
  scanf("%d", &b);
   for(a <= 100; b <= 100;)
 if(a>b)
 {
  printf("%d is larger than %d\n", a,b);
 }
 else if(a<b)
 {
  printf("%d is larger than %d\n", b,a);
 }
 else
 {
  printf("%d is equal to %d", a,b);
 }
return 0;
}