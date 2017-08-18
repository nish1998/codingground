#include <stdio.h>
void swap(int* a, int* b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

int partition(int* A, int x, int p, int q)
{
 x=A[p];
 int k=p, j;
 for(j=p+1; j<=q; j++){
     int key=A[j];
     if(key<x){
         k=k+1;
         swap(&A[k], &A[j]);
     }
     }
     swap(&A[p],&A[k]);
     
     return (k);
 }

int main()
{
    int n,i;
    printf("Enter the no. of elements in array: ");
    scanf("%d", &n);
    int A[n-1];
    for(i=0;i<n;i++){
        scanf("%d", &A[i]);
    }
    printf("%d", partition(A,A[0],0,n-1) );
    
    printf("your array of no.s is: ");
    for(i=0;i<n;i++){
        printf("%d",A[i]);
        printf(", ");
    }
    
    

    return 0;
}

