#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> mystrings;
    int n = 40000; // The number of inserts
    for(int i = 0; i < n; i++) {
        mystrings.insert(mystrings.end(),"Hello");
    }
    
}
