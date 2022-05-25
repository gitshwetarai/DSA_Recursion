#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
        for(int i=s; i<=e; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

bool binary_search(int arr[], int s, int e, int key){
    //if you want to print array every time
    print(arr,s,e);

    //base case, element not found
    if(s>e){
        return false;
    }

    //Processing
    int mid = s + (e-s)/2;

    //base case, element found
    if(arr[mid] == key){
        return true;
    }
        
    else if(arr[mid] < key){
        return binary_search(arr, mid+1, e, key);
    }

    else{
        return binary_search(arr, s, mid-1, key);
    }

}

int main(){
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 18;
    int s = 0, e = size-1;
    bool ans = binary_search(arr, s, e, key);
    cout << "found or not " << ans << endl;

    // if(ans){
    //     cout << "Search is successful" << endl;
    // }
    // else{
    //     cout << "Search is not successful" << endl;
    // }

    return 0;
}
