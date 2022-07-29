#include <bits/stdc++.h>
using namespace std;
int getMaxConsecutiveOnes(vector<int> &A) {
    int count=0;
	int maxi=0;
	for(int i=0;i<A.size();i++){
		if(A[i]==1)
			count++;
		else
			count=0;
		maxi=max(count,maxi);
		
	}
	return maxi;
}