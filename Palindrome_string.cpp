#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main() {
    string a = "121";
    string ok = a;
    
    reverse(a.begin(), a.end());
    if(ok==a)
        cout<<"Palindrome."<<endl;
    else
        cout<<"not palindrome.";
    return 0;
}
