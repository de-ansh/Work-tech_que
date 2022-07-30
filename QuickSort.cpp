#include <bits/stdc++.h>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
int partition(vector<int>&arr, int l, int r){
	int pivot= arr[r];
	int i= l-1;
	for (int j = l; j <= r- 1; j++) 
    { 
        
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[r]);
    return (i + 1); 
}
void Sort(vector<int>&arr, int l, int r){
	if(l<r){
		int pi = partition(arr, l,r);
		
		Sort(arr,l, pi-1);
		Sort(arr,pi+1,r);
	}
}
void quickSort(vector<int> &arr) {
    int low = 0,high=arr.size()-1;
	Sort(arr, low, high);
}