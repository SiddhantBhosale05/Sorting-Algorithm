//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implementation of Sorting Algorithm to perform Bubble Sort

#include <iostream>
 #include <algorithm>
using namespace std;
    
int main() {
    int arr[5] = {23, 12, 56, 144, 78};
    int n = 5;
    
    for (int i = 0; i< n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] >arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    
cout<< "The sorted array will be: ";
    for (int i = 0; i< n; i++) {
cout<<arr[i] << " ";
    }
cout<<endl;
    return 0;
}


/*Output:
The sorted array will be: 12 23 56 78 144*/