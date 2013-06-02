//
//  main.c
//  Sort
//
//  Created by Martin on 02.06.13.
//  Copyright (c) 2013 Ntrm. All rights reserved.
//

#include <stdio.h>
#include "quickSort.h"

int main()
{
    int const NumberOfInts = 100000000;
    int UnsortedArray[NumberOfInts];
    
    
    
    int l = 0;
    
    for(l = 0; l <= NumberOfInts - 1; l++)
    {
        printf(" %i", *(UnsortedArray + l));
    }
    
    printf("\n");
    
    
    quickSort(UnsortedArray, NumberOfInts);
    //heapSort(UnsortedArray, NumberOfInts);
    
    for(l = 0; l <= NumberOfInts - 1; l++)
    {
        printf(" %i", *(UnsortedArray + l));
    }
    
    printf("\n");
    
    return 0;
}

