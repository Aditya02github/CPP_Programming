int maximummFrequency(vector <int> &arr,int n)
{
unordered_map<int,int>count;

int maxFreq=0;
int maxAns=0;

for(int i=0;i<arr.size();i++)
{
    count[arr[i]]++;
    maxFreq=max(maxfreq,count[arr[i]]);    
}

for(int i=0;i<arr.size();i++)
{
    if(count[arr[i]]==maxFreq)
    {
        maxAns=arr[i];
    }
}
return maxAns;
}