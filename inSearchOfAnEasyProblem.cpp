#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int counter = 0;
    for(int i = 0; i< n; i++){
        int num;
        cin>>num;
        if(num == 1)
            counter = 1;
    }

    if(counter)
    cout<<"HARD"<<endl;
    else
    cout<<"EASY"<<endl;
}