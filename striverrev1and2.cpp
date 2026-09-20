// the containers in c++
#include <bits/stdc++.h>
using namespace std;
void pairs()
{
    // 2var pair hoe to decalre
    pair<int,int>t;
    t={1,2};
    cout<<t.first<<" "<<t.second<<" ";
    // 3 var
    pair<int,<int,int>>r;
    r={1,{3,4}};
    cout<<r.first<<" "<<r.second.first<<" "<<r.second.second<<" ";
    // how to use pairs in the array
    pair<int,int>f[3];
    f[3]={{1,2},{3,4},{6,7}};
    cout<<f[1].first<<" "<<f[2].second<<" ";
    for(auto it:r) cout<< it<<" ";
}
void vectors()
{
    // we re decalring the vecotrs here and adding the elements of 1,2,3
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);//the thing is that we trying to incorease the size of the array
    v.push_back(3);
    for (auto it:v)
    {
        cout<<it<<" ";
        /* code */
    }
    //we re using the vectors by embedding pairs 
    vector<pair<int,int>> c;
    c.push_back({1,2});
    c.emplace_back({5,6});
    c.push_back({4,5});
    for(auto f:c) cout<<f<<" ";
    vector<int> d(5,100);
    for(auto q:d) cout<<q<<" ";
    // creatinf the garvage value of the arr
    vector<int> x(5);
    for(auto s:x) cout<<s<<" ";
    // copying 
    vector<int> lk(d);
    for(auto jk:lk) cout<<jk<<" ";
    cout<<jk[1]<<" ";
    // this is the iterator method;
    for(vector<int>::iterator df=d.begin();df!=d.end(),df++) cout<<*(df); 
    for(auto de=d.begin();de!=d.end();de++) cout<<*(de);
    //to delete the lem in the vector
    d.erase(d.begin()+1)
    for(auto sd:d) cout<<sd<<" ";
    d.erase(d.begin(),d.begin()+1)
    for(auto dw:d) cout<<dw<<" ";
    vector<int> qw(2,100);
    gw.insert(gw.begin()+1,230);
    gw.insert(gw.begin(),2,100);
    for(auto fh:gw) cout<<fh<<" ";
    gw.insert(gw.begin()+2,copy.begin(),copy.end());
    for(auto fd:gw) cout<<fd<<" ";
    gw.pop_back();
    for(auto gi:gw) cout<<gi<<" ";


    
}
void lists()
{
    // declaration of the lists 
    
}
int main()
{
    pairs();
    vectors();
    return 0;

    
} // namespace std
