#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int* first = new int[len1];
    int* second = new int[len2];

    //copy values in two arrays
    int mainArrIndex = s;

    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrIndex++];
    }

    mainArrIndex = mid+1;

    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrIndex++];
    }

    //merge2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrIndex = s;

    while(index1 < len1 && index2 < len2){

        if(first[index1] < second[index2]){
            arr[mainArrIndex++] = first[index1++];
        }
        else{
            arr[mainArrIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainArrIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void merge_sort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }
    int mid = (s + e)/2;

    //for sorting left part
    merge_sort(arr, s, mid);

    //for for sorting right part
    merge_sort(arr, mid+1, e);

    //To merge
    merge(arr, s, e);
}

int main(){
    int arr[] = {2,5,1,6,9,7,45,34,98,78,41,55,11,10,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}