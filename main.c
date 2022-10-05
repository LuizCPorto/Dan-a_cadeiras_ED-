#include "TCircularList.h"
#include <stdio.h>
int main(){
    int tam1, tam2, ins1 =  1, ins2 = 0, cont = 0, z = 0;
    TCircularList* L1 = TCircularList_create();
    TCircularList* L2 = TCircularList_create();
    scanf ("%d %d", &tam1, &tam2);
    int V[tam1], W[tam2];
    for(int i=0; i<tam1; i++){
        V[i] = ins1++;
        if(!TCircularList_insert_end(L1, V[i]))
            printf("Não consegui inserir o V[%d]=%d na L1\n", i, V[i]);
    }
    for(int i=0; i<tam2; i++){
        scanf ("%d", &W[i]);
        if(!TCircularList_insert_end(L2, W[i]))
            printf("Não consegui inserir o W[%d]=%d na L1\n", i, W[i]); 
    }
    ins2 = tam1 - 1; 
    for (int i = 0; i < ins2; i++)
    {
       TCircularList_remove_after_n_steps(L1, W[z]);  
        cont++;
        z++;
        if (cont == tam2){
            z = 0;
            cont =0;
        }
    }
    TCircularList_print(L1);
    
    return 0;
}
