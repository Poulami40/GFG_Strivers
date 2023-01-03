Input: 5

Output:
    *
   ***  
  *****
 *******
*********

void printTriangle(int n) {
        // code here
        int s=n-1,m=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=s;j>=1;j--)
                cout<<" ";
            s--;
            for(int k=1;k<=m;k++)
                cout<<"*";
            m+=2;
            cout<<""<<endl;
        }
    }
