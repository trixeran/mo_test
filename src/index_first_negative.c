#include <stdio.h>

int index_first_negative(int n, int array[]){
    int first_neg;
    int i;
    for (i = 0; i < n; i++){
        if (array[i] < 0){
            first_neg = i;
            return first_neg;
            break;
        }
    }
}