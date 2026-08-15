class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int marea=0;

        int area;

        while(l<r){
        if(height[l]<=height[r])
        
        {
            area=height[l]*(r-l);
            l++;
        }
        else{
            area=height[r]*(r-l);
            r--;
        }
        marea=max(marea,area);

        
        }
        return marea;
    } 
};