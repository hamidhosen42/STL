#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();

    pair<int,int>p;
    p.first=2;
    p.second=5;

    cout<<p.first<<endl;//2
    cout<<p.second<<endl<<endl;//5


    pair<string,int>q;
    q.first="Hamid";
    q.second=5;

    cout<<q.first<<endl;//Hamid
    cout<<q.second<<endl<<endl;//5

    pair<string,vector<int>>x;
    x.first="hamid";
    x.second= {1,2,3};

    cout<<x.first<<endl;//hamid
    for (auto u:x.second)cout<<u<<" ";//1 2 3
    cout<<endl;

    pair<int,int>y;
    y=make_pair(2,3);

    cout<<y.first<<" "<<y.second<<endl<<endl;//2 3

    pair<int,int>a;
    a= {2,3};

    cout<<a.first<<" "<<a.second<<endl<<endl;//2 3

    pair<string,vector<int>>s;
    //s={"hamid",{3,4,5}};
    s.first="hamid",s.second= {3,4,5};

    cout<<s.second.size()<<endl;//3
    cout<<s.first.size()<<endl;//5
    cout<<s.first<<endl;//hamid
    for(auto u:s.second)cout<<u<<" ";//3 4 5
    cout<<endl<<endl;

    pair<int,int>p1,p2,p3,p4;
    p1= {2,3},p2= {3,2};

    if(p1<p2)cout<<"Yes"<<endl<<endl;//yes
    else cout<<"No"<<endl<<endl;

    p3=min(p1,p2);
    cout<<p3.first<<" "<<p3.second<<endl<<endl;//2 3

    p4=max(p1,p2);
    cout<<p4.first<<" "<<p4.second<<endl<<endl;//3 2

    //pair sort
    vector<pair<int,int>>v;

    v.push_back({6,5});
    //v.push_back(make_pair(6,5));
    v.push_back({2,3});
    v.push_back({4,5});
    v.push_back({6,1});
    v.push_back({1,9});

    //sort(v.begin(),v.end());
    //sort(v.rbegin(),v.rend());

    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;
    cout<<endl<<endl;
    /*
    6 5
    2 3
    4 5
    6 1
    1 9
     */

    pair<int,int> c[]= {{6,5},{2,3},{4,5},{6,1},{1,9}};
    sort(c,c+5);
    //sort(c,c+5,greater<int>());

    for(auto u:c)cout<<u.first<<" "<<u.second<<endl;
    cout<<endl<<endl;
    /*
    1 9
    2 3
    4 5
    6 1
    6 5
     */
    vector<pair<string,int>> d;

    d.push_back({"hamid",21});
    d.push_back({"momo",13});
    d.push_back({"hamid",34});
    d.push_back({"hosi",35});
    d.push_back({"hamid",34});

    sort(v.begin(),v.end());

    for(auto u:d) cout<<u.first<<" "<<u.second<<endl;
    cout<<endl<<endl;
    /*
    hamid 21
    momo 13
    hamid 34
    hosi 35
    hamid 34
    */

    int array[]= {1,2,4,5};
    for(auto u:array) cout<<u<<" ";//1 2 4 5
    cout<<endl<<endl;

    vector<pair<string,int>> e;

    e.push_back({"hamid",21});
    e.push_back({"hamid",21});
    e.push_back({"momo",13});
    e.push_back({"momo",13});
    e.push_back({"hamid",34});
    e.push_back({"hosi",35});
    e.push_back({"hamid",34});

    sort(e.begin(),e.end());

    int size=unique(e.begin(),e.end())-e.begin();

    for(int i=0; i<size; i++) cout<<e[i].first<<" "<<e[i].second<<endl;
    cout<<endl<<endl;
    /*
    hamid 21
    hamid 34
    hosi 35
    momo 13
     */

    //cout<<"User Input:";
    pair<int,int>n;
    cin>>n.first>>n.second;//2 3

    cout<<n.first<<" "<<n.second<<endl;//2 3
    return 0;
}
