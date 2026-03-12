#include<stdio.h>

int main(){
    int top = -1;
    int stack[5];
    int max = 5;

    for(int i=0;i<max;i++){
        if(top == max -1){
            printf("Stack Elements are Full");
        }
        else{
            top++;
            printf("Enter the element to be pushed: ");
            scanf("%d", &stack[top]);
        }
    }

   
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }

    printf("Stack after pop:\n");

    for(int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }

    return 0;


    for(int i=0;i<max;i++){
        printf("%d\n", stack[i]);
    }
}