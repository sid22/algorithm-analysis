#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>


unsigned long int bubble_comparsion = 0;
unsigned long long  int insertion_comparsion = 0;
unsigned long long int selection_comparsion = 0;
unsigned long long int qsort_comparsion = 0;




 int part(int*A,  int p,  int r)
{
    int x = A[r];
     int j,i = p - 1;
    for (j=p; j<r; j++)
    {
        qsort_comparsion++;
        if (A[j]<=x)
        {

            i = i + 1;
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
     int temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;

    return i+1;
}

void q_sort( int*A,  int p,  int r)
{
    if (p<r)
    {
         int q = part(A, p, r);
        q_sort(A, p, q-1);
        q_sort(A, q+1, r);
    }
}
void insertion_sort(int*array , int length)
{
    int i ;
    for(i = 1 ; i<length ; i++)
    {
        double temp = array[i];
        int j = i-1;
        while((temp < array[j]) && j>=0)
        {
            insertion_comparsion++;

            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = temp;
    }
}
void bubble_sort(int*array , int length)
{
    int i ;
    for(i = 0 ; i < length ; i++)
    {
        int j ;
        for( j = length-1 ; j> i ; j--)
        {
            bubble_comparsion++;
            if(array[j] < array[j-1])
            {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
}
void selection_sort(int*array , int length)
{

    int i;
    for(i = 0 ; i < length ; i++)
    {
        int j;
        int smallest_index= i;
        double smallest = array[i];
        for(j = i ; j < length ; j++)
        {
            selection_comparsion++;

            if(array[j] < smallest){
                smallest = array[j];
                smallest_index = j;
                }
        }

        double temp = array[smallest_index];
        array[smallest_index] = array[i];
        array[i] = temp;

    }
}


#endif // FUNCTIONS_H_INCLUDED
