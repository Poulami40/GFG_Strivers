//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int large=INT_MIN,secondlarge=INT_MIN;
	    if(n<2)
	        return -1;
	        int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==arr[i+1])
	        c++;
	        if(arr[i]>large)
	        {
	            secondlarge=large;
	            large=arr[i];
	        }
	        else if(arr[i]>secondlarge&&arr[i]!=large)
	            secondlarge=arr[i];
	    }
	    if(c>=n-1)
	    return -1;
	    return secondlarge;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
