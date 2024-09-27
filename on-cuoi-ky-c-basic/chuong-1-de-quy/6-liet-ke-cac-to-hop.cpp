#include <stdio.h>

#define MAX 100 

int x[MAX]; 
int n, k; 

void printSolution() {
    for(int i = 1; i <= k; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

void TRY(int i) {
    for(int v = x[i-1]+1; v <= n-k+i; v++){
        x[i] = v;
        if(i == k)
            printSolution();
        else 
            TRY(i+1);
    }
}

int main() {
   
    n = 5;
    k = 3;
    x[0] = 0;
    TRY(1);
    return 0;
}
 
