#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> mystrings;
    int n = 40000000; // The number of accesses
    for(int i = 0; i < n; i++) {
        mystrings.insert(mystrings.end(),"Hello");
    }
    string value;
    for(int i = 0; i < n; i++) {
        vector<string>::iterator middle = mystrings.begin();
        advance(middle,n/2);
        value = *middle;
    } 
}
