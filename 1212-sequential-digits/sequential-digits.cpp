class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result = {};
        //int arr[9] = {1,2,3,4,5,6,7,8,9};
        int powerhigh = 0;
        int powerlow = 0;
        int LOW = low;
        int HIGH = high;
        int last_digitLow = 0;
        while(LOW > 0)
        {
            powerlow++;
            last_digitLow = LOW;
            LOW /= 10;
        }
        while(HIGH > 0)
        {
            powerhigh ++;
            HIGH /= 10;
        }
        int i = 0;
        int j = last_digitLow;
        int k = last_digitLow;
        int current_number = 0;
        // cout << powerlow << " " << powerhigh << endl;
        int current_power = powerlow;
        while (current_power <= powerhigh)
        {
            while(k <= 10-current_power)
            {
                i = current_power-1;
                current_number = 0;
                j=k;
                while(i>=0 && j < 10)
                {
                    current_number += j*pow(10,i);
                    i--;
                    j++;
                }
                k++;
                // cout << current_number << endl;
                if(current_number >= low)
                {
                    if (current_number <= high)
                    {
                        result.push_back(current_number);
                    }
                    else
                    {
                        break;
                    }
                }
            }
            current_power++;
            k = 1;
        }
        return(result);
    }
};