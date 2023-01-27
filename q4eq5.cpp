#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;
 
string ConcatRemove(string s, string t, int k) {
    
    int count = 0, end = 0;

    /* Validation */
    
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    
    for(int i = 0; i < t.size(); i++){
        t[i] = tolower(t[i]);
    }

    if((s.size() >= 1 && s.size() <= 100) && (t.size() >=1 && t.size() <= 100) && (k >= 1 && k <= 100)){

        if(abs(s.size() - t.size()) > k){
            return "no";
        }
        if(k >= s.size() + t.size() - 2){
            return "yes";
        }

        for(int i = 0; i < s.size(); i++){
            if(i >= t.size()){
                break;
            }
            if(s[i] == t[i]){
                count++;
            }
            else{
                end++;
            }
        }
        
        if(end > k || k < 2 * end){
            return "no";
        }
        else{
            return "yes";
        }
    }

    return "no";
    
}

int main()
{

    /* TESTS FOR ConcatRemove() FUNCTION */

    assert(ConcatRemove("abcdefabc", "abcde", 10) == "yes") ; 

    assert(ConcatRemove("cbanana", "banana", 6) == "no") ;

    assert(ConcatRemove("abcde", "fghij", 10) == "yes");

    cout<<"Code passed on tests!";

    return 0;
}