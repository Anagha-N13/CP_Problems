#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;

    cin>>n;
    cin>>s;

    int moves = 0;
    
    // for(int i = 0; i< n-1; i++){
    //     if(s[i] == 'V' && s[i+1] == 'K'){
    //         moves++;
    //         // s[i+1] = 'X';
    //         s[i] = 'K';
    //         s[i+1] = 'V';
    //     }
    // }

    for(int i = 0; i < n-1; i++) {
        if(s[i] == 'V' && s[i+1] == 'K') {
            moves++;
            i++; 
        }
    }
    
    for(int i = 0; i < n-1; i++) {
        if((s[i] == 'V' && s[i+1] == 'V') || (s[i] == 'K' && s[i+1] == 'K')) {
            moves++;
            break; 
        }
    }

    cout<<moves<<endl;

    return 0;
}