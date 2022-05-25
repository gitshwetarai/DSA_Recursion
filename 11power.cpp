#include<iostream>
using namespace std;

int power(int a, int b){

    //base case
    if(b == 0)
        return 1;

    if(b == 1)
        return a;

    int answer = power(a, b/2);

    if(b % 2 == 0){
        return answer * answer;
    }
    else{
        return a * answer * answer;
    }

}

int main(){
    int a,b;
    cout<<"Enter the value of a and b " << endl;
    cin>>a>>b;
    int ans = power(a, b);
    cout << "Answer is " << ans << endl;
    return 0;

}