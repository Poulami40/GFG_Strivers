class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startrow=0;
        int startcol=0;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int tot=row*col;
        row-=1;
        col-=1;
        vector<int> ans;
        while(count<tot){
            for(int i =startcol;count<tot&&i<=col;i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
            for(int i=startrow;count<tot&&i<=row;i++){
                ans.push_back(matrix[i][col]);
                count++;
            }
        
            col--;
            for(int i=col;count<tot&&i>=startcol;i--){
                ans.push_back(matrix[row][i]);
                count++;
            }
            row--;
            for(int i=row;count<tot&&i>=startrow;i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
        
        return ans;
    }
};
