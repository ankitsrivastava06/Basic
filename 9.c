#include <stdio.h>
#include <limits.h> 
int main() {
    int arr[5];
    printf("array elements are:");
    for (int i = 0; i<5 ; i++)
    {
      scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i]; 
    }
    }
    printf("the max of given array is %d\n",max);
    for(int i=0;i<5;i++){
    if(arr[i]<min){
        min=arr[i]; 
    }
    }
    printf("the minimum of given array is %d\n",min);
    int sum=0;
    for (int i = 0;i<5; i++)
    {
      sum=sum+arr[i];
    }
    printf("the sum of elements of array is :%d\n",sum);
    float avg;
    avg=sum/5.0;
    printf("the avg of given array is:%.2f",avg);
}