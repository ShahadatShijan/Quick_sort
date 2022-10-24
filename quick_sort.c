#include<stdio.h>
int partition(int A[],int low,int high)
{
    int pivot,i,j,t;
    pivot = A[high];
    i=low-1;
    for(j=low; j<high; j++){
        if(A[j]<=pivot){
            i += 1;
            t=A[j];
            A[j]=A[i];
            A[i]=t;
        }
    }
    t=A[high];
    A[high]=A[i+1];
    A[i+1]=t;
    return (i+1);

}

void quick_sort(int A[],int low,int high)
{
    if(low < high){
        int p;
        p = partition(A,low,high);
        quick_sort(A,low,p-1);
        quick_sort(A,p+1,high);
    }

}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main()
{
    int n;
    int data[] = {3,2,1,5,4,9,6,8,7};
    n = sizeof(data) / sizeof(data[0]);
    quick_sort(data,0,n-1);

    printArray(data, n);

    return 0;
}

