#include <stdio.h>

enum dias{
    domingo,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
};
int main()
{
    enum dias d1, d2;

    d1= domingo;
    d2= 0;

    if(d1==d2){
        printf("Os valores de d1 e de d2 sao iguias ");
    }

    
}
