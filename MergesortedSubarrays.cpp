#include <bits/sdtc++.h>
using namespace std;
void merge(vector<int> &arr, int endIndex) {
   int subarr1Current = 0, subarr2Current = endIndex + 1;
   vector<int> ans;
   while (subarr1Current <= endIndex && subarr2Current < arr.size()) {
       if(arr[subarr1Current] < arr[subarr2Current]) {
           ans.push_back(arr[subarr1Current++]);
       } else {
           ans.push_back(arr[subarr2Current++]);
       }
   }
   while (subarr1Current <= endIndex) {
       ans.push_back(arr[subarr1Current++]);
   }
   while (subarr2Current < arr.size()) {
       ans.push_back(arr[subarr2Current++]);
   }
   for (int i = 0; i < arr.size(); i++) {
       arr[i] = ans[i];
   }
}