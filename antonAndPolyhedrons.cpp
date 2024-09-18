#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    unordered_map<string,int>mp{
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
    
    // vector<string>shapes;
    int count = 0;

    for(int i = 0; i<n; i++){
        string s;
        cin>>s;

        count += mp[s];
    }

    
    cout<<count<<endl;

    return 0;
}