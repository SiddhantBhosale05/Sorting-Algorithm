//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implementation of Sorting Algorithm to perform Selection Sort

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {23, 12, 56, 144, 78};
    int n = 5;

    for (int i = 0; i< n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] <arr[min_index]) {
min_index = j;
            }
        }
        if (i != min_index) {
            swap(arr[i], arr[min_index]);
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