#include <iostream>
#include <string>

using namespace std;

int lenghtOfString(const string str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    const string name = "Random name";

    cout<<"lenght of string: "<<lenghtOfString(name);

    return 0;
}