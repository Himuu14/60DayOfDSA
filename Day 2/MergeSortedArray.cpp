//==>Method 1

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin() + m, nums1.end());
        for(int i(0);i<n;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
    }
};


//==>Method 2

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int k=(m+n)-1;
	int i=m-1,j=n-1;
	while(i>=0 && j>=0)
	{
		if(nums1[i]>=nums2[j])
			nums1[k--]=nums1[i--];
		else
			nums1[k--]=nums2[j--];
	}

	while(j>=0)
	{
		nums1[k--]=nums2[j--];
	}
}
};