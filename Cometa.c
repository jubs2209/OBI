#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    scanf("%d",&ano);
    int anofi=(ano-1986) %76;
    anofi=(76-anofi)+ano;


    printf("%d",anofi);
    return 0;
}
