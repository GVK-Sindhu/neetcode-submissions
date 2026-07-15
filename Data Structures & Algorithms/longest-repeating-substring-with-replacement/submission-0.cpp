class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,n=s.size();
        unordered_map<char,int>freq;
        int maxfreq=0,mlen=0;
        while(r<n){
            freq[s[r]]++;
            maxfreq=max(maxfreq,freq[s[r]]);
            while(((r-l+1)-maxfreq)>k){
                freq[s[l]]--;
                l++;
            }
            mlen=max(mlen,r-l+1);
            r++;
        }
        return mlen;
    }
};

// we can iterate over ele and compute maxfreqelse n-maxfreq>k window invalid
// n-maxfreq==k then compute maxlen
// how to get maxfreq at each window?
// compute running freq like running sum
// but when (n-maxfreq)>k wht to do we want to dec freq[s[l]]
//  and inc left then maxfreq will change 