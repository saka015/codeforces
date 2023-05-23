#include <bits/stdc++.h>
using  namespace std;

int main(){

    int n;
    cin>>n;

    vector<pair<int,int>> v;

    vector<int> home;
    vector<int> guest;

    while(n--)
    {

        int i,j;

        cin>>i>>j;

        home.push_back(i);
        guest.push_back(j);       
    }

    // cout<<guest;

    for (int i=0; i<n; i++){
        // v.push_back( make_pair(home[i],guest[i]) );
    cout<<home[i]<<endl;
    }


    //     int cnt=0; 

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(home[i]==guest[j])
    //         {
    //             cnt++;
    //         }
    //     }
    // }

    //     cout<<cnt<<endl;

    
   return 0;
}