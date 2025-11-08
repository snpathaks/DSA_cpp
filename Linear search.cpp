 //Reverse an array :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 /*
 #include<iostream>
using namespace std;
void reversea(int a[],int n) {
	int start = 0;
	int end =n-1;
	while(start<=end){
		swap(a[start],a[end]);
		start++;
		end--;
	}
}
void printa(int a[],int n) {
	
	for(int i = 0;i<0;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
	

int main() {

   int a[6] ={1,2,3,4,5,6};
   int b[5] ={1,2,3,4,5};
   reversea(a,6);
   printa(a,6);
   
    reversea(b,5);
    printa(b,5);
    
    
    return 0;

}*/

//Delete an array:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::



// Binary search..................

#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key) {
	int start = 0;
	int end= size - 1;
	int mid = start + (end - start)/2;
	
	while(start <= end) {
		if(arr[mid] == key) {
			return mid;
		}
		//go to right wala part
		if(key>arr[mid]) {
			start = mid + 1;
		}else {
			end = mid - 1;
		}
		mid =start + (end - start)/2;
	}
	return -1;
}
int main() {
	int even[6] ={2,4,7,8,90,102};
	int odd[5] ={1,3,45,56,89};
	int evenindex = binarysearch(even, 6,7 );
	cout<<"Index of 7 is "<< evenindex<< endl;
	
	int oddindex =binarysearch(odd, 5, 89);
	cout<<"Index of 89 is "<< oddindex << endl;
	
}

//First and last positin of an element in a sorted array:
/*
#include<iostream>
using namespace std;
int firstocc(int a[], int n, int key) {
	int s = 0, e = n-1;
	int mid = s +(e-s)/2;
	int ans = -1;
	while(s<=e) {
		if(a[mid] == key) {
			ans = mid;
			e = mid - 1;
		}
		else if(a[mid] < key) {//right me jao
			s = mid + 1;
		}
		else if(a[mid] > key) {//left me jao
			e = mid - 1;
		}
		mid = s + (e-s)/2;
		
	}
	return ans;
}

int lastocc(int a[], int n, int key) {
	int s = 0, e = n-1;
	int mid = s +(e-s)/2;
	int ans = -1;
	while(s<=e) {
		if(a[mid] == key) {
			ans = mid;
			s = mid + 1;
		}
		else if(a[mid] < key) {//right me jao
			s = mid + 1;
		}
		else if(a[mid] > key) {//left me jao
			e = mid - 1;
		}
		mid = s + (e-s)/2;
		
	}
	return ans;
}

int main () {
	int even[11] = {1,2,3,3,3,3,3,5,6,8,1};
	cout<<"First occurence of 3 is at index is  "<< firstocc(even,11,3)<<endl;
	cout<<"Last occurence of 3 is at index is  "<< lastocc(even,11,3)<<endl;
	int total_no_occ =(lastocc(even,10,3) - firstocc(even,10,3)) + 1;
	cout<<"Total number of occurence: "<<total_no_occ<<endl;
	 
} */

//Peak index in mountain array::::::
/*
#include<iostream>
using namespace std;
int peakIndexMountainArray(int a[] , int n ) {
	int s = 0;
	int e = n - 1;
	int mid = s + (e-s)/2;
	while(s<e) {
		if(a[mid] < a[mid+1]) {
			s = mid + 1;
		}
		else
		{
			e = mid;
		}
			mid = s + (e-s)/2;
	    }
		return s;
	}

int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	cout<<peakIndexMountainArray(a,n);
	
} */

// Pivot element:..............
/*
#include<iostream>
using namespace std;

int getPivot(int a[], int n) {
	int s = 0;
	int e = n-1;
	int mid = s + (e-s)/2;
	while(s<e) {
		if(a[mid] >= a[0]) {
			s =  mid + 1;
		}
		else {
			e =mid;
		}
		mid = s + (e-s)/2;
	}
	return s;
}
int main () {
	int a[5] = { 8, 10, 17, 1, 3 };
    cout<<" The Index of Pivot is " <<getPivot(a,5)<<endl;
    
	
} */

//Search in  rotated sorted array::::::::::
/* incomplete solution
#include<iostream>
using namespace std;

int getPivot(int a[], int n) {
	int s = 0;
	int e = n-1;
	int mid = s + (e-s)/2;
	while(s<e) {
		if(a[mid] >= a[0]) {
			s =  mid + 1;
		}
		else {
			e =mid;
		}
		mid = s + (e-s)/2;
	}
	
	return s;
}

int main () {
	
	int a[5] = { 8, 10, 17, 1, 3 };
    cout<<" The Index of Pivot is " <<getPivot(a,5)<<endl;
    int k;
    if(k >= getPivot(a,5) && k<=a[5-1])
    {//BS on second line 
      return binarySearch(a,pivot,5-1,k);
    	
	}
	else {
		//BS on first line
		return binarysearch(a, 0 , pivot-1,k);
	}
	
} */

//Squareroot using binary search:::::::::::::::::
/*
#include<iostream>
using namespace std;
long long int binarysearch(int n) {
	int s =0;
	int e = n;
	long long int mid = s + (e-s)/2;
	long long int ans = -1;
	while(s<=e) {
		int square = mid*mid;
		if(square==n)
		   return mid;
		if(square < n) {
			ans=mid;
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
	
}
int mySqrt(int x) {
	return binarysearch(x);             //search space concept is used.
}
//for precise including decimal value.
double morePrecision(int n, int precision, int tempsol){
	double factor = 1;
	double ans = tempsol;
	for(int i=0;i<precision;i++) {
		factor = factor/10;
		for(double j =ans;j*j<n;j=j+factor) {
		    ans = j;	
		}
		
	}
	return ans;
}

int main () {
	int num;
	cout<<"Enter a number: "<<" ";
	cin>>num;
	int tempsol = binarysearch(num);
	cout<<"Answer is "<<morePrecision(num,3,tempsol);
} */

// mostly asked in big companies:  
//BOOK ALLOCATION PROBLEM: 

will update this .





