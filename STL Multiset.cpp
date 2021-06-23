#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimeze() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimeze();

    multiset<int>s;

    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(4);

    cout<<s.size()<<endl;//8
    for(auto u:s){
        cout<<u<<" ";//1 1 1 1 2 3 4 4
    }
    cout<<endl<<s.count(4)<<endl;//2
    s.erase(1);
    for(auto u:s) cout<<u<<" ";//2 3 4 4
    cout<<endl<<endl;

    multiset<int>s1;
    multiset<int>::iterator it;
    s1.insert(1);
    s1.insert(2);
    s1.insert(1);
    s1.insert(3);
    s1.insert(1);
    s1.insert(4);
    s1.insert(1);
    s1.insert(4);
/*
    auto it=s1.find(1);
    s1.erase(it);
    for(auto u:s1) cout<<u<<" ";//1 1 1 2 3 4 4
    cout<<endl<<endl;
    */
    it=s1.find(1);
    s1.erase(it);
    for(auto u:s1) cout<<u<<" ";//1 1 1 2 3 4 4
    cout<<endl<<endl;
    return 0;
}
