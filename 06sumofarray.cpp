#include <iostream>
using namespace std;

int sumofarray(int* arr, int size){

    //base case
    if(size==0)
        return 0;

    if(size==1)
        return arr[0];

        // int restpart = arr[0] + sumofarray(arr+1, size-1);
        // return restpart;
        return (arr[0] + sumofarray(arr+1, size-1));

}

int main(){

    int arr[5] = {0,2,3,3,6};
    int size = 5;
    int ans = sumofarray(arr, size);

    cout << "sum of array is " << ans << endl;

    return 0;

}
