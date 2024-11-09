#include <stdio.h>

int ppattern(int);

int main()
{
    int n;
    printf("Enter number of star: ");
    scanf("%d",&n);
    ppattern(n);
    return 0;

}

int ppattern(int n) {
   if(n>0)
    {
      for(int i=n;i>0;i--)
      {
          printf("*");
      }
      printf("\n");

      ppattern(n-1);
   }
}

