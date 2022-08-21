bool isArithmeticSequence(vector<int> &arr) {
    int n = arr.size();
   if (n == 1) {
       return true;
   }
   sort(arr.begin(), arr.end());
   int commonDiff = arr[1] - arr[0];
   for (int i = 1; i < n; i++) {
       if (arr[i] - arr[i - 1] != commonDiff) {
           return false;
       }
   }
   return true;
}

