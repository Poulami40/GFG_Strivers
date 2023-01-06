Input: 5

Output:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

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
            for(int ul=1;ul<=i;ul++)
                cout<<"*";
            for(int s=1;s<=space;s++)
                cout<<" ";
            for(int ur=i;ur>=1;ur--)
                cout<<"*";
            space-=2;
            cout<<endl;
        }
        space+=4;
        for(int j=n-1;j>=1;j--)
        {
            for(int ll=j;ll>=1;ll--)
                cout<<"*";
            for(int s=1;s<=space;s++)
                cout<<" ";
            for(int lr=j;lr>=1;lr--)
                cout<<"*";
            cout<<endl;
            space+=2;
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
