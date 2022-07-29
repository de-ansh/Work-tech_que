#include <bits/stdc++.h>
using namespace std;
vector<int> getSquareSortedArray(vector<int> &arr) {
    
	for(int i=0;i<arr.size();i++){
		arr[i]*=arr[i];
	}
	sort(arr.begin(),arr.end());
	return arr;
}
vector<int> getSquareSortedArray(vector<int> &arr) {
   int n = arr.size();
   for (int i = 0; i < n; i++) {
       arr[i] = abs (arr[i]);
   }
   vector<int> ans;
   for( int i = 0; i < n; i++) {
       int currentMinimum = INT_MAX;
       int indx;
       for (int j = 0; j < n ; j++) {
           if (arr[j] < currentMinimum) {
               currentMinimum = arr[j];
               indx = j;
           }
       }
       arr[indx] = INT_MAX;
       ans.push_back(currentMinimum * currentMinimum);
   }
   return ans;
}