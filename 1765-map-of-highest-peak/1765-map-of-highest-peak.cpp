class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
        int X[] = {0 , -1 , 0 , 1} , Y[] = {-1 , 0 , 1 , 0};
        vector<vector<int>> height(m , vector<int> (n,-1));
        queue<pair<int , int>> q;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(isWater[i][j]) {
                    height[i][j] = 0;
                    q.push({i , j});
                }else height[i][j] = -1;
            }
        }

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for(int i = 0 ; i < 4 ; i++){
                int dx = x + X[i];
                int dy = y + Y[i];

                if(dx >= 0 and dx < m and dy >= 0 and dy < n){
                    if(height[dx][dy] == -1){
                        height[dx][dy] = height[x][y] + 1;
                        q.push({dx , dy});
                    }
                }
            }
        }


        return height;
    }
};