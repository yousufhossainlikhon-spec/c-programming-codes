#include<stdio.h>
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
        for(int i=1; i<n; i++){
            if(max < arr[i]){
                max=arr[i];
            }
            if(min>arr[i]){
                min=arr[i];
            }
        }
        printf("Maximum number is = %d\n",max);
        printf("Minimum number is =%d\n",min);

    return 0;
}

