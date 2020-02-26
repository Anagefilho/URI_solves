#include <stdio.h>
 
int main()
 
{
 
    int hi, hf, tempo;
 
    scanf("%d %d", &hi, &hf);
 
    tempo = hf - hi;
 
    if (tempo < 0)
 
    {
 
        tempo = 24 + (hf - hi);
 
    }
 
    if (hi == hf)
 
    {
 
        printf("O JOGO DUROU 24 HORA(S)\n");
 
    }
 
    else printf("O JOGO DUROU %d HORA(S)\n", tempo);
 
 
 
    return 0;
 
}
