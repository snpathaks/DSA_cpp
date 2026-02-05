// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n ; 
//     int arr[n];
//     for(int i =0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     for(int i =0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // vector<int> v(4);
//     // for(int i = 0 ; i<4 ; i++){
//     //     v.push_back(i);
        
//     // }
//     // for(int i =0 ; i<4;i++){
//     //     cout<<v[i]<<" ";
        
//     // }
// }



//Insertion At Start---------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n; 
//     cin>>n ; 
//     int arr[n];
//     for(int i =0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     for(int i = n+1 ; i>0 ;i--){
//         arr[i-1] = arr[i-2];
//     }
//     int newelement = arr[0];
//     arr[0] = 0;
//     for(int i =0 ; i<n+1 ; i++){
//         cout<<arr[i]<<" ";
//     }

// }
//Deletion At Start-----------------------------------------------
// #include<bits/stdc++.h>
// using namespace std ; 
// int main (){
//     int n ; 
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i<n ;i++){
//         cin>>arr[i];
//     }
//     for(int  i =0 ; i<n-1 ; i++){
//         arr[i] = arr[i+1];
//     }
//     for(int i =0 ; i<n-1 ; i++){
//         cout<<arr[i]<<" ";
//     }

// }

//Find an element/Searching an element ------------------------------

// #include<bits/stdc++.h>
// using namespace std ; 
// int main (){
//     int n ; 
//     cin>>n;
//     int target;
//     cin>>target;
//     vector<int>arr(n);
    
//     for(int i = 0 ; i<n ;i++){
//         cin>>arr[i];
//     }
   
//     if(find(arr.begin() , arr.end() ,target) != arr.end()){
//         cout<<"Element found"<<endl;
//     }else{
//         cout<<"Element not found"<<endl;
//     }
// }

// } 

// HW
// Insert at  given position , rotate array by one , rotate array by k 
//Insert at given position-----------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int pos , newelement;
//     cin>>pos>>newelement;
//     for(int i = n ; i >= pos ; i--){
//         arr[i] = arr[i -1];

//     }
//     arr[pos] = newelement ;
//     for(int i = 0 ; i<n+1 ; i++){
//         cout<<arr[i]<<" ";
//     }

// } 

//Rotate array by one------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int last = arr[n-1];
//     for(int i = n-1 ; i>0 ; i--){
//         arr[i] = arr[i-1];

//     }
//     arr[0] = last;
//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";


//     }
    

// }

//Rotate array by k-------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     k = k%n;

//     reverse(arr , arr + n);
//     reverse(arr , arr + k);
//     reverse(arr + k , arr + n);
//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
// }


//LC: 485. Max Consecutive Ones-----------------------------
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int n ; cin>>n ; int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int count = 0 ; int maxcnt= 0 ; 
//     for(int i = 0 ; i <n; i++){
//         if(arr[i] == 1){
//             count++;
//             maxcnt = max(maxcnt , count);
//         }else{
//             count = 0 ;
//         }
//     }
//     cout<<maxcnt<<endl;

// }

//LC :1089. Duplicate Zeros----------------------------------
// #include<bits/stdc++.h>
// using namespace std ;
// int main (){
//    int n ; cin>>n; int arr[n];
//    for(int i = 0 ; i<n ; i++){
//       cin>>arr[i];
//    }
//    vector<int> ans;
//    for(int i = 0; i<n ; i++){
//        if(arr[i] == 0){
//           ans.push_back(0);
//           ans.push_back(0);

//        }else{
//           ans.push_back(arr[i]);
          
//        }
//    }
//    for(int i=0 ; i<n ; i++){
//         arr[i] = ans[i];
//         cout<<arr[i]<<" ";
//    }

// }

//GFG: Remove Duplicates From an Array------------------------
// #include<bits/stdc++.h> 
// using namespace std; 
// int main(){
//     int n ; cin>>n ; int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     sort(arr , arr + n);
//     int r = 1 ;
//     for(int i=1 ; i<n ; i++){
//         if(arr[i] != arr[i-1]){
//             arr[r] = arr[i];
//             r++;
//         }
//     }
//     arr.resize(r);
//     for(int i=0; i<n ; i++){
//      cout<<arr[i]<<" ";
//    }
    
// }             

//optimized approach;;
// class Solution {
//   public:
//     vector<int> remDuplicate(vector<int>& arr) {
//         // code here
//         int n = arr.size();
//         sort(arr.begin(), arr.end());
//         vector<int>result;
//         result.push_back(arr[0]);
//         for(int i=1 ; i<n ; i++){
//             if(arr[i] != arr[i-1]){
//                 result.push_back(arr[i]);
//             }
//         }
//         return result;
       
//     }
// };

//(max , ecmax , issorted , removeduplicate)

//Find max element in an array---------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ; cin>>n; int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int maxel = INT_MIN;
//     for(int i=0; i<n ; i++){
//         if(arr[i] < maxel){
//             arr[i] = maxel;
//         }else{
//             maxel = arr[i];
//         }
//     }
//     cout<<maxel;
// }


//LC : 189rotated array--------------------------------------------
// #include<bits/stdc++.h>
// using namespace std ; 
// int main (){
//     int n ; 
//     cin>>n ; 
//     int arr[n];
//     for(int i =0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int k ; 
//     cin>>k;
//     k = k%n;
//     vector<int> temp; 
//     for(int i = n- k ; i< n ; i++){
//         temp.push_back(arr[i]);
//     }
//     for(int i= 0 ; i<n-k ; i++){
//         temp.push_back(arr[i]);
//     }
//     for(int i = 0 ;i<n ; i++){
//         arr[i] = temp[i];
//     }
//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }

// }

//LC: 283 Move Zeroes-----------?------------------------------------
// #include<bits/stdc++.h>
// using namespace std; 
// int main(){
//     int n; cin>>n ; 
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     vector<int> temp;
//     int count = 0;
//     for(int i = 0 ; i<n ; i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }else{
//             count++;
//         }
//     }
//     for(int i=0 ; i<temp.size() ; i++){
//         arr[i] = temp[i];
//     }
//     for(int i = temp.size() ; i <n ; i++){
//         arr[i] = 0 ; 
//     }
//     for(int i=0; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
    
// }  
//Two-Pointer Approach========
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n; cin>>n ; 
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int index = 0 ;
//     int current = 0;
//     while(current< n){
//         if(arr[current] != 0){
//           swap(arr[current] , arr[index]);
//         }
//         current++;
//     }
//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Reverse Array----------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1 ; i>=0 ; i--){
//         cout<<arr[i]<<" ";
//     }
// }
//Two=pointer approach==================================
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int start = 0 ; 
//     int end = n-1;
//     while(start < end){
//         swap(arr[start] , arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

//Palindrome Check---------------------------------?----------
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;cin>>n;
//     int arr[n];
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1 ; i>=0 ; i--){
//         temp.push_back(arr[i]);
//     }
//     void isPalindrome(){
//      for(int i=0; i<n ;i++){
//         if(arr[i] == temp[i]){
//             return true;
//         }else{
//             return false;
//         }
//      }
//     }
//    if(isPalindrome()){
//     cout<<"Given Array is Palindrome";
//    }else{
//     cout<<"Given Array is not Palindrome";
//    }
// }
//two-pointer appraoch========================?
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;cin>>n;
//     int arr[n];
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1 ; i>=0 ; i--){
//         temp.push_back(arr[i]);
//     }
//     int start = 0 ; 
//     int end = n - 1;
//     while(start <= end){
//         if(arr[start++] != arr[end--]){
//             return false;
//         }else{
//             return true;
//         }
//     }
// }

//LC: 75 (Sort Colors)-----------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int arr[n];
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int count_0 = 0 ;
//     int count_1=0;
//     int count_2=0;
//     for(int i=0 ; i<n ; i++){
//         if(arr[i] == 0)count_0++;
//         else if(arr[i] == 1)count_1++;
//         else if(arr[i] == 2)count_2++;
//     }
//     for(int i=0 ; i<count_0 ; i++){
//         arr[i] = 0;
//     }
//     for(int i=count_0 ; i<count_0 + count_1; i++){
//         arr[i] = 1;
//     }
//     for(int i= count_0 + count_1; i<count_0 + count_1 + count_2 ; i++){
//         arr[i] = 2;
//     }
//     for(int i=0; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }

// }

//two-pointer approach(Dutch National Flag(DNS))==============
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int start =0 ; int current = 0; int end = nums.size() -1 ;
//         while(current <= end){
//             if(nums[current] == 0){
//                 swap(nums[current], nums[start]);
//                 start++;
//                 current++;

//             }
//             else if(nums[current] == 2){
//                 swap(nums[end], nums[current]);
//                 end--;
//             }
//             else{
//                 current++;
//             }
           
//         }
        
//     }
// };


//Two Sum - Pair with Given Sum--------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int arr[n];
//     vector<int> temp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }


//LC : 1(Two Sum)----------------------------------------------
//HW : Pair sum in sorted and rotated array , closest pair sum , closest pair sum from 2 sorted arrays , dominant pairs 
// //Pair sum in sorted and rotated arrays-------------
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i =0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int target; cin>>target;
//     int pivot = -1;
//     for(int i=0 ;i<n-1 ; i++){
//         if(arr[i] > arr[i+1]){
//             pivot = i;
//             break;
//         }
//     }
//     int left = pivot +1 ; 
//     int right  = pivot;
//     while(left!=right){
//         if(arr[left] + arr[right] == target){
//             cout<<left <<" "<<right<<endl;
//             break;
//         }else if(arr[left] + arr[right] < target){
//             left = (left+1)%n;

//         }else {
//             right = (right -1 + n)%n;

//         }

//     }
    

// }

//Merge Two Sorted Arrayys-------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ; cin>>n ; 
//     int m ; cin>>m;
//     int arr1[n];
//     int arr2[m];
//     for(int i =0 ; i<n ; i++){
//         cin>>arr1[i];
//     }
//     for(int i =0 ; i<m ; i++){
//         cin>>arr2[i];
//     }
//     vector<int>result;
//     for(int i=0 ; i<n;i++){
//         result.push_back(arr1[i]);
//     }
//     for(int i=0 ; i<m ; i++){
//         result.push_back(arr2[i]);
//     }
    
//     // sort(result.begin() , result.end());
//     //result.erase(unique(result.begin() , result.end()) , result.end());
    
//     //sort using for loop
//     for(int i=0 ; i<result.size() ; i++){
//         for(int j = i+1 ; j<result.size() ; j++){
//             if(result[i] >result[j]){
//                 swap(result[i] , result[j]);

//             }
//             if(result[i] == result[j]){
                
            
//                 result.erase(result.begin()+j);
//                 j--;


//             }
//         }
//     }
    
//     for(int i=0  ;i<result.size() ; i++){
//         cout<<result[i]<<" ";

//     }
// }

//Merge k sorted arrays-------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ; cin>>n;
//     vector<vector<int>> arr(n);
//     for(int i=0 ; i<n ; i++){
//         int m ; cin>>m;
//         //resize using for loop
//         for(int j=0 ; j<m ; j++){
//             int x ; cin>>x;
//             arr[i].push_back(x);
//         }

//     }
//     vector<int> result;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<arr[i].size() ; j++){
//             result.push_back(arr[i][j]);
//         }

//     }
//     sort(result.begin() , result.end());
//     //sort using for loop
//     for(int i=0 ; i<result.size() ; i++){
//         for(int j = i+1 ; j<result.size() ; j++){
//             if(result[i] >result[j]){
//                 swap(result[i] , result[j]);
//             }

//         }

//     }
//     for(int i=0 ;i<result.size() ; i++){
//         cout<<result[i]<<"";
//     }
    

// }

//GFG :BINARY SEARCH--------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ;cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int target; cin>>target;
//     int low = 0 ; int high = n-1;
    

//     while(low <= high){
//         int mid = low + (high-low)/2;
//         if(arr[mid] > target){
//             high = mid - 1;

//         }else if(arr[mid] < target){
//             low = mid +1;

//         }else{
//             return mid ;

//         }


//     }
//     return -1;
// }

//LC: 34 : Find first and last position of element in sorted array---------------
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int n =nums.size();
//         int low = 0 ; int high = n-1 ; 
        
//         int first = -1;
//         int last = -1;
//         while(low <= high){
//             int mid = low + (high - low)/2;
//             if(nums[mid] == target){
//                 first = mid;
//                 high = mid - 1;
//             }else if(nums[mid] < target){
//                 low = mid +1 ;
//             }else{
                
//                 high = mid -1 ;
//             }
                
//         }
//         low = 0 ;  high = n-1 
//         while(low <= high){
//             int mid = low + (high - low)/2;
//             if(nums[mid] == target){
//                 last = mid;
//                 low = mid + 1;
//             }else if(nums[mid] < target){
//                 low = mid +1 ;
//             }else{
                
//                 high = mid - 1 ;
//             }
                
//         }
//         return {first, last};
        


//     }
// };


//Implement Upper Bound----------------------------------
// class Solution {
//   public:
//     int upperBound(vector<int>& arr, int target) {
//         int n = arr.size();
//         // code here
//         int low = 0 ; int high = n-1;
//         int ans = high+1;
        
//         while(low <= high){
//             int mid = low + (high - low)/2;
//             if(arr[mid] > target){
//                 ans = mid;
//                 high = mid-1;
//             }else{
//                 low = mid+1; 
                
//             }
            
//         }
//         return ans;
//     }
// };

//Implement Lower Bound--------------------------------------
// class Solution {
//   public:
//     int lowerBound(vector<int>& arr, int target) {
//         // code here
//         int n = arr.size();
        
//         int low = 0 ; int high = n-1;
//         int ans = n;
//         while(low <= high){
//             int mid = low + (high - low)/2;
//             if(arr[mid] >= target){
//                 ans = mid;
//                 high = mid-1;
//             }else{
                
//                 low = mid+1;
                
//             }
            
//         }
//         return ans;
//     }
// };




//LC : 33 Search in Rotated Sorted Array--------------------------------
// #include<bits/stdc++.h>
// using namespace std; 
// int main (){
//      int n; cin>>n ;
//      int arr[n];
//      for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//      }
//      int low = 0 ; int high = n-1;
//      int target ; cin>>target;
//      while(low <= high){
//         int mid = low + (high - low)/2;
//         if(arr[mid] == target){
//             cout<<mid;
//             break;
//         }
//         if(arr[low] <= arr[mid]){
//             if(target >= arr[low] && target <arr[mid]){
//                 high = mid -1;
//             }else{
//                 low = mid +1;
//             }
//         }
//         else{
//             if(target > arr[mid] && target <= arr[high]){
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
//         }

//      }
//      return -1;
// }

//LC 81: Search in Rotated Sorted Array || ---------------------------
// #include<bits/stdc++.h>
// using namespace std; 
// int main (){
//      int n; cin>>n ;
//      int arr[n];
//      for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//      }
//      int low = 0 ; int high = n-1;
//      int target ; cin>>target;
//      while( low <= high){
//         int mid = low + (high - low)/2;
//         if(arr[mid] == target){
//             cout<<true;
//             break;
//         }
//         if(arr[low] <= arr[mid]){
//             if(target >= arr[low] && target < arr[mid]){
//                 high = mid -1;
//             }
//             else{
//                 low = mid + 1;
//             }
//         }
//         else{
//             if(target >arr[mid] && target <= arr[high]){
//                 low = mid +1;
//             }
//             else{
//                 high = mid -1;
//             }

//         }
//         return false;
//      }


//  }

// LC 162 :Peak  Element in an Array------------ ??-----------------------------
// #include<bits/stdc++.h>
// using namespace std; 
// int main (){
//      int n; cin>>n ;
//      int arr[n];
//      for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//      }
//      int low = 0 ; int high = n-1;
//      while(low <= high){
//         int mid = low + (high - low)/2;
//         if(( mid == 0 || arr[mid] >= arr[mid -1]) && (mid == n -1 || arr[mid] >= arr[mid-1])){
//              cout<<mid;
//         }
//         else if(mid > 0 && arr[mid -1] > arr[mid]){
//             high = mid -1;
//         }
//         else {
//             low = mid+1;
//         }
        
//      }
//      return -1;
// }


//LC _875 :kOKO eaiting banana------------
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     bool caneat(vector<int> & piles , int cap , int h ) {
//         long long hours =0;
//         for(int i=0 ; i< piles.size() ; i++){
//             hours += piles[i]/cap;
//             if(piles[i]%cap > 0 ) hours++;
//         }
//         return hours <= h;
        
//     }
//     int minEatingSpeed(vector<int> & piles , int h){

//         //Linear Search
//         // int maxi = *max_element(piles.begin() , piles.end());
//         // for(int i = 1 ; i<maxi ; i++){
//         //     if(caneat(piles , i , h))return i ;
//         // }


//         //Binary SeAarch:::::::::::
//         int high = *max_element(piles.begin(), piles.end());
//         int low = 1 ;
//         int ans = -1;
//         while(low <=high){
//             int mid = low + (high - low)/2;
//             if(caneat(piles, mid , h)) {
//                ans = mid ; 
//                high = mid -1 ;
//             }else{
//                 low= mid + 1;
//             }
//         }
//         return -1;
//     }


// };

//GFG : Aggressive Cows--------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     int canplace(vector<int> &stalls ,int k , int d){
//         int prev = stalls[0];
//         int count = 1;
//         for(int i=1 ; i<stalls.size(); i++){
//             int curr = stalls[i];
//             if(abs(curr - prev) >= d){
//                count++;
//                prev = curr;
//             }
//         }
//         return count >= k;
//     }
//     int aggressiveCows(vector<int> &stalls, int k) {
//         // code here
//         int n = stalls.size();
//         sort(stalls.begin() , stalls.end());
//         int high = stalls[n-1] - stalls[0];
//         int low = 1;
//         int ans = 0;
//         // for(int i= high ; i>=1 ; i--){
//         //   if(canplace(stalls , k , i)) return i;
//         // }
//         while(low <= high){
//             int mid = low + (high - low)/2;
//             if(canplace(stalls ,k, mid)){
//                 ans = mid ;
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
            
            
//         }
//         return ans;
//     }
// };

///HW :  
//Ship pakages , book allocation , magnetic  force between two balls , guess numbe rof higher and lower , first bad version , Sqrt(x).





    
    


















