#include <stdio.h>
#include <limits.h> 
int main() {
    int arr[5];
    printf("array elements are:");
    for (int i = 0; i<5 ; i++)
    {
      scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i]; 
    }
    }
    
}