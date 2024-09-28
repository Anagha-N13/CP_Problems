// #include<bits/stdc++.h>
// using namespace std;

// bool isSubSequence(string s, string t){

//     int j = 0;
//     for(int i = 0; i< s.length();i++){
//         if(j<t.length() && s[i] == t[j])
//         j++;
//     }

//     return j == t.length();
// }


// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         string mString,sString;
//         cin>>mString>>sString;

//         int numQMarks = 0;

//         for(int i = 0; i< mString.length();i++){
//             if(mString[i] == '?') numQMarks++;
//         }

//         if(numQMarks < sString.length())
//             cout<<"NO"<<endl;
//         else
//         {
//             bool found = false;
//             int mlen = mString.length(), slen = sString.length();

//             for(int i = 0; i<=mlen-slen;i++){
//                 string temp = mString;
//                 bool possible = true;

//                 for(int j = 0; j<slen;j++){
//                     if(temp[i+j] != '?' && temp[i+j] != sString[j]){
//                         possible = false;
//                         break;
//                     }

//                     temp[i+j] = sString[j];
//                 }

//                 if(possible && isSubSequence(temp,sString)){
//                     for (int k = 0; k < mlen; k++) {
//                     if (temp[k] == '?') temp[k] = 'a';
//                 }
//                 cout << "YES" << endl;
//                 cout << temp << endl;
//                 found = true;
//                 break;
//                 }

//             }

//             if(!found)
//             cout<<"NO"<<endl;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int j = 0;  // Pointer for string t
    for (int i = 0; i < s.length(); i++) {
        if (j < t.length() && s[i] == t[j]) {
            j++;
        }
    }
    return j == t.length();  // t should be fully matched
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        string s, tString;
        cin >> s >> tString;
        
        bool found = false;
        int sLen = s.length(), tLen = tString.length();

        // Try to find a window in s that can be replaced with t
        for (int i = 0; i <= sLen - tLen; i++) {
            string temp = s;
            bool possible = true;
            
            // Try to replace the window in s with tString
            for (int j = 0; j < tLen; j++) {
                if (temp[i + j] != '?' && temp[i + j] != tString[j]) {
                    possible = false;
                    break;
                }
                temp[i + j] = tString[j];
            }
            
            if (possible && isSubsequence(temp, tString)) {
                // Replace remaining '?' with 'a'
                for (int k = 0; k < sLen; k++) {
                    if (temp[k] == '?') temp[k] = 'a';
                }
                cout << "YES" << endl;
                cout << temp << endl;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
