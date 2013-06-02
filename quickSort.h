//
//  sort.h
//  Terminplaner
//
//  Created by Martin on 01.06.13.
//  Copyright (c) 2013 orTel. All rights reserved.
//

#ifndef Terminplaner_sort_h
#define Terminplaner_sort_h

void quickSort(int * ArrayToSort, int NumberOfInts);

void internalQuickSort(int * ArrayToSort, int First, int Last);




void heapSort(int * ArrayToSort, int NumberOfInts);

void sift(int * UnsiftedArray, int OldestParent, int Leave);





void exchangeInts(int * FirstPointer, int * SecondPointer);



#endif
