
#include<iostream>
using namespace std;

int linearSearch(int arr[], int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    
}

int main(){
    int key;
    cin >> key;
    int arr[10] = {1,4,2,5,8,96,97,12,33,10};
    int siz = sizeof(arr)/sizeof(arr[0]);
    int position = linearSearch(arr,siz,key);
    position >= 0 ? (cout << "The element is present at position " << position << endl) : (cout << "Element is not present in the array." << endl);
    // linearSearch(arr,siz,key) >= 0 ? (cout << "at position " << linearSearch(arr,siz,key) << endl) : (cout << "Not found" << endl);
    return 0;
}