#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimeze() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimeze();

    map<string,int>m; //map<index,value>
    m["hamid"]=1;
    m["hosen"]=2;
    m["azad"]=3;
    m["fahim"]=9;

    cout<<m["fahim"]<<endl<<endl;//9

    map<string,string>genter;
    genter["hamid"]="male";
    genter["momo"]="female";

    cout<<genter["hamid"]<<" "<<genter["momo"]<<endl<<endl;//male female

    map<string,int>p1;
    cout<<p1["hamid"]<<endl<<endl;//0

    map<string,string>p2;
    cout<<p2["hamid"]<<endl<<endl;//

    vector<long long >v= {1,2324352352,452234345,2324352352,2324352352};
    map<long long,int>p3;

    //for(int i=0;i<v.size();i++) p3[v[i]]++;
    for(auto u:v)p3[u]++;
    cout<<p3[2324352352]<<endl<<endl;//3

    vector<long long >v1= {1,2324352352,452234345,2324352352,2324352352};
    map<long long,int>p4;

    for(auto u:v1) p4[u]++;
    for(auto u:p4) cout<<u.first<<" "<<u.second<<endl;
    cout<<endl<<endl;
    /*
     1 1
     452234345 1
     2324352352 3
     */

    map<string,int>id;

    id["shahriar"]=1;//log2(n)
    id["momo"]=3;
    id["sharif"]=5;
    id["prety"]=5;
    id["prety"]=6;
    id["dima"]=9;

    for(auto u:id) cout<<u.first<<" "<<u.second<<endl;
    cout<<endl<<endl;
    /*
     dima 9
     momo 3
     prety 6
     shahriar 1
     sharif 5
     */

    map<int,string>name;
    name[1]="Hamid";
    name[2]="Hosen";//log2(size of map)
    name[3]="Azad";

    cout<<name[3]<<endl<<endl;//log2(3)//Azad

    //unique value
    map<int,bool>vis;
    vector<int>v2= {2,2,1,1,3};

    for(auto u:v2) vis[u]=1;//n*log2(n)
    for(auto u:vis) cout<<u.first<<" "<<u.second<<endl;//male male
    cout<<endl<<endl;
    /*
     1 1
     2 1
     3 1
    */

    map<string,string> gen;
    gen["Hamid"]="male";
    gen["Hosen"]="male";
    gen["momo"]="female";

    cout<<gen["Hamid"]<<" "<<gen["Hosen"]<<endl<<endl;

    map<string,int>m1;
    m1.insert(make_pair("Hamid",21));
    m1.insert(pair<string,int>("Hosen",22));

    cout<<m1["Hamid"]<<" "<<m1["Hosen"]<<endl<<endl;//21 22

    vector<map<string,int>>v3;

    map<string,int>c;
    c["Hamid"]=3;
    v3.push_back(c);
    cout<<v3[0]["Hamid"]<<endl<<endl;//3

    map<int,int>h;
    h[1]=1;
    h[2]=2;
    h[3]=1;
    h[3]=2;

    cout<<h.size()<<endl<<endl;//3
    return 0;
}
