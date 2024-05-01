#include<stdio.h>

#define tam       20
#define falso      0 
#define verdadeiro 1

int main()
{
    int vetor[20], i, change = falso, store, final = tam;
        printf ("Entre com o valor do vetor: \n");
        for (i=0; i<tam; i++)
        {
        printf("Elemento %d \n", i);
        scanf("%d", &vetor[i]);
        getchar();
        }
            do{
                change = falso;
                for (i=0; i<final; i++)
                    if (vetor[i]>vetor[i+1])
                    {
                    store = vetor[i];
                    vetor[i] = vetor[i+1];
                    vetor[i+1] = store;
                    change = verdadeiro;
                    }
          
            }while (change);
            
        
    printf("Ordem crescente/Método Bolha:");
    for (i=0; i<tam; i++) printf("%d \n", vetor[i]);
    return 0;
}