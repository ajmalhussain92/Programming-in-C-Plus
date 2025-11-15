#include<stdio.h>
//Transpose of a Matrix

int main(){
    int arr[3][3];
    int i,j;
    printf("Enter elements of the matrix: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Element[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix: \n\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix: \n\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}