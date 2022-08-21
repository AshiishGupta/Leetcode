class Solution {
public:
    // USING HEAP: MAXHEAP
    // Whenever a question asks for k closest or k smallest or k largest it's a heap question .
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans(k);
        priority_queue<vector<int>> maxHeap;              
        for(auto &p: points){
            int x=p[0],y=p[1];
            maxHeap.push({x*x+y*y,x,y});
            if(maxHeap.size() >k){
                maxHeap.pop();
            }
        }
                
        for(int i=0;i<k;i++){
            vector<int> temp=maxHeap.top();
            maxHeap.pop();
            ans[i]={temp[1],temp[2]};                        
        }
                
        return ans;   
    }
};