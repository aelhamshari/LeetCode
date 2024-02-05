class Solution {
public:
    int firstUniqChar(string s) {
        set <int> order = {};
        int i = 0;
        while(i<s.length())
        {
            if (order.find(s[i]) == order.end())
            {
                order.insert(s[i]);
                if (count (s.begin(), s.end(), s[i]) == 1)
                {
                    return(i);
                }
            }
            i++;
        }
        return(-1);
    }
};