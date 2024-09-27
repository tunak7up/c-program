#include<stdio.h>

void printArray(int a[], int n){
    for (int i = 1; i <= n; i++){
        printf("%d", a[i]);
    }
    printf(" ");
}

void dequy(int x[], int h, int k, int n){
    for (int i = x[h-1] + 1; i <= n - (k-h); i++){
        x[h] = i;
        if (h == k) printArray(x, k);
        else {
            dequy(x, h+1, k, n);
        }
    }
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int x[11];
    x[0] = 0;
    dequy(x, 1, k, n);
}
