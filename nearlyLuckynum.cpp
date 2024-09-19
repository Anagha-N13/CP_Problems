#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n){
    if (n == 0) return false; 
    while(n>0){
        int rem = n % 10;
        if(rem != 4 && rem != 7)
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    
    int count = 0;
    for(char c:s){
        if(c == '4' || c == '7') count++;
    }

    if (count == 0) {
        cout << "NO" << endl;
    } 
    else if (isLucky(count)) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
    return 0;
}