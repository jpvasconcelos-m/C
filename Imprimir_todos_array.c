/***********************************************************************************
Crie um código utilizando uma função para imprimir todos os elementos de um array.
************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int arr[MAX_SIZE];
int i;

int print_array (int n){


/*Imprimir todos os elementos do array*/    
    
    for(i=0;i<n;i++)
    printf("\n%d",arr[i]);
return 0;
}
int main()
{
int n;

/*Receber o número de elementos de um array*/   
    scanf("%d",&n);
    
/*Receber os elementos de um array*/
    
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
 
 /*Chama a função print_array*/   
    print_array(n);
    
}