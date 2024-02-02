class Solution {
private:
    stack <char> S;
public:
    string countAndSay(int n)
    {
        if (n== 1)
        {
            return("1");
        }
        return(countAndSayHelper(n));
    }
    string countAndSayHelper(int n)
    {
        if(n==2)
        {
            return("11");
        }
        if (n>2)
        {
            string S = countAndSayHelper(n-1);
            // cout << S << endl;
            int i = 1;
            string new_S = "";
            int count = 1;
            while(i< S.length())
            {
                if (S[i] == S[i-1])
                {
                    count++;
                }
                else
                {
                    new_S = new_S + to_string(count) + S[i-1];
                    count = 1;
                }
                i++;
            }
            new_S = new_S + to_string(count) + S[i-1];
            return(new_S);
        }
        return("");
    }

    // string countAndSay(int n) {
    //     if (n==1)
    //     {
    //         return("1");
    //     }
    //     else
    //     {
    //         int i=2;
    //         string s = "1";
    //         while(i<=n)
    //         {
    //             s = helper(s);
    //             // cout << s << endl;
    //             i++;
    //         }
    //         return(s);
    //     }
    // }

    // string helper(string n)
    // {
    //     string FinalString = "";
    //     int i = 1;
    //     int counter = 0;
    //     if (n.length()==1)
    //     {
    //         return("11");
    //     }
    //     S.push(n[0]);
    //     while(i<n.length())
    //     {
    //         if (n[i] == S.top())
    //         {
    //             S.push(n[i]);
    //         }
    //         else
    //         {
    //             counter = 0;
    //             while(!(S.empty()))
    //             {
    //                 S.pop();
    //                 counter++;
    //             }
    //             FinalString = FinalString + to_string(counter) + n[i-1];
    //             S.push(n[i]);
    //         }
    //         i++;
    //     }
    //     counter = 0;
    //     while(!(S.empty()))
    //     {
    //         S.pop();
    //         counter++;
    //     }
    //     FinalString = FinalString + to_string(counter) + n[i-1];
    //     return(FinalString);
    // }
};