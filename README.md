# Sorting Algorithm
Experiment 20

## Aim 
To study Sorting Algoritm

## Theory
### Defination
- A sorting algorithm is a method for arranging the elements of a list or array in a specific order, typically in ascending or descending order.
- Sorting algorithms operate by comparing elements and performing swaps or moves to achieve the desired arrangement.

### Types of Sorting Algoritms:
1. **Bubble Sort**
A simple comparison-based algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```

2. **Selection Sort**
This algorithm divides the input list into two parts: a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted part and moves it to the sorted part.
```cpp
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}
```

3. **Insertion Sort**
This algorithm builds a sorted array one element at a time by repeatedly taking the next element and inserting it into the correct position in the already sorted part.
```cpp
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```

## Algorithms
### Bubble Sort

1. **Start**
2. **Initialize the Array:**
   - **Start with an array of integers to be sorted.**
3. **Outer Loop:**
   - **Iterate through the array `n - 1` times (where `n` is the length of the array).**
   - **Each iteration of the outer loop represents a complete pass through the array.**
4. **Inner Loop:**
   - **For each pass, iterate through the array from the beginning to `n - 1 - i`.**
   - **This is because the last `i` elements are already sorted after `i` passes.**
5. **Comparison and Swap:**
   - **In the inner loop, compare each pair of adjacent elements:**
   - **If the current element is greater than the next element, swap them.**
   - **This "bubbles" the largest unsorted element to its correct position at the end of the 
   array during each pass.**
6. **Output the Sorted Array:**
   - **After completing the sorting, print the sorted array.**
7. **End**

### Insertion Sort
1. **Start**
2. **Initialize the Array:**
   - **Start with an array of integers that needs to be sorted.**
3. **Outer Loop:**
   - **Iterate from the second element (index 1) to the last element of the array.**
   - **The element at the current index is considered as the "current" element that needs to be placed in the sorted part of the array.**
4. **Store the Current Element:**
   - **For each iteration, store the current element in a variable (e.g., `current`).**
5. **Inner Loop:**
   - **Compare the current element with the elements in the sorted part of the array (to its 
   left).**
   - **Use a variable (e.g., `j`) to traverse the sorted part.**
6. **Shift Elements:**
   - **If the element in the sorted part is greater than the current element, shift that 
     element one position to the right.**
7. **Insert the Current Element:**
   - **nce the correct position is found (when the elements to the left are not greater), 
   insert the current element into that position.**
8. **Output the Sorted Array:**
   - **After all elements have been processed, print the sorted array.**
9. **End**

### Selection Sort
1. **Start**
2. **Initialize the Array:**
   - **Start with an array of integers that needs to be sorted.**
3. **Outer Loop:**
   - **Start with an array of integers that needs to be sorted.**
   - **This loop keeps track of the position where the next smallest element will be placed.**
4. **Find the Minimum Element:**
   - **For each iteration of the outer loop:**
     - **Initialize `min_index` to the current index `i`.**
     - **Use an inner loop to scan the remaining unsorted portion of the array (from `i + 1` 
       to `n`).**
     - **If a smaller element is found, update `min_index` to the index of that element.**
5. **Swap the Elements:**
   - **After identifying the minimum element in the unsorted portion, check if `min_index` is 
     different from `i`.**
   - **If they are different, swap the current element at `i` with the element at 
     `min_index`.**
6. **Output the Sorted Array:**
   - **After all elements have been processed and swapped as necessary, print the sorted 
     array.**
7. **End**
