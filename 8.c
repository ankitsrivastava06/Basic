#include <stdio.h>
#include <limits.h> 
int main() {
    int arr[5];
    printf("array elements are:");
    for (int i = 0; i<5 ; i++)
    {
      scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i = 0;i<5; i++)
    {
      sum=sum+arr[i];
    }
    printf("the sum of elements of array is :%d",sum);
    
}