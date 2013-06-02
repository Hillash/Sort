#include <stdio.h>
#include "quickSort.h"


void quickSort(int * ArrayToSort, int NumberOfInts)
{
    internalQuickSort(ArrayToSort, 0, NumberOfInts - 1);
}

void internalQuickSort(int * ArrayToSort, int First, int Last)
{
    int i = First;
    int j = Last;
    
    int MiddelOfArray = (First + Last)/2;
    
    int PivotElement = *(ArrayToSort + MiddelOfArray);
    
    
    while(i <= j)
    {
        while(*(ArrayToSort + i) < PivotElement)
        {
            i++;
        }
        
        while(*(ArrayToSort + j) > PivotElement)
        {
            j--;
        }
        
        if(i <= j)
        {
            exchangeInts((ArrayToSort + i), (ArrayToSort + j));
            
            /* debug
            
            int l = 0;

            for(l = 0; l <= Last; l++)
            {
                printf(" %i", *(ArrayToSort + l));
            }
            
            printf("\n");
            */
            
            i++;
            j--;
        }
    }
    
    
    if(First < j)
    {
        internalQuickSort(ArrayToSort, First, j);
    }
    
    if(i < Last)
    {
        internalQuickSort(ArrayToSort, i, Last);
    }

}




void heapSort(int * ArrayToSort, int NumberOfInts)
{
    int l, r;
    
    
    // building up the heap
    
    for(l = (NumberOfInts - 2) / 2; l >= 0; l--)
    {
        sift(ArrayToSort, l, NumberOfInts - 1);
    }
    
    
    //
    
    for(r = NumberOfInts - 1; r > 0; r--)
    {
        exchangeInts((ArrayToSort + 0), (ArrayToSort + r));
        
        sift(ArrayToSort, 0, r - 1);
    }
    
}

void sift(int * UnsiftedArray, int OldestParent, int Leave)
{
    int i = OldestParent;
    int j = (2 * i) + 1;                    //YoungestBrother
    int x = *(UnsiftedArray + OldestParent);
    
    
    //
    
    if(j < Leave && *(UnsiftedArray + j + 1) < *(UnsiftedArray + j))
    {
        j++;
    }
    //
    
    while( j <= Leave && *(UnsiftedArray + j) < x)
    {
        *(UnsiftedArray + i) = *(UnsiftedArray + j);
        i = j;
        j = (2 * i) + 1;
        
        if(j < Leave && *(UnsiftedArray + j + 1) < *(UnsiftedArray + j))
        {
            j++;
        }
    }
    
    *(UnsiftedArray + i) = x;
}




void exchangeInts(int * FirstPointer, int * SecondPointer)
{
    int tmp;
    
    tmp = * FirstPointer;
    * FirstPointer = * SecondPointer;
    * SecondPointer = tmp;
    
}