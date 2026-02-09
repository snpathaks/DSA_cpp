//count the characters in a string------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     int count = 0;
//     for(int i=0 ; i<str.size() ; i++){
//         count++;
//     }
//     cout<<count<<endl;
// }

//Reverse a string-----------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s ;
//     cin>>s;
//     // int n =s.size();
//     // for(int i=n-1 ; i>=0 ; i--){
//     //     cout<<s[i];
//     // }

//     //twopointerapproach:
// //     int i= 0 ;
// //     int j = s.size() -1;
// //     while(i<j){
// //         swap(s[i] , s[j]);
// //         i++;
// //         j--;
// //     }
// //     for(auto it : s) cout<<it;
// }

//Palindrome string--?-----------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;cin>>s;
//     int left = 0 ; int right = s.size()-1;
//     bool isPalindrome = true;
//     while(left < right){
//         if(s[left]!= s[right]){
//             isPalindrome = false;
//             break;
//         }
//         left++;
//         right--;
//     }
//     cout<<(isPalindrome ? "true" : "false");
//     return 0 ;

// }

// Count Vowels and Consonants in a string------------------------

//LC: 242 :Valid  Anagrams----------------------------------------
// #include<bits/stdc++.h>
// using namespace std ; 
// int main() {
//     string s ; cin>>s;
//     string r ; cin>>r;
//     // sort(s.begin() ,s.end());
//     // sort(r.begin() ,r.end());
//     // if(s == r) return true;
//     // return false;


//     unordered_map<char, int> sp;
//     unordered_map<char, int> rp;
//     int n = s.size();
//     int m = r.size();
//     if(n != m)return false;
//     for(char it : s){
//         sp[it]++;
//     }
//     for(char it: r){
//         rp[it]++;
//     }
//     for(auto it: sp){
//         if(it.second != rp[it.first]) return false;
//     }
//     return true;

// }

// //Single map approach::::::::::::::::::::::::::
// #include <bits/stdc++.h>
// using namespace std;

// bool isAnagram(string s, string r) {
//     if (s.size() != r.size()) return false;

//     unordered_map<char, int> mp;

//     // Count characters from s
//     for (char c : s) {
//         mp[c]++;
//     }

//     // Subtract using r
//     for (char c : r) {
//         mp[c]--;
//         if (mp[c] < 0) return false; // extra char in r
//     }

//     return true;
// }

// int main() {
//     string s, r;
//     cin >> s >> r;

//     cout << (isAnagram(s, r) ? "true" : "false");
//     return 0;
// }


//LC  205 : isomorphic strings-------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class solution{
// public:
//   bool isisomorphic(string& s ,string& t){
//     int n1 = s.size(); int n2 =t.size();
//     unordered_map<char,char> sp;
//     unordered_map<char,char> tp;
//     for(auto i=0 ;i<n1 ; i++){
//         sp[s[i]] = t[i];
//         tp[t[i]] = s[i];
//     }
//     for(auto i=0 ; i<n1 ; i++){
//         if(sp[s[i]] != t[i] || tp[t[i]] != s[i]){
//             return false;
//         }
//     }
//     return true;
    
//   }
// };

//yesterday
//is subsequence , first unique character in a string 

// Add String-------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "23343"; 
//     int ans = 0;
//     for(int i=0 ; i<s.size() ; i++){
//         ans = ans*10 + s[i] - '0';
//     }
//     cout<<ans;
//     // cin>>s;
//     // string num1 = "456";
//     // string num2 = "37";
//     // int ans1 = 0 ;
//     // int ans2 = 0;
//     // ans1 += num1[0] -'0';
//     // ans1 = ans1*10 + num1[1] -'0';
//     // ans2 += num2[0] -'0';
//     // ans2 = ans2*100 + num2[1] -'0';
//     // int r = ans1 - ans2;
//     // cout<<r;
    
// }


//LC : 415 : Add String--------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s ; cin>>s ; 
//     string r ; cin>>r ;
//     int n1 = s.size();
//     int n2 = r.size();
//     int i = n1 - 1 ; int j = n2 -1;
//     int c = 0 ;
//     string ans;
//     while(i >= 0 || j >=0 ){
//         int a = (i>= 0)? s[i] - '0' : 0;
//         int b = (j>=0)? r[j] - '0': 0;
//         int add = a+b+c;
//         c= add/10;
//         add= add%10;
//         ans += add + '0';
//         i--;
//         j--;
//     }
//     if(c >0) ans += c + '0';
//     reverse(ans.begin() ,ans.end());
//     cout<<ans;
// }

//LC : 680 : Valid Palindrome ||-----------------------------------------

// class Solution {
// public: 
//     bool check(string s ,int i , int j){
//     while(i<=j){
//         if(s[i++] != s[j--])return false;
//     }
//     return true;
//    }
//     bool validPalindrome(string s) {
//         int n =s.size();
//         int i=0 ; int j = n-1 ;
//         while(i < j){
//            if(s[i] != s[j]){
//              return (check(s,i+1 ,j) || check(s,i,j-1));
//            }
//            i++;
//            j--;
//         }   
//         return true;
        
//     }
// };


//LC : 151 Reverse The word in a String-----------------------------
// #include<bits/stdc++.h>
// using namespace std;
// // int main(){
// //     string s ; cin>>s;
// // }
// class Solution {
// public:
   
//     string reverseWords(string s) {
//         int n = s.length();
//         vector<string> temp;
//         string word = "";
//         for(int i=0 ;i<n ;i++){
//             if(s[i] == ' '){
//                 if(word.length() > 0){
//                     temp.push_back(word);
//                     word = "";
//                 }
//             }
//             else{
//                     word += s[i];
//                 }
            
//         }
        
//         string ans; 
//         if(word.length() > 0)temp.push_back(word);
//         for(int i= temp.size()-1; i>= 0 ; i--){
//             ans += temp[i];
//             if(i>0) ans += " ";
//         }
//         return ans;
       
//     }
// };

//LC: 1903 : Largest Odd Number in a String----------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s ; cin>>s;
//     int n = s.length();
//     string result =" ";
//     int i  = n-1;
//     for(; i>= 0 ;i--){
//         if((s[i] - '0') % 2 == 1)break;
//     }
//     for(int j = 0 ; j<= i ; j++){
                  
//         result += s[j];

//     }
//     cout<<result;
        
//  }

//LC : 451 Sort Characters by Frequencies-------------------------------------------
// #include<bits/stdc++.h>
// using namespace std ;


//:::::::::::::::2D ARRAYS:::::::::::::::::::::::::::::::::::::;
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int arr[3][4] ={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//         };
//     // for(int i=0 ; i<3 ; i++){
//     //     for(int j=0 ; i<4 ; j++){
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     // }
//     int maxi = INT_MIN;
//     for(int i=0 ; i<3 ; i++){
//       for(int j=0 ; j<4 ; j++){
//          if(arr[i][j] > maxi) maxi = arr[i][j];
//        }
//     }
//     cout<<"The maximum element in an 2D array is "<<maxi<<endl;
// }
//--------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int arr[3][4] ={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}};
//     // for(int i=0 ; i<3 ; i++){
//     //     for(int j=0 ; i<4 ; j++){
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     // }
//     vector<int> res;
//     int maxi = INT_MIN;
//     for(int i=0 ; i<3 ; i++){
//       for(int j=0 ; j<4 ; j++){
//          if(arr[i][j] > maxi) maxi = arr[i][j];
         
//        }
//        res.push_back(maxi);
//     }
//     // res.push_back(maxi);
//     cout<<"The maximum element in an 2D array is "<<maxi<<endl;
//     for(int i=0 ; i<3;i++){
//         cout<<"the maxi element in each row is "<<i+1<<"is "<<res[i]<<endl;
        
//     }

    
// }


//GFG : Print Matrix in Snake Pattern---------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> snakePattern(vector<vector<int> > matrix) {
//         // code here
//        int n = matrix.size();
//        vector<int> res(n*n);
//        int k = 0 ;
//        for(int i=0; i<n ; i++){
//            if(i%2 == 0){
//                for(int j=0 ; j<n ; j++){
//                    res[k] = matrix[i][j];
//                    k++;
//                }
//            }
//            else{
//                for(int j= n-1 ; j>= 0 ;j--){
//                    res[k] = matrix[i][j];
//                    k++;
//                }
//            }
//        }
//        return res;
       
//     }
// };

// other approach::::::::::::::::::::::::;

// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> snakePattern(vector<vector<int> > matrix) {
//         // code here
//        int n = matrix.size();
//        int c = matrix[0].size();
//        int k = 0;
//        for(int i=0; i<n ; i++){
//            if(i%2 == 0){
//                for(int j=0 ; j<n ; j++){
//                    res[k] = matrix[i][j];
//                    k++;
//                }
//            }
//            else{
//                for(int j= n-1 ; j>= 0 ;j--){
//                    res[k] = matrix[i][j];
//                    k++;
//                }
//            }
//        }
//        return res;
       
//     }
// };

//GFG : Matrix Boundary Traversal------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> boundaryTraversal(vector<vector<int>>& mat) {
//         // code here
//         int r = mat.size();
//         int c = mat[0].size();
//         vector<int> t;
        
//         for(int i=0 ; i<c ;i++){
//             t.push_back(mat[0][i]);
           
//         }
//         for(int i=1 ; i<r ; i++){
//              t.push_back(mat[i][c-1]);
                
//         }
//         if(r==1)return t;
//         for(int i = c-2 ; i>=0 ; i--){
//             t.push_back(mat[r-1][i]);
//         }
//         if(c == 1) return t;
//         for(int i=r-2 ; i>0 ; i--){
//             t.push_back(mat[i][0]);
//         }
        
//     }
// };

//LC 54 :Spiral Matrix------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int r = matrix.size(); int c = matrix[0].size();
//         int top = 0;
//         int bottom = r-1;
//         int left = 0;
//         int right = c - 1; 
//         vector<int> t;
//         while(left <= right &&  top <= bottom){
//             for(int i=left ; i<=right ; i++){
//                 t.push_back(matrix[top][i]);
                
//             }
//             top++;

//             for(int i=top; i <= bottom ; i++){
//                 if(top <= bottom){
//                     t.push_back(matrix[i][right]);
                    
//                 }

//             }
//             right--;
//             if(top <= bottom){
//              for(int i= right ; i >= left; i--){
//                 if(left <= right){
//                     t.push_back(matrix[bottom][i]);
                    
//                 }
//               }
            
//               bottom--;
//             }
//             if(left <= right){
//               for(int i=bottom ; i>=top ;i--){
//                 t.push_back(matrix[i][left]);
                
//               }
//               left++;
//             }

//         }
//         return t;
       

//     }
// };


//LC 867 : Transpose Matrix-----------------------------------------------------

//hw rotate image lc 48
