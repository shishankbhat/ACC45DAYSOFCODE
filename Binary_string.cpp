#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string S;
        int N,count = 0;
        cin >> N >> S;
        for (int i = 0; i < N-1; i++)
        {
            /* code */
            if(S[i ]== S[i+1])
            {
               count += 1;
            }
        }
        cout << count << endl;
    }
}