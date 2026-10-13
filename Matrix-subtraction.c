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
    if(r1!=r2 || c1!=c2){
        printf("Error: Matrix addition is not possible!");
        return 0;
    }
        int Sub[r1][c1];
        printf("\nA-B = ");
    for(int i=0;i<r1;i++){
            printf("\t");
        for(int j=0;j<c1;j++){
            Sub[i][j]=A[i][j]-B[i][j];
            printf("%-4d ", Sub[i][j]);
        }
        printf("\n");
    }
return 0;
}

