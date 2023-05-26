//Case Insensitive Palindrome
#include<bits/stdc++.h>
using namespace std;

int main(){
   // write your code here
   int tc;
   cin>>tc;
   while(tc--){
       string str;
       cin>>str;
        transform(str.begin(),str.end(),str.begin(),::toupper);
        string lstr=str;
        reverse(lstr.begin(),lstr.end());
        if(str==lstr){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
   }
    return 0;
}


//Check Anagrams
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string str1, str2;
        cin >> str1 >> str2;
        int l1 = str1.length();
        int l2 = str2.length();
        if (l1 != l2) {
            cout << "False" <<endl;
            continue; 
        }
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        bool CheckAnagram = true;
        for (int j = 0; j < l1; j++) {
            if (str1[j] != str2[j]) {
                CheckAnagram = false;
                break;
            }
        }
        if (CheckAnagram) {
            cout << "True" <<endl;
        } else {
            cout << "False" <<endl;
        }
    }
    return 0;
}

//Two Sum
