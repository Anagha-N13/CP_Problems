#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v;
    pair<int,int> maxi = {INT_MIN,0}, mini = {INT_MAX,0};

    for(int i = 0; i< n; i++){
        int num;
        cin>>num;
        v.push_back(num);

        if(num > maxi.first) maxi = {num,i};
        if(num <= mini.first) mini = {num,i};
        
    }

    int moves = 0;

    if(v[0] == maxi.first && v[n-1] == mini.first) moves = 0;
    else{
        if(maxi.second < mini.second){
            moves += maxi.second;
            moves += n - mini.second - 1;
        }
        else{
            moves += maxi.second - 1;
            moves += n - mini.second - 1;
        }
    }

    cout<<moves<<endl;
}