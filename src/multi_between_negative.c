#include <stdio.h>
#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_between_negative(int n, int array[]){
    int pro_res,i,l;
    pro_res = 1;
    i = index_first_negative(n, array);
    l = index_last_negative(n, array);
    for (i; i < l; i++){
        pro_res = pro_res * array[i];
    }
    return pro_res;
}
