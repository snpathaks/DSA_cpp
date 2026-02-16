//Print (1-N)-------------------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void print(int n){
   
//     if(n<1)return ; 
//     print(n-1);
//     cout<<n<<" ";
// }
// int main (){
//     int n ; cin>>n; 
//     print(n);
// }

// Print(N-1)------------------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void Print(int n){
//     if(n==0)return;
//     cout<<n<<" ";
//     Print(n-1);
// }
// int main(){
//     int n ; cin>>n;
//     Print(n);

// }


//Find the Factorial of a Given Number---------------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std ;
// int fatorial(int n){
//     if(n==0 || n==1)return 1;
//     return n * fatorial(n-1);
// }
// int main(){
//     int n ; cin>>n ; 
//     cout<<"The factorial of "<<n<<" is "<<fatorial(n)<<endl;
//  }

//Sum of numbers-------------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int sum(int n){
//     int sum = 0;
//     for(int i=0 ; i<n ; i++){
//         sum += i;
//     }
//     return sum;
// }
// int main(){
//     int n ; cin>>n;
//     cout<<"The sum is : "<<sum(n);
// }


//Sum of digits of a number--------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int sumdigits(int n){
//   if(n==0)return 0 ;
//   int result = (n%10)+ sumdigits(n/10);
//   return result;
// }
// int main(){
//   int n;cin>>n;
//   cout<<"The Sum of Digits of "<<n<<" is "<<sumdigits(n)<<endl;
// }

//Reverse a number---------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int rev = 0;
// void reverseno(int n){
//   if(n==0)return ; 
  
//   rev = rev*10 + n%10;
//   return reverseno(n/10);
// }
// int main(){
//   int n ; cin>>n ;
//   reverseno(n);
//   cout<<"The Number "<<n<<" after getting reverse : "<<rev<<endl;
// }

//Power of a Number-----------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int power(int x , int n){
//     if(n==0)return 1;
//     return x*power(x , n-1);
// }
// int main(){
//   int x , n ; 
//   cin>>x ; cin>>n;
//   cout<<x<<" to the power "<<n<<" is "<<power(x,n);

// }


//LC : 509 Fibonacci Series--------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n){
//     if(n==0)return 0;
//     if(n==1) return 1;
//     return fib(n-1) + fib(n-2);
// }
// int main(){
//     int n; cin>>n;
//     cout<<"Fibonacci Series of "<<n<<" is : "<<fib(n)<<endl;
// }


  //OTHER APPROACH------------
//   class Solution {
//   public:
//    int fibcal(int n , vector<int>& vt){
//     if(n==0)return 0 ;
//     if(n==1) return 1;
//     if(vt[n] != -1) return vt[n];
//     return vt[n]=fib(n-1) + fib(n-2);
//    }
//    int fib(int n) {
//     vector<int> vt(n+1 , -1);
//     return fibcal(n ,vt);

    
    
//     //    if(n==0)return 0;
//     //    if(n==1)return 1;
//     //    int f = 0 ;
//     //    int s = 1;
       
//     //    for(int i=2 ;i<=n ; i++) {
//     //     int next = f+s;
//     //     f=s;
//     //     s = next;
        
//     //     }
//     //    return s;
       
    
//     }
//  };

//Print the element in an Array-------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void printarray(int arr[] , int n , int index){
//         if(index==n)return ;
//         cout<<arr[index]<<" ";
//         printarray(arr,n , index+1);
// }
// int main(){
//   int n;cin>>n;
//   int arr[n];
//   for(int i=0 ; i<n ; i++){
//     cin>>arr[i];
//   }
//   int index;cin>>index;
//   printarray(arr,n,index);
// }


//LC 70 : Climbing Stairs------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
   
// public:
//     int climbStairs(int n) {
//         if(n<=1)return 1;
//         vector<int> clmb(n+1);
//         clmb[0] = 1;
//         clmb[1] = 1;
//         for(int i=2 ; i<=n ;i++){
//              clmb[i] = clmb[i-1] + clmb[i-2];
//         }
//         return clmb[n];
        
//      }
// };


//Palindrome String ---------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std; 
// class Solution{
// public:
// bool check(string& s, int l , int e){
//   if(l ==e) return true;
//   if(l>e)return true;
//   return s[l] == s[e] && check(s , l+1 , e-1);
// }
//   bool isPalindrome(string& s){
//        int n = s.length();
//        return check(s , 0 ,n-1);

//   }
// };



