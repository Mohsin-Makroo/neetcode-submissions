class Solution {
bool helper(vector<int>& piles,int mid,int h){
    int hours=0;
    for(int x:piles){
        hours+=(x+mid-1)/mid;
    }
    return hours<=h;
}
public:

    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        int ans;
        while(l<=r){
            int  mid=l+(r-l)/2;
            if(helper(piles,mid,h)){
                r=mid-1;
                ans=mid;
            } 
            else l=mid+1;
        }
        return ans;
    }
};
