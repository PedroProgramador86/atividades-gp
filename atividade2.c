#include <stdio.h>

int main()
{
    int valor;
    
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    if(valor % 2 == 0){
        
        printf("O numero digitado é Par");
        
    }
    
    else if(valor % 2 == 1){
        
        printf("O numero digitado é Impar");
        
    }

    return 0;
}