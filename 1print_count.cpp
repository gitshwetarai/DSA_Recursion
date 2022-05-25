#include <iostream>
using namespace std;

void count(int n){

    //base case
    if(n==0){
        return;
    }

    //Recursive call
    // count(n-1);
    cout << n << endl;
    count(n-1);  // for reverse printing

  
}

int main() {
    int n;
    cout << endl;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << endl;
    count(n);
    return 0;
}