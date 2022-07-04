#include <stdio.h>
int main()
{
  int first, last, i, j, flag = 0;
  printf("you want to Start Prime number");
  scanf("%d", &first);
  printf("you want to End Prime number");
  scanf("%d", &last);
  for (i = first; i <= last; i++)
  {
    for (j = 2; j < i; j++)
      if (i % j == 0)
      {
        flag = 1;
        break;
      }
    if (i == j)
    {
      if (flag == 1)
      {
        printf("\n%d is a  prime number\n", i);
      }
    }
  }
  return 0;
}