#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, score = 0, a[100][100], i, j, k = 1;;
    scanf("%d", &n);

    for(i = 0; i < 2; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
            }
        }

        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        
    for(i = 0; i < 2; i++){
        int m = 1;
        for(j = n-1; j >= 0; j--){
            if( a[m][j] >= a[i][j]){
                 printf("%d", a[m][j]);
                 if( a[m][j] % a[i][j] == 0){
                    score = score +( a[i][j] * k);
                    printf("%d", score);
                }
                else
                    score = score + (1 * k);
                    printf("%d", score);
            }
            else{
                 if( a[i][j] % a[m][j] == 0){
                    score = score +( a[m][j] * k);
                }
                else
                    score = score + (1 * k);
            }
            
        }
        k++;
    }
    printf("%d",score);
}