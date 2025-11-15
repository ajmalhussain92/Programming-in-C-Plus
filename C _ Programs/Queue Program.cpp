#include<stdio.h>
#define SIZE 4
//Queue Program_Enqueue,Dequeue Operation
int arr[SIZE],front=-1,rear=-1;
void EnQueue();
void DeQueue();
void Queue();
//Easy C_Code by: Ajmal Hussain
int main(){
    int option;
    do{
    printf("\n1 for EnQueue.\n2 for DeQueue.\n3 for Queue(Show).\n4 for Exit.\n");
    printf("Enter option: ");
    scanf("%d",&option);
    switch(option){
        case 1:
        printf("\nEnQueue-->\n");
        EnQueue();
        break;
        case 2:
        printf("\nDeQueue-->\n");
        DeQueue();
        break;
        case 3:
        printf("\nQueue(Show)-->\n");
        Queue();
        break;
        case 4:
        printf("\nExit successfully!\n");
        break;
        default:
        printf("\nWrong option entered!\n");
    }
    }while(option!=4);
    return 0;
}
void EnQueue(){
    int x;
    if(rear==SIZE-1){
        printf("Queue is Full!");
    }else{
        if(front==-1){
            front=0;
        }
        printf("Enter element: ");
        scanf("%d",&x);
        printf("Element %d enqueued!",x);
        rear++;
        arr[rear]=x;
    }
}
void DeQueue(){
    if(front==-1){
        printf("Queue is Empty!");
    }else{
        printf("Element %d deueued!",arr[front]);
        front++;                
        if(front>rear){
            front=rear=-1;     //For last element front & rear are set to 1
        }
    }
}
void Queue(){
    if(front==-1){
        printf("Queue is Empty!");
    }else{
        printf("Current Queue: ");
        for(int i=rear; i>=front; i--){
            printf("%d ",arr[i]);
        }
    }
}

