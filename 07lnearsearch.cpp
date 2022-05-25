#include<iostream>
using namespace std;

bool linear_search(int arr[], int size, int key){
    //base case
    if(size==0)
        return false;

    if(arr[0] == key)
            return true;
        
    else{
        bool restpart = linear_search(arr+1, size-1, key);
        return restpart;
    }

}

int main(){
    int arr[5] = {0,2,3,3,6};
    int size = 5;
    int key = 8;
    bool ans = linear_search(arr, size, key);

    if(ans){
        cout << "Search is successful" << endl;
    }
    else{
        cout << "Search is not successful" << endl;
    }

    return 0;
}
