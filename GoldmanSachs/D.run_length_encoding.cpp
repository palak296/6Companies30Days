// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;

        cout << encode(str) << endl;
    }
    return 0;
} // } Driver Code Ends

/*You are required to complete this function */

string encode(string src)
{
    int n = src.size();
    string ans;
    int count = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        if (i == n - 1)
        {
            ans.push_back(src[i]);
            ans.push_back(count + '0');
            break;
        }

        if (src[i] == src[i + 1])
        {
            count++;
        }
        else
        {
            ans.push_back(src[i]);
            ans.push_back(count + '0');
            count = 1;
        }
    }

    return ans;
}
