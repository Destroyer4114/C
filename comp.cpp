#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        string s1[5000];
        int c = 0, w = 0;
        char l = '.';
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                c++;
            }
            else
            {
                if (l == '.')
                {
                    w++;
                    s1[w - 1] = s[i];
                }
                else
                {
                    s[w - 1] = s[w - 1] + s[i];
                }
            }
            l = s[i];
        }
        int r = (int)(c / w);
        c = c - r * w;
        for (int i = 0; i < w; i++)
        {
            cout << s1[i];
            if (c > 0)
            {
                for (int j = 0; j < r + 1; j++)
                {
                    cout << '.';
                    c--;
                }
            }
            else
            {
                for (int j = 0; j < r; j++)
                {
                    cout << '.';
                }
            }
        }
        cout<<endl;
    }
}