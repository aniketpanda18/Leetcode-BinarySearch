class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         double ans = 0;
        vector<int>temp(nums1);
        for(auto i:nums2)
            temp.push_back(i);
        sort(temp.begin(),temp.end());
        int n = nums1.size()+nums2.size();
        if(n%2==0)
        {
            ans = (temp[n/2]+temp[(n-1)/2])/2.0;
        }
        else{
            ans = (temp[n/2]);
        }
        return ans;
    }
};


