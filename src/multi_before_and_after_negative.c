#include <stdio.h>
#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_before_and_after_negative(int n, int array[]){
    int pro_res,i,l,k;
    pro_res = 1;
    i = index_first_negative(n, array);
    l = index_last_negative(n, array);
    for (k = 0; k < i; k++){
        pro_res = pro_res * array[k];
    }
    for (l ; l < n; l++){
        pro_res = pro_res * array[l];
    }
    return pro_res;
}
