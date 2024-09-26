#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i= 0; i<n;i++){
        cin>>arr[i];
    }

    int maxInc = 1;
    int prevMax = 1;
    for(int i = 0; i<n-1;i++){
        if(arr[i] < arr[i+1]){
            maxInc++;
            prevMax = max(prevMax,maxInc);
        }
        else{
            maxInc = 1;
        }
        
    }

    cout<<prevMax<<endl;
    return 0;
}