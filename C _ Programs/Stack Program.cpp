#include<stdio.h>
#define SIZE 4

// Stack using array
int arr[SIZE],top=-1;

void push();
void pop();
void stack();

int main(){
    int option;
    do{
    printf("\n1 for Push.\n2 for Pop.\n3 for Stack(view).\n4 for Exit.\n");
    printf("Enter the option: ");
    scanf("%d",&option);
    switch(option){
        case 1:
        printf("\nPush-->\n");
        push();
        break;
        case 2:
        printf("\nPop-->\n");
        pop();
        break;
        case 3:
        printf("\nStack-->\n");
        stack();
        break;
        case 4:
        printf("\nExit Successfully!\n");
        break;
        default:
        printf("\nEnter the right option!\n");
    }
    }while(option!=4);
    return 0;
}
void push(){
    int x;
    //before insertion, check stack is full or not
    if(top==SIZE-1){
        printf("\nOverflow!\n");
    }else{
        printf("Enter the value to be inserted: ");
        scanf("%d",&x);
        //increasing tovalue then insert
        top=top+1;
        //value inserted
        arr[top]=x;
    }
}
void pop(){
    //before deletion, check stack is empty or not
    if(top==-1){
        printf("\nUnderflow!\n");
    }else{
        printf("Element %d popped!\n",arr[top]);
        top=top-1;
    }
}
void stack(){
    //before showing stack, check stack is empty or not
    if(top==-1){
        printf("Stack is Empty!\n");
    }else{
        printf("Current Stack: ");
        for(int i=top; i>=0; i--){
            printf("%d ",arr[i]);
        }
    }
}
