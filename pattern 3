
Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int space=(n-1)*2;
        for(int i=1;i<=n;i++)
        {
            for(int l=1;l<=i;l++)
            {
                cout<<l<<" ";
            }
            for(int s=1;s<=space*2;s++)
            {
                cout<<" ";
            }
            for(int j=i;j>=1;j--)
                cout<<j<<" ";
            cout<<endl;
            space-=2;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
