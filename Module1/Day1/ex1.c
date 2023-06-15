#include <stdio.h>
int findMaxUsingIfElse(int a, int b) 
{
 int max;
 if (a > b) {
  max = a;
} 
else 
 {
   max = b;
 }
return max;
}
int findMaxUsingTernaryOperator(int a, int b)
 {
   int max = (a > b) ? a : b;
return max;
}
int main()
 {
int x = 10;
int y = 20;
int resultIfElse = findMaxUsingIfElse(x, y);
printf("Using if-else, the largest number is: %d\n", resultIfElse);
int resultTernaryOperator = findMaxUsingTernaryOperator(x, y);
printf("Using the ternary operator, the largest number is: %d\n", resultTernaryOperator);
return 0;
}