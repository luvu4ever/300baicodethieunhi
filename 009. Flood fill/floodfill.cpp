class Solution {
public:
    int xmove[5] = {0, 0, 1, -1};
    int ymove[5] = {1, -1, 0, 0};
    int check[1005][1005];
    int original;
    
    void DFS(int x, int y, vector<vector<int>> &image, int Newcolor){
        image[x][y] = Newcolor;
        //printf("%d %d %d\n",x,y,image[x][y]);
        check[x][y] = 1;
        for(int i= 0; i<4;i++){
            int xnew = x + xmove[i];
            int ynew = y + ymove[i];
            if(xnew < 0 || ynew < 0 || xnew >= image.size() || ynew >= image[xnew].size()) continue;
            if(!check[xnew][ynew] && image[xnew][ynew] == original)
                DFS(xnew, ynew, image, Newcolor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        original = image[sr][sc];
        DFS(sr, sc, image, color);
        return image;
    }
};