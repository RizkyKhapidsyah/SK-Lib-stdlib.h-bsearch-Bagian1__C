#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int compareints(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int values[] = { 50, 20, 60, 40, 10, 30 };

int main() {
    int* pItem;
    int key = 40;

    qsort(values, 6, sizeof(int), compareints);
    
    pItem = (int*)bsearch(&key, values, 6, sizeof(int), compareints);
    
    if (pItem != NULL) {
        printf("%d is in the array.\n", *pItem);
    } else {
        printf("%d is not in the array.\n", key);
    }
        
    _getch();
    return 0;
}