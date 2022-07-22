// Author: Stephen Morris - 191867440
// Github Link - https://github.com/Obbacon/Assignment4.git

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main()

{
    int bSize[15], pSize[15], throws[15]; 
    int alloc[15];
    int i = 0;
    int j = 0;
    int processNumber, blockNumber;

    printf("Setup: ");
    for(i; i < 15; i++) {
        alloc[i] = -1;
        throws[i] = 0;
    }
    printf("Allocation amount:  ");
    scanf("%d", &blockNumber);
    printf("\nEnter size: ");

    for(i; i < blockNumber; i++){
        scanf("%d", bSize[i]);
    } 

    printf("Get processes ");
    scanf("%d", &processNumber);

    for (i; i < processNumber; i++){
        scanf("%d", &pSize[i]);
    }

    for(i; i< processNumber; i++){
        for(j; j < blockNumber; j++){
            if(throws[j] == 0 && bSize[j] >= pSize[i]){
                alloc[j] = i;
                break;
            }
        }
    }
    for (i; i < blockNumber; i++){
        printf("\n%d\t", i + 1);
    }
    return 0;
    
}