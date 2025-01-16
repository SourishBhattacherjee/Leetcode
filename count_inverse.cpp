#include <bits/stdc++.h>
long long cnt = 0;

void merge(long long *arr, int start, int mid, int end) {
    int leftSize = mid - start + 1;
    int rightSize = end - mid;
    
    vector<long long> left(leftSize);
    vector<long long> right(rightSize);

    for (int i = 0; i < leftSize; i++) left[i] = arr[start + i];
    for (int j = 0; j < rightSize; j++) right[j] = arr[mid + 1 + j];


    int i = 0, j = 0, k = start;
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
            cnt += (leftSize - i); 
        }
    }

    while (i < leftSize) arr[k++] = left[i++];
    while (j < rightSize) arr[k++] = right[j++];
}

void mergeSort(long long *arr, int start, int end) {
    if (start >= end) return;

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}


long long getInversions(long long *arr, int n) {
    cnt = 0; 
    mergeSort(arr, 0, n - 1);
    return cnt;
}
