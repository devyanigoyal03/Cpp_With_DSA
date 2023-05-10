#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
        if(s[8]=='A')
        {
            if ((s[0] == '1') && (s[1] == '2'))
            {
                s[0] = '0';
                s[1] = '0';
            }
        }
        else
        {
            if (s[1]=='8')
            {
                s[0]='2';
                s[1]='0';
            }
            else if(s[1]=='9')
            {
                s[0]='2';
                s[1]='1';
            }
            else if ((s[0] == '1') && (s[1] == '2'))
            {

                s[0] = '1';
                s[1] = '2';
            }
            else 
            {
                s[0] += 1;
                s[1] += 2;
            }
        }

    s[8] = '\0';
    s[9] = '\0';
    
    return s;   
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
