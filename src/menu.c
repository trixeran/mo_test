#include <stdio.h>
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_between_negative.h"
#include "multi_before_and_after_negative.h"
#define N 20

int main(){
    int array[N];
    int n = 0;
    int i;
    char c;
    int dev;
    scanf("%d", &dev);
    do{
        scanf("%d%c", &array[n], &c);
        n = n + 1;
    }while(n < N && c != '\n');
    switch (dev)
    {
    case 0:
        printf("%d\n",index_first_negative(n, array));
        break;
            
    case 1:
        printf("%d\n",index_last_negative(n, array));
        break;
    case 2:
        printf("%d\n",multi_between_negative(n, array));
        break;
        
    case 3:
        printf("%d\n",multi_before_and_after_negative(n, array));
        break;
    default:
        printf("Данные некорректны");
    }
    return 0;
}
