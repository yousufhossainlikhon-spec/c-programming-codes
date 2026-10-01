#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Ascending order\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nDescending order\n");
        for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

