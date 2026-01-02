#include <math.h> 
#include <stdio.h> 

int main() { 
    int i, j, t, n, res; 
    
    scanf("%d", &t); 

    for(i = 0; i < t; i++) { 
        scanf("%d", &n); 
        res = 0; 
        for(j = 0; j < n; j++) { 
            res += pow(2, j); 
        } 
        
        printf("%d\n", res); 
    } 
    
    return 0; 
}