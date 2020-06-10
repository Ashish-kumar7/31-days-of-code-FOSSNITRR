class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {    
        vector<long long int>V;
        for(int i=0;i<points.size();i++){
            long long int r=points[i][0];
            long long int s=points[i][1];
            long long int l=(r*r) + (s*s);
            V.push_back(l);
        }
            sort(V.begin(),V.end());
             vector<vector<int>>A(k , vector<int>(2 , 0));
            int xx=V[k-1];
            cout<<xx<<endl;
        int ppp=0;
            for(int i=0;i<points.size();i++){      
                long long int rr=points[i][0];
                long long int ss=points[i][1];
                long long int ll=(rr*rr) + (ss*ss);
              
                if(ll<=xx && ppp<k ){
                    A[ppp][0]=rr;
                    A[ppp][1]=ss;
                    cout<<rr<<" "<<ss<<" ";   
                    ppp++;
                }   
            }        
            return A;    
    }
};