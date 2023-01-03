n=5
  
    *
   * *
  * * *
 * * * * 
* * * * *
* * * * *
 * * * * 
  * * *
   * *
    *
    
void printDiamond(int n) {
        // code here
        int s=n-1,m=1;
        for(int i=1;i<=n*2;i++)
        {
            if(i<=n){
            for(int j=s;j>=1;j--)
                cout<<" ";
            for(int k=1;k<=m;k++)
                cout<<"* ";
            cout<<""<<endl;
            s--;
            m++;
            }
            
            if(i>n)
            {
                for(int j=1;j<=s+1;j++)
                    cout<<" ";
                for(int k=m-1;k>=1;k--)
                    cout<<"* ";
                cout<<""<<endl;
                s++;
                m--;
            
                
            }
        }
        
    }
