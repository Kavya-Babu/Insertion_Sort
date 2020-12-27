#include <stdio.h>

#define MAX 10
void InsertionSort(int a[], int n);

int main()
{
    int a[MAX] ={0},n, i;
    
    printf("Enter the number of elements :");
    scanf(" %d", &n);
    printf("\n");
    
    printf("Enter the numbers : ");
    for(i=0; i< n; i++){
        scanf ("%d", &a[i]);
    }
    
    InsertionSort(a, n);

    return 0;
}


void InsertionSort(int a[], int n){
    int i, j, temp;
    
    for(i=0; i<n-1 ; i++){
        temp = a[i+1];        
        for(j = i; j >= 0; j--){            
            if(temp < a[j]){                
                a[j+1] = a[j];
            }
            else{                
                break;
            }
        }
        
        a[j+1] =temp;
    }
    
    printf("\n Sorted array : \t");
    for(i=0; i< n; i++ ){
        printf("%d \t", a[i]);
    }
}