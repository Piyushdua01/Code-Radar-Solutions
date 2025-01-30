#include <stdio.h>

int main() {
    int x,y;
    // printf("%d",x);
    // scanf("%d",&x);
    // printf("%d",y);
    // scanf("%d",&y);

    scanf("%d %d",&x,&y);
    printf("you entered: %d and %d\n",x,y);
    int a = x+y;
    printf("Sum: %d",a);
    return 0; 
}