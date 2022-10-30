#include <stdio.h>

int index_last_negative(int n, int array[]){
    int last_neg;
    int i;
    for (i = 0; i < n; i++){
        if (array[i] < 0){
            last_neg = i;
        }
    }
    return last_neg;
}