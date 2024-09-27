#include <iostream>
using namespace std;
int input() {
    int n;
    cin >> n;
    return n;
}
unsigned long int giai_thua(int n) {
    unsigned long int so_cuoi = 1;
    
    for (int i =2; i <=n; i++) {
        
    
        
            
        so_cuoi *= i;
            
        
        int limit = 10000;
        
    
        
        
        while (so_cuoi >=limit) {
            if (so_cuoi % 10 == 0) {
                so_cuoi /= 10;
            }
            else {
            so_cuoi %= limit;
            }
            
                
            
            
        }
        
        if ( i == n) {
            while ( so_cuoi % 10 == 0) {
                so_cuoi/= 10;
            
            }
            so_cuoi %= 10;
        }
    }
    
    return so_cuoi;
}
int main() {
    int  n = input();
    cout << giai_thua(n);
}
