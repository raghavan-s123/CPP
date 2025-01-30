#include "External.h"
#include<bits/stdc++.h>
using namespace std;

//This function has been overloaded
int sum(int a, int b, int c){
    int sum = a + b + c;
    return sum;
}
int main(){
    int a = 6;
    int b = 9;
    input in;
    cout << in.add(a, b); //This function has gotten the class from external.h file
}
