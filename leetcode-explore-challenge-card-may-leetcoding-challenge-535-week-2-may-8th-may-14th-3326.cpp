class Solution {
public:
   void dfs(vector<vector<int>>& image,vector<vector<int>>& out,int sr,int sc,int newcolor,int originalcolor){
        
        if(image[sr][sc]!=-1 && out[sr][sc]==originalcolor){
            
            image[sr][sc]=-1;
            out[sr][sc]=newcolor;
            
           if(sr>0){
               dfs(image,out,sr-1,sc,newcolor,originalcolor);
           }
           if(sc>0){
               dfs(image,out,sr,sc-1,newcolor,originalcolor);
           }
            if(sr<image.size()-1){
               dfs(image,out,sr+1,sc,newcolor,originalcolor);
           }
            if(sc<image[0].size()-1){
               dfs(image,out,sr,sc+1,newcolor,originalcolor);
           }
        }
       
       
   }   
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        
       auto out(image);
        
        int originalcolor=image[sr][sc];
        
        dfs(image,out,sr,sc,newcolor,originalcolor);
        
        return out;
        
    }
};