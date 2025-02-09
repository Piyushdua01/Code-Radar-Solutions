#include <stdio.h>

int main() {
    int x,y;
    
    scanf("%d",&x);
    printf("%d",x);
    scanf("%d",&y);
    printf("%d",y);

    // scanf("%d %d",&x,&y);
    // printf("you entered: %d and %d\n",x,y);
    int a = x+y;
    printf("Sum: %d",a);
    return 0; 
}