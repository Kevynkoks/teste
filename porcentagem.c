/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float numero,porcentagem,resultado;
    
    scanf("%f",&numero);
    scanf("%f",&porcentagem);
    
    resultado=((porcentagem/100)*numero);
    
    printf("resultado:%.2f", resultado);
    
    return 0;
}
 