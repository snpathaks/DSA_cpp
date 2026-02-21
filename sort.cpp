//BUBBLE SORT ---------------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n ; cin>>n ;
//     int arr[n];
//     for(int i =0 ; i< n ; i++){
//         cin>>arr[i];
//     }
//     for(int i =0 ; i<n ; i++){
//         for(int j = 0 ; j <n-i-1 ; j++){
//             if(arr[j]> arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//             }
//         }
//     }
//     for(int i =0 ; i<n ;i++){
//         cout<< arr[i]<<" ";
//     }
// }

//SELECTION SORT-------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std ;
// int main(){
//     int n ; cin>>n; 
//     int arr[n];
//     for(int i=0 ; i<n ;i++){
//         cin>>arr[i];
//     }
//     for(int i=0 ; i<n-1 ; i++){
//         int minidx = i;
//         for(int j =i+1 ; j<n ; j++){
//             if(arr[j] < arr[minidx]){
//                 minidx = j;
//             }
//         }
//         swap(arr[i], arr[minidx]);

//     }
//     for(int i=0; i<n ;i++){
//         cout<<arr[i]<<" ";
//     }

// }

//INSERTION SORT------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     for(int i=1 ; i<n ;i++){
//         int key = arr[i];
//         int j = i-1;
//         while( j >= 0 )

//     }
// }

//lc: 209 , 53 , gfg : max subarrays of size = k;

//LC : 930 : Binary Subarray sum ----------------------------------
// #include<bits/stdc++.h>
// using namespace std ; 
// int main (){
//     int n ; cin>>n ; 
//     int arr[n];
//     for(int i =0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int goal ; cin>>goal ;
//     int count =0; 
//     unordered_map<int ,int> ans ;
//     int sum = 0 ;

//     // for(int i=0;i<n ;i++){
//     //     int sum = 0 ; 
//     //     for(int j = i ;j<n ; j++){
//     //         sum += arr[j];
//     //         if(sum == goal){
//     //             count++;
//     //         }
//     //     }

//     // }
//     cout<<count;
// }

// LC: 2134 -----------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         int n = nums.size();
//         int wsize = 0 ;
//         for(int i=0 ; i<n ; i++){
//             if(nums[i] == 1){
//                 wsize++;
//             }
//         }
//         int count1 = 0 ;
//         for(int i=0 ; i<wsize ;i++){
//             if(nums[i] == 1)count1++;
        
//         }
//         int ans = count1 ;
//         for(int i=0 ; i<n ; i++){
//             if(nums[i] == 1) count1--;
//             int  k = (i + wsize)% n;
//             if(nums[k] == 1)count1++;
//             ans = max(ans , count1);


//         }
//         return wsize - ans ;

//     }
// };

//GFG: Minimum Swap and K togther--------------------------------
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
//   public:
//     int minSwap(vector<int>& arr, int k) {
//         // code here
//         int n= arr.size();
//         int ksize = 0 ; 
//         for(int i=0 ; i<n ;i++){
//             if(arr[i] <= k)ksize++;
//         }
//         int swap = 0;
//         for(int i=0 ; i<ksize ; i++){
//             if(arr[i] > k)swap++;
//         }
//         int ans = swap;
//         for(int i = 0 ; i<n - ksize; i++){
//             if(arr[i] > k)swap--;
//             if(arr[i+ksize] > k)swap++;
//             ans = min(ans , swap);
//         }
//         return ans;
//     }
// };


//LC : 918 Maximum Sum Cirular Subarray------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
    
//     int totalsum = 0 ; 
//     for(int i =0 ; i<n ; i++){
//         totalsum += arr[i];

//     }
        
//     int cmax= 0 ;int omax = INT_MIN;
//     for(int i=0 ; i<n ; i++){
//         cmax += arr[i];
//         omax = max(omax, cmax);
//         if(cmax<0)cmax =0 ;
//     }
//     if(omax<0)return omax;
        
//     for(int i=0 ; i<n ;i++){
//         arr[i] = -arr[i];
//     }
        
//     int cmin = 0 ; int omin = INT_MAX;
//     for(int i=0 ; i<n ; i++){
//         cmin += arr[i];
//         omin =min(omin , cmin);
//         if(cmin >0) cmin = 0 ;

//     }
//     int result = totalsum + omin > omax ? totalsum + omin : omax ;
//     cout<<result;
// }



//MAP Questions----------------------------------------------------------
 //LC: 3005 : Count elements with maximum frequency---------------------
//  #include<bits/stdc++.h>
//  using namespace std;
//  class Solution{
//     public:
//     int countMaxFreqEle(int arr[] , int n){
//         unordered_map<int  ,int> freq;
//     }
//  }

//MERGE SORT--------------------------------------------------



//LC 88 : Merge Sorted Arrays-????-----------------------------------------
// #include<bits/stdc++.h>
// using namespace std; 
// class Solution{
// public: 
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
//         vector<int> arr;
//         int l = 0 ; int h = n-1;
//         if(l>h) return ;
//         int mid =  l + (h-l)/2;
//         mergesort(arr , l ,mid);
//         MergeSort(arr, mid+1 , h);
//         merge(arr, l ,mid , h);



//     }
// };

//Quick Sort------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n ; cin>>n ;
    int arr[n];
    for(int i =0 ; i< n ; i++){
        cin>>arr[i];
    }
    int l = 0 ; int h = n-1;
    int pivot = arr[h];
    int ind = l -1;
    for(int i=l ; i<= h-1 ; i++){
        if(arr[i] < pivot){
            swap(arr[i] , arr[ind]);
            ind++;
        }
        
    }
    swap(arr[ind+1] , pivot);
    return ind+1;
    

}



