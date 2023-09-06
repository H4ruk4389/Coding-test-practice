#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <climits>

using namespace std;

int dp_func(vector<int> arr){
    int result = INT_MIN;
    int size = arr.size();
    vector<int> dp(size);

    for (int i=0;i<size;i++){
        if (dp[i-1] + arr[i] > arr[i]) dp[i] = dp[i-1] + arr[i];
        else dp[i] = arr[i];
    }

    for (int i=0;i<size;i++){
        result = max(result, dp[i]);
    }

    return result;
}

int main() {
    int i, n;
    int re;
	  scanf("%d", &n);
  	vector<int> a;
	
  	for(i=0; i<n; i++){
  		scanf("%d", &re);
  		a.push_back(re);
  	}
  	int ro = dp_func(a);
  	printf("%d",ro);
	
  	return 0;
}
