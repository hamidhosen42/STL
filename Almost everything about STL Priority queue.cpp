#include<bits/stdc++.h>
using namespace std;
#define hamid() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    hamid();

    priority_queue<int> p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);

    cout<<"Size:"<<p.size()<<endl;//4
    cout<<p.top()<<endl;//4
    p.pop();
    cout<<p.top()<<endl;//3
    cout<<endl;

    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);

    cout<<"Element in :";
    while (!p.empty() ){
        cout<<p.top()<<" ";
        p.pop();
    }//4 3 3 2 2 1 1
    cout<<endl;
    cout<<"Size:"<<p.size()<<endl;//0
    cout<<endl;

    cout<<"Comparator use: because acending order:"<<endl;
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(2);
    q.push(3);

    cout<<"Size:"<<q.size()<<endl;
    while (!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }//1 2 2 3 4 5
    cout<<endl;
    cout<<endl;

    cout<<"Pair comparator use:"<<endl;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q1;
    q1.push({1,2});
    q1.push({2,3});
    q1.push({2,4});
    q1.push({4,4});
    q1.push({3,4});

    while (!q1.empty()){
        cout<<q1.top().first<<" "<<q1.top().second<<endl;
        q1.pop();
    }
    /*
     * 1 2
     * 2 3
     * 2 4
     * 3 4
     * 4 4
     */
    cout<<"Size:"<<q1.size()<<endl;//0
    cout<<endl;

    cout<<"Only pair use:"<<endl;
    priority_queue<pair<int,int>> q2;
    q2.push({1,2});
    q2.push({2,3});
    q2.push({2,4});
    q2.push({4,4});
    q2.push({3,4}) ;

    while (!q2.empty()){
        cout<<q2.top().first<<" "<<q2.top().second<<endl;
        q2.pop();
    }
    /*
     * 4 4
     * 3 4
     * 2 4
     * 2 3
     * 1 2
     */

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define hamid() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    hamid();

    priority_queue<pair<int,int>> q2;
    q2.push({1,-2});
    q2.push({2,-3});
    q2.push({2,-4});
    q2.push({4,-4});
    q2.push({3,-4}) ;

    while (!q2.empty()){
        cout<<q2.top().first<<" "<<q2.top().second<<endl;
        q2.pop();
    }
    /*
     * 4 -4
     * 3 -4
     * 2 -3
     * 2 -4
     * 1 -2
     */

    cout<<endl;

    cout<<"contest program :for 1st value grater and 1st value equal then second value small:"<<endl;

    priority_queue<pair<int,int>> q;
    q.push({1,-2});
    q.push({2,-3});
    q.push({2,-4});
    q.push({4,-4});
    q.push({3,-4}) ;

    while (!q.empty()){
        cout<<q.top().first<<" "<<q.top().second*-1<<endl;
        q.pop();
    }
    /*
     * 4 4
     * 3 4
     * 2 3
     * 2 4
     * 1 2
     */
    cout<<endl;
    
    return 0;
}
