//
//  quicksort.c
//  
//
//  Created by Wachirawit Rimchonlakarn on 11/25/2558 BE.
//
//

// quickSort.c
#include <stdio.h>

void quickSort( int[], int, int);
int partition( int[], int, int);


int main()
{
    int a[99];
    
    int i;
    for (int j=0; j<9; j++) {
        printf("press enter your number[%d] : ",j+1);
        scanf("%d",&a[j]);
    }
    
    printf("\n\nUnsorted array is:  ");
    for(i = 0; i < 9; ++i)
        printf(" %d ", a[i]);
    
    quickSort( a, 0, 8);
    
    printf("\n\nSorted array is:  ");
    for(i = 0; i < 9; ++i)
        printf(" %d ", a[i]);
    
}



void quickSort( int a[], int l, int r)
{
    int j;
    
    if( l < r )
    {
        // divide and conquer
        j = partition( a, l, r);
        quickSort( a, l, j-1);
        quickSort( a, j+1, r);
    }
    
}



int partition( int a[], int l, int r) {
    int pivot, i, j, t;
    pivot = a[l];
    i = l; j = r+1;
    
    while( 1)
    {
        do ++i; while( a[i] <= pivot && i <= r );
        do --j; while( a[j] > pivot );
        if( i >= j ) break;
        t = a[i]; a[i] = a[j]; a[j] = t;
    }
    t = a[l]; a[l] = a[j]; a[j] = t;
    return j;
}

