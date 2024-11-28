#include <stdio.h> 
int swap_with(int *a,int *b);
int swap_without(int a,int b);

int main() {
    int a=8;
    int b=9;
    printf("the value of a and b before swapping:[%d,%d]",a,b);
    swap_with(&a,&b);
    printf("\nthe value of a and b after swapping:[%d,%d]",a,b);
    swap_without(a,b);
    printf("\nwithout using third variable ,the value of a and b after swapping:[%d,%d]",a,b);

}

int swap_with(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    

}

int swap_without(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
}