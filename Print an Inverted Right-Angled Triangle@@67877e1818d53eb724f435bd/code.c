#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("");
    for(int i = n;i>0;i--){
        for(int j; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}