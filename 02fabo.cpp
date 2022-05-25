#include<iostream>
using namespace std;

int fabonacci(int n){
    
    //base case
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    // Recursive call
    return fabonacci(n-2) + fabonacci(n-1);
}

int main(){
    int n;
    cout << "Term is ";
    cin >> n;
    int ans = fabonacci(n);
    cout << "nth term is: " << ans << endl;
    return 0;

}
