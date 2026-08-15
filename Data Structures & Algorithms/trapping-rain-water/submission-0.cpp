class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0;
        int r = h.size() - 1;
        int lmax = h[l];
        int rmax = h[r];
        int sum = 0;

        while (l < r) {
            if (lmax <= rmax) {
                l++;
                lmax = max(lmax, h[l]);
                sum += lmax - h[l];
            } else {
                r--;
                rmax = max(rmax, h[r]);
                sum += rmax - h[r];
            }
        }
        return sum;
    }
};
