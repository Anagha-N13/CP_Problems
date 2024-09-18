#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int avg = 0;
    int n;
    for(int i=0;i<3;i++){
        cin>>n;
        arr.push_back(n);
        // avg += arr[i];
    }

    sort(arr.begin(),arr.end());

    // avg = avg/3;

    int no_of_steps = 0;

    while(arr[0] != arr[1]){
        no_of_steps++;
        arr[0]++;
    }

    while(arr[2] != arr[1]){
        no_of_steps++;
        arr[2]--;
    }

    cout<<no_of_steps<<endl;

    return 0;
}

//chatgpt solution which is much more simple and efficient
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr(3);
    
//     // Input the three positions
//     for(int i = 0; i < 3; i++) {
//         cin >> arr[i];
//     }
    
//     // Sort the positions to find the median
//     sort(arr.begin(), arr.end());
    
//     // The minimum total distance is the sum of the distances to the median
//     int total_distance = (arr[2] - arr[1]) + (arr[1] - arr[0]);
    
//     // Output the result
//     cout << total_distance << endl;

//     return 0;
// }
