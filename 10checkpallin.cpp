#include<iostream>
#include<string.h>
using namespace std;

bool check_pallin(string str, int i, int j){
        //base case
    if(i>j){
        return true;
    }

    if(str[i] == str[j]){
        i++;
        j--;
        check_pallin(str, i, j);   //OR
        //return check_pallin(str, i, j);
    }
    else{
        return false;
    }
}

int main(){
    string str = "abba";
    bool ans = check_pallin(str, 0, str.length()-1);

    if(ans){
        cout << "It is a pallindrome" << endl;
    }
    else{
        cout << "It is not a pallindrome" << endl;
    }

    return 0;
}

