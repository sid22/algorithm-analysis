#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#include"functions.h"

int main(int argc , char**argv)
{
    srand(time(0));
    int size_of_array = atoi(argv[1]);
    int arr[size_of_array];
    int arr1[size_of_array];
    int arr2[size_of_array];
    int arr3[size_of_array];
    int i ;
    for( i = 0 ; i< size_of_array ; i++)
    {
        arr[i] =arr1[i]=arr2[i]=arr3[i]=rand()%100;
    }

    clock_t start = clock();
    q_sort(arr ,0 , size_of_array);
    clock_t end = clock();
    double time_qsort1 = (end - start);


    start = clock();
    bubble_sort(arr1 , size_of_array);
    end = clock();
    double time_bubble1 = (end - start);


    start = clock();
    insertion_sort(arr2 , size_of_array);
    end = clock();
    double time_insertion1 = (end - start);

    start = clock();
    selection_sort(arr3 , size_of_array);
    end = clock();
   double time_selection1 = (end - start);


    FILE* fp = fopen("output_bubble.txt" , "a");
    FILE* fp1 = fopen("output_insertion.txt" , "a");
    FILE* fp2 = fopen("output_selection.txt" , "a");
    FILE* fp3 = fopen("output_qsort.txt" , "a");
    //FILE* fp = fopen("output_bubble.txt" , "a");
    //FILE* fp = fopen("output_bubble.txt" , "a");

    fprintf(fp , "%d" , size_of_array);
    fprintf(fp , "%s" , " ");
    fprintf(fp , "%ld" , bubble_comparsion);
    fprintf(fp , "%s" , " ");
    fprintf(fp , "%s" , " ");
    fprintf(fp , "%f" , time_bubble1);
    fprintf(fp , "%s" , "\n");

    fprintf(fp1 , "%d" , size_of_array);
    fprintf(fp1 , "%s" , " ");
    fprintf(fp1 , "%lld" , insertion_comparsion);
    fprintf(fp1 , "%s" , " ");
    fprintf(fp1 , "%s" , " ");
    fprintf(fp1 , "%f" , time_insertion1);
    fprintf(fp1 , "%s" , "\n");

    fprintf(fp2 , "%d" , size_of_array);
    fprintf(fp2 , "%s" , " ");
    fprintf(fp2 , "%lld" , selection_comparsion);
    fprintf(fp2 , "%s" , " ");
    fprintf(fp2 , "%s" , " ");
    fprintf(fp2 , "%f" , time_insertion1);
    fprintf(fp2 , "%s" , "\n");

    fprintf(fp3 , "%d" , size_of_array);
    fprintf(fp3, "%s" , " ");
    fprintf(fp3 , "%ld" , qsort_comparsion);
    fprintf(fp3 , "%s" , " ");
    fprintf(fp3 , "%s" , " ");
    fprintf(fp3 , "%f" , time_qsort1);
    fprintf(fp3 , "%s" , "\n");


    //fprintf(fp , "%d" , "%s" ,  "%d"   , size_of_array , " " , bubble_comparsion );


}
