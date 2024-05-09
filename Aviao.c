#include <stdio.h>
#include <stdlib.h>

int main()
{
 int F,C,E,B,fil,posi;


     scanf("%d%d%d%d",&F,&C,&E,&B);

     fil= (B-1)/C+E;
     posi= (B-1)%C+1;
      if(fil<=F){
        printf("%d %c",fil,(posi -1)+'A');
      }
      else {
      printf("PROXIMO VOO");

        }






    return 0;
}
