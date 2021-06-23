STL set lower_bound && upper_bound:

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    set<int>s={1,2,3,4,5};
    cout<<*lower_bound(s.begin(),s.end(),2);//2
    cout<<*upper_bound(s.begin(),s.end(),2);//3

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimeze() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimeze();

    set<int>s={1,1,3,3,2,2};

    cout<<s.size()<<endl;//3
    for(auto u:s) cout<<u<<" ";//1 2 3
    cout<<endl<<endl;

    set<int>s1={1,1,3,3,2,2};
    set<int>::iterator it;
    for(it=s1.begin();it!=s1.end();it++) cout<<*it<<" ";//1 2 3
    cout<<endl<<endl;

    set<int>s2={1,1,3,3,2,2};
    s2.clear();
    cout<<s2.empty()<<endl<<endl;//1

    set<int>s3;
    s3.insert(2);
    s3.insert(2);
    s3.insert(3);
    s3.insert(1);

    cout<<s3.size()<<endl;//3
    for(auto u:s3) cout<<u<<" ";//1 2 3
    cout<<endl<<endl;

    set<int>s4;
    s4.insert(2);
    s4.insert(2);
    s4.insert(3);
    s4.insert(1);

    cout<<s4.count(2)<<endl;//1
    cout<<*s4.begin()<<endl;//1
    cout<<*(--s4.end())<<endl;//3
    cout<<*(s4.rbegin())<<endl<<endl;//3

    s4.erase(2);
    cout<<s4.size()<<endl;//2
    for(auto u:s4) cout<<u<<" ";//1 3
    cout<<endl<<endl;

    set<int>s5;
    s5.insert(1);
    s5.insert(2);
    s5.insert(3);
    s5.insert(4);
    s5.insert(5);
    s5.insert(6);

    s5.erase(s5.begin());//1
    s5.erase(--s5.end());//6

    cout<<s5.size()<<endl;
    for(auto u:s5) cout<<u<<" ";//2 3 4 5
    cout<<endl<<endl;

    set<string>s6;
    s6.insert("shariar");
    s6.insert("proma");
    s6.insert("momo");
    s6.insert("sobuj");
    s6.insert("prety");
    s6.insert("nobel");
    s6.insert("shariar");
    s6.insert("proma");
    s6.insert("momo");
    s6.insert("sobuj");
    s6.insert("prety");
    s6.insert("nobel");

    cout<<s6.size()<<endl;//6
    for(auto u:s6) cout<<u<<endl;
    cout<<endl<<endl;
    /*
    momo
    nobel
    prety
    proma
    shariar
    sobuj
    */

    set<pair<int,int>>p;
    p.insert({2,3});
    p.insert({4,1});
    p.insert({4,1});
    p.insert({2,1});
    p.insert({4,3});
    p.insert({5,1});
    p.insert({5,1});
    p.insert({5,4});

    cout<<p.size()<<endl;//6
    for(auto u:p) cout<<u.first<<" "<<u.second<<endl;
    cout<<endl<<endl;
    /*
     2 1
     2 3
     4 1
     4 3
     5 1
     5 4
    */

    set<int,greater<int>>g;
    g.insert(1);
    g.insert(1);
    g.insert(2);
    g.insert(3);
    cout<<g.size()<<endl;//3
    for(auto u:g) cout<<u<<" ";//3 2 1
    cout<<endl<<endl;

    set<string,greater<string>>a;
    a.insert("shariar");
    a.insert("proma");
    a.insert("momo");
    a.insert("sobuj");
    a.insert("prety");
    a.insert("nobel");
    a.insert("shariar");
    a.insert("proma");
    a.insert("momo");
    a.insert("sobuj");
    a.insert("prety");
    a.insert("nobel");

    cout<<s.size()<<endl;//6
    for(auto u:a) cout<<u<<endl;
    cout<<endl<<endl;
    /*
    sobuj
    shariar
    proma
    prety
    nobel
    momo
     */

    set<pair<int,int>,greater<pair<int,int>>>p1;
    p1.insert({2,3});
    p1.insert({4,1});
    p1.insert({4,1});
    p1.insert({2,1});
    p1.insert({4,3});
    p1.insert({5,1});
    p1.insert({5,1});
    p1.insert({5,4});

    cout<<p1.size()<<endl;//6
    for(auto u:p1) cout<<u.first<<" "<<u.second<<endl;
    cout<<endl<<endl;
    /*
    5 4
    5 1
    4 3
    4 1
    2 3
    2 1
    */
    return 0;
}
