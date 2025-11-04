// insertion of MaxHeap/MinHeap:::::::::::::::::::::::::::::::::::::::::::
/*
#include <iostream>
using namespace std;

class MaxHeap {
private:
    int* heap;
    int capacity;
    int size;

    // Helper function to maintain the max-heap property (bottom-up)
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] > heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

public:
    // Constructor to initialize the heap with a fixed capacity
    MaxHeap(int cap) {
        capacity = cap;
        size = 0;
        heap = new int[capacity];
    }

    // Destructor to free the allocated memory
    ~MaxHeap() {
        delete[] heap;
    }

    // Insert a new element into the heap
    void insert(int element) {
        if (size == capacity) {
            cout << "Heap overflow, cannot insert element." << endl;
            return;
        }
        
        // Step 1: Insert the element at the end
        heap[size] = element;
        size++;

        // Step 2: Heapify up to maintain max-heap property
        heapifyUp(size - 1);
    }

    // Display the heap elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the Max Heap: ";
    cin >> capacity;

    MaxHeap maxHeap(capacity);

    int numElements, element;
    cout << "Enter the number of elements to insert: ";
    cin >> numElements;

    if (numElements > capacity) {
        cout << "Number of elements exceeds heap capacity. Only " << capacity << " elements will be inserted." << endl;
        numElements = capacity;
    }

    for (int i = 0; i < numElements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        maxHeap.insert(element);
    }

    cout << "Max Heap Elements after insertion: ";
    maxHeap.display();

    return 0;
} */

//insertion of minheap:::::::::::::::::::::::::::::::::::::::::;

/*
#include <iostream>
using namespace std;

class MinHeap {
private:
    int* heap;
    int capacity;
    int size;

    // Helper function to maintain the max-heap property (bottom-up)
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] < heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

public:
    // Constructor to initialize the heap with a fixed capacity
    MinHeap(int cap) {
        capacity = cap;
        size = 0;
        heap = new int[capacity];
    }

    // Destructor to free the allocated memory
    ~MinHeap() {
        delete[] heap;
    }

    // Insert a new element into the heap
    void insert(int element) {
        if (size == capacity) {
            cout << "Heap overflow, cannot insert element." << endl;
            return;
        }
        
        // Step 1: Insert the element at the end
        heap[size] = element;
        size++;

        // Step 2: Heapify up to maintain max-heap property
        heapifyUp(size - 1);
    }

    // Display the heap elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the Min Heap: ";
    cin >> capacity;

    MinHeap minHeap(capacity);

    int numElements, element;
    cout << "Enter the number of elements to insert: ";
    cin >> numElements;

    if (numElements > capacity) {
        cout << "Number of elements exceeds heap capacity. Only " << capacity << " elements will be inserted." << endl;
        numElements = capacity;
    }

    for (int i = 0; i < numElements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        minHeap.insert(element);
    }

    cout << "Min Heap Elements after insertion: ";
    minHeap.display();

    return 0;
} */

//Delete the root element:::::::::::::::::::::::::::::::::::::;;

/*
#include <iostream>
using namespace std;

class MinHeap {
private:
    int* heap;
    int capacity;
    int size;

    // Helper function to maintain the min-heap property (top-down)
    void heapifyDown(int index) {
        while (index < size) {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int smallest = index;

            if (leftChild < size && heap[leftChild] < heap[smallest])
                smallest = leftChild;

            if (rightChild < size && heap[rightChild] < heap[smallest])
                smallest = rightChild;

            if (smallest != index) {
                swap(heap[index], heap[smallest]);
                index = smallest;
            } else {
                break;
            }
        }
    }

public:
    // Constructor to initialize the heap with a fixed capacity
    MinHeap(int cap) {
        capacity = cap;
        size = 0;
        heap = new int[capacity];
    }

    // Destructor to free the allocated memory
    ~MinHeap() {
        delete[] heap;
    }

    // Insert a new element into the heap
    void insert(int element) {
        if (size == capacity) {
            cout << "Heap overflow, cannot insert element." << endl;
            return;
        }

        // Step 1: Insert the element at the end
        heap[size] = element;
        size++;

        // Step 2: Heapify up to maintain min-heap property
        int index = size - 1;
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] < heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Delete the root element (min element)
    void deleteRoot() {
        if (size == 0) {
            cout << "Heap is empty, cannot delete element." << endl;
            return;
        }

        // Step 1: Replace root with the last element
        heap[0] = heap[size - 1];
        size--;

        // Step 2: Heapify down to maintain min-heap property
        heapifyDown(0);
    }

    // Display the heap elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the Min Heap: ";
    cin >> capacity;

    MinHeap minHeap(capacity);

    int numElements, element;
    cout << "Enter the number of elements to insert: ";
    cin >> numElements;

    if (numElements > capacity) {
        cout << "Number of elements exceeds heap capacity. Only " << capacity << " elements will be inserted." << endl;
        numElements = capacity;
    }

    for (int i = 0; i < numElements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        minHeap.insert(element);
    }

    cout << "Min Heap Elements before deletion: ";
    minHeap.display();

    // Delete the root element
    cout << "Deleting the root element..." << endl;
    minHeap.deleteRoot();

    cout << "Min Heap Elements after deletion: ";
    minHeap.display();

    return 0;
}  */


//Question arrange only prime numbers in Heap::::::::::::::::::
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n,int i) {
	int largest = i;
	int l =2*i+1;
	int r = 2*i+2;
	if(l<n && arr[l]>arr[largest]) {
		largest = l;
	}
	if(r<n && arr[r]>arr[largest]) {
		largest = r;
	}
	
	if(largest != i){
		swap(arr[i],arr[largest]);
		

		heapify(arr,n,largest);
	}
}

int isprime(int n) {
	if (n <= 1) {
		return 0;
}
for(int i=2;i*i<= n;i++){
	if(n%i==0) {
		return 0;
	}
	return 1;
}
	
}

void insertIntoMaxHeap(int arr, int n){
	  int max = 1;
	  max = temp;
	  temp += 1;
	  
}

//void printmaxheap(int arr[], int n){
//	i
//}

void display(int arr[] , int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main () {
	int arr[100];
	int n=0;
	int num;
	cin>>num;
	
	for(int i=0;i<num;i++){
		int value;
		cin>>value;
	
	 if(isprime(value)) {
		insertIntoMax(arr, &n , value);
	 }else{
		cout<<value<<" is not a prime number"<<endl;
	 }
}
	for(int i=n/2; i>=0 ;i--){
		heapify(arr,n,i);
	}
	display(arr, n);
	heapify(arr,n,i);
	display(arr,n);
} */



/*
#include <iostream>
using namespace std;

class MaxHeap {
private:
    int* heap;
    int capacity;
    int size;

    // Helper function to maintain the max-heap property (bottom-up)
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] > heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

public:
    // Constructor to initialize the heap with a fixed capacity
    MaxHeap(int cap) {
        capacity = cap;
        size = 0;
        heap = new int[capacity];
    }

    // Destructor to free the allocated memory
    ~MaxHeap() {
        delete[] heap;
    }

    // Insert a new element into the heap
    void insert(int element) {
        if (size == capacity) {
            cout << "Heap overflow, cannot insert element." << endl;
            return;
        }
        
        // Step 1: Insert the element at the end
        heap[size] = element;
        size++;

        // Step 2: Heapify up to maintain max-heap property
        heapifyUp(size - 1);
    }

    // Display the heap elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MaxHeap maxHeap(10);

    // Insert elements
    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(15);
    maxHeap.insert(30);
    maxHeap.insert(40);

    // Display heap elements
    cout << "Max Heap Elements: ";
    maxHeap.display();

    return 0;
}*/


//class DSA:::::::::::::::::::::::::::::

#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
	int largest =i;
	int left = 2*i +1;
	int right = 2*i+2;
	if(left<n && arr[left] > arr[largest]){
		left = largest;
	}
	if(right<n && arr[right] > arr[largest]){
		right = largest;
	}
	if(largest != 0){
		for(int i=n/2-1;i>=0;i--){
			swap(arr[i],arr[largest]);
			heapify(arr,n,largest);
		}
	}
}

void sort(int arr[], int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(arr,n,i);
	}
	for(int i=n-1;i>0;i--){
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
	}
}
void display(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\n";
	}
}
int main () {
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	heapify(arr,n);
}










