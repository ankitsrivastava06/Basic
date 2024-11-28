#include <stdio.h> 
int main() {
    int arr[5];
    printf("array elements are:");
    for (int i = 0; i<5 ; i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--)
    {
      printf("%d",arr[i]);
    }
    for (int i = 0; i<5 ; i++)
    {
      if(i!=0){
      if(i%2!=0){
      printf("\nodd index element is:%d",arr[i]);
      }
      }
    }
    
    
}