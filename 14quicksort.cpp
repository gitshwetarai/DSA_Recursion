#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s];
    int count = 0;

    //count elements less than pivot element
    for(int i= s+1; i<=e; i++)
    {
        if(arr[i] <= pivot){
            count++;
        }
    }
    
    //place pivot element at right position
    int pivotIndex = s + count;

    swap(arr[pivotIndex], arr[s]);

    //Now comple one part, work on left and right part of pivot
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;

}

void quick_sort(int arr[], int s, int e){
    //base case
    if(s>=e)
        return;
    
    //partition
    int p = partition(arr, s, e);

    //recursive call
    //for left part
    quick_sort(arr, s, p-1);

    //for right part
    quick_sort(arr, p+1, e);


}

int main(){
    int arr[] = {2,5,1,6,9,7,45,34,98,78,41,55,11,10,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}