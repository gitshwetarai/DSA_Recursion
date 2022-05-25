#include<iostream>
#include<string.h>
using namespace std;

string reverse(string& str, int i, int j){
    //base case
    if(i>j){
        return str;
    }
    
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}

int main(){
    string name = "shweta";
    reverse(name, 0, name.length()-1);
    cout << name << endl;
    return 0;
}