#include<stdio.h>
int main(){
    int r1, c1, r2, c2;
    printf("Enter A matrix row size and co-lam size: ");
    scanf("%d%d",&r1,&c1);
    int A[r1][c1];
    printf("Enter values:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
                printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter B matrix row size and co-lam size: ");
    scanf("%d%d",&r2,&c2);
    int B[r2][c2];
    printf("Enter values:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
                printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    if(c1!=r2){
        printf("Error: Matrix multiplication is not possible!");
        return 0;
    }

    int C[r1][c2];
    for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
        C[i][j] = 0;
        for (int k = 0; k < c1; k++) {
            C[i][j] += A[i][k] * B[k][j];
        }
    }
}

        printf("Resultant Matrix (C = A x B):\n");
    for(int i=0;i<r1;i++){
            printf("\t");
        for(int j=0;j<c1;j++){
           printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
return 0;
}
