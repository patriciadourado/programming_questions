#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

string reverses(string name, int start, int end){

    while(start < end){
        name[start] ^= name[end];
        name[end] ^= name[start];
        name[start] ^= name[end];
        ++start;
        --end;
    }
    return name;
}

int main(){
    string name = "oftamologista";

    cout<<reverses(name, 0, name.size()-1);

    return 0;
}