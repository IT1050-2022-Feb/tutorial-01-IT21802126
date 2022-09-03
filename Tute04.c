/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int min(int n1, int n2);
int max(int n1, int n2);
int mlt(int n1, int n2);

int main() 
{
  int n1, n2;

  printf("Enter a value for no 1 : ");
  scanf("%d", &n1);

  printf("Enter a value for no 2 : ");
  scanf("%d", &n2);

  printf("%d ", min(n1, n2));

  printf("%d ", max(n1, n2));

  printf("%d ", mlt(n1, n2));

  return 0;

}

int min(int n1, int n2)
{
  if(n1 > n2)
  {
    return n2;
  }
  else
  {
    return n1;
  }

int max(int n1, int n2)
{
  if(n1 > n2)
  {
    return n1;
  }
  else
  {
    return n2;
  }

int multiply (int n1, int n2)
{
  return n1 * n2;
}

