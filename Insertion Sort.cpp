//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implementation of Sorting Algorithm to perform Insertion Sort

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {45, 23, 86, 12, 9};
    int n = 5;

    for (int i = 1; i< n; i++) {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 &&arr[j] > current) {
arr[j + 1] = arr[j];
            j--;
        }
arr[j + 1] = current;
    }

cout<< "The sorted array will be: ";
    for (int i = 0; i< n; i++) {
cout<<arr[i] << " ";
    }
cout<<endl;
    return 0;
}


/*Output:
The sorted array will be: 9 12 23 45 86*/