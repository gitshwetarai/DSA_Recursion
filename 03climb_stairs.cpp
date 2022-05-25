#include<iostream>
using namespace std;

int climb(int n){
    
    //base case
    if(n<0){
        return 0;
    }

    if(n==0){
        return 1;
    }

    // Recursive call
    int ans = climb(n-2) + climb(n-1);
    return ans;
}

int main(){
    int n;
    cout << "stair no. ";
    cin >> n;
    int ans = climb(n);
    cout << "no. of ways are " << ans << endl;
    return 0;

}
