class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;
    }
};

//O(m*n)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;
        int high=n-1;
        while(low<m&&high>-1)
        {
            int curr=matrix[low][high];
            if(curr<target)
            low++;
            else if(curr>target)
            high--;
            else
            return true;
        }
        return false;
    }
};

//O(m+n)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int X) {
        int M=mat[0].size(),N=mat.size(),i=0,j=M*N-1,mid=i+(j-i)/2;
	    while(i<=j){if(mat[mid/M][mid%M]==X)return 1;
	        else if(mat[mid/M][mid%M]<X)i=mid+1;
	        else j=mid-1;
	        mid=i+(j-i)/2;}
	return 0;}
};

O(log(m*n))
