#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[4];
    for(int i=0;i<4;i++){
      scanf("%d",&v[i]);
    }


     if((v[0]==v[2])|| (v[1]==v[3])){
        printf("V");
     }else{
        printf("F");
        }
    return 0;
}
