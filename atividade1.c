#include <stdio.h>

int main()
{

    int n1;
    int n2;
    int n3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    if(n1 > 0){

        printf("O valor %d digitado é maior que 0\n", n1);

    }

    else if(n1 == 0){

        printf("O valor %d digitado é igual a 0\n", n1);

    }

    else if(n1 < 0){

        printf("O valor %d digitado é menor que 0\n", n1);

    }


    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    if(n2 > 0){

        printf("O valor %d digitado é maior que 0\n", n2);

    }

    else if(n2 == 0){

        printf("O valor %d digitado é igual a 0\n", n2);

    }

    else if(n2 < 0){

        printf("O valor %d digitado é menor que 0\n", n2);

    }

    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    if(n3 > 0){

        printf("O valor %d digitado é maior que 0\n", n3);

    }

    else if(n3 == 0){

        printf("O valor %d digitado é igual a 0\n", n3);

    }

    else if(n3 < 0){

        printf("O valor %d digitado é menor que 0\n", n3);

    }

    return 0;
}