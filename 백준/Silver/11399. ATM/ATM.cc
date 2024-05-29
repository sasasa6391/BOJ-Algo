#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, t;
    vector<int> v;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    
    sort(v.begin(),v.end());
    
    int ret = 0;
    
    for(int i = 0; i < v.size(); i++)
    {
        ret += v[i] * (v.size() - i);
    }
    
    cout << ret;
}