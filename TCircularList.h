#ifndef TCIRCULAR_LINKED_LIST_H
#define TCIRCLAR_LINKED_LIST_H
#include <stdbool.h>

typedef struct linked_list TCircularList;

TCircularList* TCircularList_create();

_Bool TCircularList_insert_end(TCircularList*, int);

_Bool TCircularList_remove_after_n_steps(TCircularList*, int);

void TCircularList_print(TCircularList*);


#endif
