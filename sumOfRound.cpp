#include<bits/stdc++.h>
using namespace std;


// void countSum(int *count, vector<int>&v ){
//     string s;
//     cin>>s;

//     if(s.length() == 1)
//     {
//         *count = 1;
//         v.push_back(stoi(s));
//         return;
//     }


// }


int main()
{

    int n;
    cin>>n;

    while(n--){
        
        int num;
        cin>>num;
        vector<int>v;
        int factor = 1;//this represents the position of the digit. it is 1 because we are starting from the units place
        
        while(num > 0){
            int dig = num % 10;
            if(dig != 0)
            v.push_back(dig * factor);

            num /= 10;
            factor *= 10;
        }

        cout<<v.size()<<endl;

        for(int i =0; i<v.size(); i++)
        cout<<v[i]<<" ";

        cout<<endl;
        
    }
    return 0;
}


