#include<iostream>

using namespace std;

// LINEAR SEARCH
int linearSearch(int arr[], int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    
}

// BINARY SEARCH - considering the array is in ascending order.
int binarySearch(int arr[], int start, int end, int key){
    while(start <= end){
        int mid = (start + end )/2;
        if(arr[mid] == key){
            return mid;
        }else if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
     int key;
    cin >> key;
    int arr[11] = {1,2,4,5,8,10,11,12,33,96,97};

    int siz = sizeof(arr)/sizeof(arr[0]);
    int end = siz - 1;
    int mid = (0 + end)/2;
    int linearSearchPosition = linearSearch(arr,siz,key);
    int binarySearchPosition = binarySearch(arr,0,end,key);
    linearSearchPosition >= 0 ? (cout << "Linear Search: The element is present at index " << linearSearchPosition << endl) : (cout << "Element is not present in the array." << endl);
    binarySearchPosition >= 0 ? (cout << "Binary Search: The element is present at index " << binarySearchPosition << endl) : (cout << "Element is not present in the array." << endl);
}