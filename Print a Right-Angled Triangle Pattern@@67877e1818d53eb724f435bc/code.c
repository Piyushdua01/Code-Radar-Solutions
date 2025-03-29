#include <stdio.h> 
int main(){
    int N;
    printf("");

    scanf("%d",&N);
    for(int i =0;i>N;i++){
        for(int j = N; j<=N;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}