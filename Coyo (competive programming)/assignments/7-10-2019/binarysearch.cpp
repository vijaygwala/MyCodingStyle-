class Solution {
public:
    int search(vector<int>& v, int target) {
        int start=0,last=v.size()-1;
    while(start<=last)
	{	
	int mid=start+(last-start)/2;
	if(v[mid]==target)
			return mid;
	if(v[mid]<target)
		start=mid+1;
	else
		last=mid-1; 
		
	}
	return -1;
    }
};
