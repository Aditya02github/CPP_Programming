 int i=0,j=0,k=0;
        vector<int>ans;
        while(i<m &&j<n)
        {
            if(nums1[i++]<nums2[j])
            {
                ans.push_back(nums1[i]);

            }
            else
            {
               ans.push_back(nums2[j]);
               j++;
            }
        }
       
        while(i<m)
        {
           ans.push_back(nums1[i]);
           i++;
        }
        while(j<n)
        {
             ans.push_back(nums2[j]);
             j++;
        }
        int l=m;
       while(l<ans.size())
       {
        nums1.push_back(ans[l]);
       }

        return ;