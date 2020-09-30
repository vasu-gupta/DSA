#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>> ans;
        map <int,int> map;
        int k=0;
        
        if(n>=3)
        {
        for(int i=0;i<n;i++)
        {
            map.insert({nums[i],i});
        }
        
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                int complement=(-1)*nums[i]*nums[j];
                if(map.find(complement)!=map.end())
                {
                   
                    ans[k].push_back(nums[i]);
                    ans[k].push_back(nums[j]);
                    ans[k].push_back(complement);
                    k++;
                }
            }
        }
        }
        
        return ans;
    }

    int main() {

        return 0;
    }
};
