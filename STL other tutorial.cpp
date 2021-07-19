//C++_STL1_introduction_to_STL
//C++_STL2_vector_1__Bangla

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

#define SIZE 3
using namespace std;

int main()
{
    int array[3];
    array[0]=34;
    array[1]=10;

    vector<int>vec;

    vec.push_back(34);//vec[0]=34
    vec.push_back(10);//vec[1]=10
    vec.push_back(11);

    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<endl;

    vec[0]=50;

    cout<<vec[0]<<endl;

    return 0;
}

//C++_STL3_vector_2_printing_vector

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    vector<int>vec;

    vec.push_back(34);//vec[0]=34
    vec.push_back(10);//vec[1]=10
    vec.push_back(11);

    vec[0]=50;

    cout<<vec.size()<<endl;

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }

    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec(3,0);

    vec.push_back(45);

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }

    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    for(int i=1;i<=5;i++)
    {
        vec.push_back(i);
    }

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";
    }
    puts("");

    it=vec.begin();
    it++;

    cout<<*it<<endl;

    return 0;
}

//C++_STL4_vector_3_more_on_iterator

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    for(int i=1;i<=5;i++)
    {
        vec.push_back(i);
    }

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";
    }
    puts("");

    for(it=vec.begin();it!=vec.end();it++)//vec.begin=1
    {
        cout<<*it<<endl;
    }

    return 0;
}

//C++_STL5_vector_4_sort

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    vec.push_back(10);
    vec.push_back(50);
    vec.push_back(30);
    vec.push_back(20);
    vec.push_back(40);
    vec.push_back(100);

    sort(vec.begin(),vec.end());

    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

bool myfnc(int a,int b)
{
    return a>b;
}

int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    vec.push_back(10);
    vec.push_back(50);
    vec.push_back(30);
    vec.push_back(20);
    vec.push_back(40);
    vec.push_back(100);

    sort(vec.begin(),vec.end(),myfnc);

    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>vec;
    vector<int>::iterator it;

    vec.push_back(10);
    vec.push_back(50);
    vec.push_back(30);
    vec.push_back(20);
    vec.push_back(40);
    vec.push_back(100);

    sort(vec.begin(),vec.begin()+3);

    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}

//C++_STL6_list

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    list<float>li;
    list<float>::iterator it;

    li.push_back(12);
    li.push_back(34);
    li.push_front(20);
    li.push_front(50);
    li.push_back(60);

    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}

///C++_STL7_more_on_list

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    list<float>li;
    list<float>::iterator it;

    li.push_back(12);
    li.push_back(34);
    li.push_front(20);
    li.push_front(50);
    li.push_back(60);

    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<endl;
    }
    puts("");

    cout<<"List size:"<<li.size()<<endl;
    puts("");

    li.reverse();

    cout<<"Reverse function:";
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<"\t";
    }
    puts("");

    li.clear();

    cout<<"list element clear:"<<endl;

    cout<<"Size:"<<li.size()<<endl;
    return 0;
}

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    list<int>mylist(4,3);
    list<int>::iterator it;

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }

    puts(" ");
    return 0;
}

//C++_STL8_list_find___insert

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    int array[]={2,5,4,3,9};

    list<int>li(array,array+5);
    list<int>::iterator it;

    it=li.begin();
    it++;

    cout<<*it<<endl;

    li.insert(it,7);

    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<"\t";
    }

    cout<<"\n";

    return 0;
}

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    int array[]={2,5,4,3,9};

    list<int>li(array,array+5);
    list<int>::iterator it;

    it=find(li.begin(),li.end(),3);

    cout<<*it<<endl;

    li.insert(it,7);

    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<"\t";
    }

    cout<<"\n";

    return 0;
}

//C++_STL9_list_find

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    int array[]={2,5,4,3,9};

    list<int>li(array,array+5);
    list<int>::iterator it;

    it=find(li.begin(),li.end(),22);

    if(it==li.end())
    {
        cout<<"NOT Fount"<<endl;
    }
    else
    {
        cout<<"Font"<<endl;
    }

    return 0;
}


#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    int array[]={2,5,4,3,9};

    list<int>li(array,array+5);
    list<int>::iterator it;

    it=li.begin();
    li.erase(it);

    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<"\n";

    return 0;
}

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    int array[]={2,5,4,3,9};

    list<int>li(array,array+5);
    list<int>::iterator it;

    it=find(li.begin(),li.end(),3);
    li.erase(it);

    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<"\n";

    return 0;
}

//C++_STL10_overview_vector_list
//C++_STL11_list_pop_front_popbackempty

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    int array[]={1,3,2,4,5};

    list<int>mylist;

    if(mylist.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Filled"<<endl;
    }
    
    return 0;
}

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    int array[]={1,3,2,4,5};
    list<int>mylist(array,array+5);
    list<int>::iterator it;

    mylist.pop_front();
    mylist.pop_back();
    mylist.pop_back();
    mylist.pop_back();

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }

    cout<<"\n";

    return 0;
}

//C++_STL12sort

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    int array[]={4,2,3,1,9};

    sort(array,array+5);

    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<"\t";
    }
    puts(" ");

    return 0;
}

//STL_C++_13Map

#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
    map<string,int>m;

    m["dipta"]=45;
    m["arnob"]=47;
    m["hamid"]=90;
    m.insert(make_pair("hosen",78));

    cout<<m["hamid"]<<endl;
    
    return 0;
}

#include <iostream>
#include <cstdio>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    map<string,int>m;
    map<string,int>::iterator it;

    m["dipta"]=45;
    m["arnob"]=47;
    m["hamid"]=90;
    m.insert(make_pair("hosen",78));

    it=m.begin();
    it++;

    cout<<it->first<<endl;

    return 0;
}

#include <iostream>
#include <cstdio>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    map<string,int>m;
    map<string,int>::iterator it;

    m["dipta"]=45;
    m["arnob"]=47;
    m["hamid"]=90;
    m.insert(make_pair("hosen",78));

    it=m.begin();
    it++;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}

//STL_C++_14Pair

#include <iostream>
#include <cstring>
#include <cstdio>
#include <utility>

using namespace std;

int main()
{
    pair<string,int> p("Hamid",21);

    //p.first="Hamid";
    //p.second=34;

    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}

#include <iostream>
#include <cstdio>
#include <utility>
#include <vector>
#include <cstring>
#include <iterator>

using namespace std;

int main()
{
    vector<pair<int,string>>v;
    vector<pair<int,string>>::iterator it;


    v.push_back(make_pair(21,"Hamid"));
    v.push_back(make_pair(22,"Hosen"));

    cout<<v[0].first<<endl;

    for(it=v.begin();it!=v.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    puts(" ");

    return 0;
}

//STL_C++_15Set

#include <iostream>
#include <cstdio>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    set<int>s;
    set<int>::iterator it;

    s.insert(10);
    s.insert(3);
    s.insert(5);

    s.erase(s.find(10));//remove

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    set<string>s;
    set<string>::iterator it;

    s.insert("Hamid");
    s.insert("Hosen");
    s.insert("Azad");

    pair<set<string>::iterator,bool>p;
    s.insert("Hamid");

    if(p.second== false)
    {
        cout<<"Can't inserted."<<endl;
    }
    else
    {
       cout<<"Inserted"<<endl;
    }

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}

//STL_C++16Stack

#include <iostream>
#include <cstdio>
#include <set>
#include <iterator>
#include <stack>

using namespace std;

int main()
{
    stack<int>s;

    s.push(12);
    s.push(45);
    s.push(60);

    s.pop();

    cout<<s.top()<<endl;

    return 0;
}

#include <iostream>
#include <cstdio>
#include <set>
#include <iterator>
#include <stack>

using namespace std;

int main()
{
    stack<int>s;

    s.push(12);
    s.push(45);
    s.push(60);

    while (!s.empty())
    {
        int x;
        x=s.top();
        cout<<x<<" ";
        s.pop();

    }

    return 0;
}

//STL_C++17Priority_Queue

#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int>p;

    p.push(23);
    p.push(20);
    p.push(15);
    p.push(45);

    while (!p.empty())
    {
        int x;
        x=p.top();

        cout<<x<<" ";
        
        p.pop();
    }

    return 0;
}

C:\Users\INFINIE\CLionProjects\untitled\cmake-build-debug\untitled.exe
45 23 20 15
Process finished with exit code 0
  
  
//STL_C++___18_MultiSet
  
  
#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
    multimap<string,int> m;
    multimap<string,int>::iterator it;

    m.insert(make_pair("Hamid",32));
    m.insert(make_pair("Hamid",32));
    m.insert(make_pair("Hamid",32));
    m.insert(make_pair("Hamid",32));
    m.insert(make_pair("Hosen",45));

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}


C:\Users\INFINIE\CLionProjects\untitled\cmake-build-debug\untitled.exe
Hamid 32
Hamid 32
Hamid 32
Hamid 32
Hosen 45

Process finished with exit code 0
  
  
#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
    multiset<int>m;
    multiset<int>::iterator it;

    m.insert(100);
    m.insert(100);
    m.insert(100);
    m.insert(100);
    m.insert(200);

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}

//STL_C++_19binary_search%2C_upper_bound%2C_lower_bound


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> v={1,3,5,8,9,12};

    bool ans= binary_search(v.begin(),v.end(),5);

    if(ans)
    {
        cout<<"fount"<<endl;
    }
    else
    {
        cout<<"Not fount"<<endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector <int> v={1,3,5,8,9,12};

    //vector<int>::iterator it=lower_bound(v.begin(),v.end(),6);
    auto it=lower_bound(v.begin(),v.end(),6);

    cout<<*it<<endl;
    cout<<"Indexing:";

    cout<<distance(v.begin(),it)<<endl;
    cout<<it-v.begin()<<endl;//same

    return 0;
}

C:\Users\INFINIE\CLionProjects\untitled\cmake-build-debug\untitled.exe
8
Indexing:3
3

Process finished with exit code 0
  
  
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector <int> v={1,3,5,8,9,12};

    //vector<int>::iterator it=lower_bound(v.begin(),v.end(),6);
    auto it=lower_bound(v.begin(),v.end(),13);

    if(it==v.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }

    return 0;
}

C:\Users\INFINIE\CLionProjects\untitled\cmake-build-debug\untitled.exe
Not found

Process finished with exit code 0
  
  
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> v={1,3,5,8,9,12};

    //vector<int>::iterator it=lower_bound(v.begin(),v.end(),6);
    auto it=upper_bound(v.begin(),v.end(),5);

    if(it==v.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<to_string(*it)<<endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    vector <int> v={1,3,5,8,9,12};
    set<int>s(v.begin(),v.end());

    auto it=s.lower_bound(3);

    if(it==s.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<to_string(*it)<<endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    vector <int> v={1,3,3,3,5,8,9,12};

    auto it=lower_bound(v.begin(),v.end(),3);

    cout<<distance(v.begin(),it)<<endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    vector <int> v={1,3,3,3,5,8,9,12};

    auto it=upper_bound(v.begin(),v.end(),3);

    cout<<distance(v.begin()+1,it)<<endl;
    cout<<(it-v.begin()-1)<<endl;

    return 0;
}


#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iterator>
#include <set>
#include <vector>

using namespace std;

multiset<int>::iterator firstLessThan(const multiset<int>& ms,int value)
{
    auto it=ms.lower_bound(value);

    if(it==ms.end())
    {
        --it;
    }

    while (it!=ms.begin()&& *it>=value)
    {
        --it;
    }

    return *it>=value?ms.end():it;
}

int main()
{
    vector<int> v={1,3,3,3,3,3,3,5,8,9,12};
    multiset<int>s(v.begin(),v.end());

    auto it=firstLessThan(s,7);

    cout<<(it==s.end()?"not found":to_string(*it))<<endl;

    return 0;
}

//STL_C_20Bangla_Bitset%2C_using_Bitset_in_Sieve_s_algorithm


#include <iostream>
#include <bitset>

#define MAX 8

using namespace std;

int main()
{
    bitset<MAX> b;

    b.set();

    cout<<b<<endl;
    
    b.reset();

    cout<<b<<endl;

    return 0;
}


#include <iostream>
#include <bitset>

#define MAX 8

using namespace std;

int main()
{
    bitset<MAX> b(7);

    cout<<b<<endl;

    return 0;
}


#include <iostream>
#include <bitset>
#include <cstring>

#define MAX 8

using namespace std;

int main()
{
    bitset<MAX> b(7);
    bitset<MAX>c(string("1101"));

    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"Index c[0]="<<c[0]<<endl;

    c[2]=0;
    cout<<c<<endl;

    return 0;
}


#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm>

#define MAX 8

using namespace std;

int main()
{
    bitset<MAX>c(string("1101"));
    
    cout<<c.size()<<endl;
    cout<<"Total 1 count:"<<c.count()<<endl;
    cout<<"Total 0 count:"<<c.size()-c.count()<<endl;
    
    return 0;
}


#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm>

#define MAX 8

using namespace std;

int main()
{
    bitset<MAX>c(string("1101"));

    if(c.any())
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }


    return 0;
}


#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm>

#define MAX 8

using namespace std;

int main()
{
    bitset<MAX>c(string("1101"));

    if(c.none())
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }


    return 0;
}


#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm>

#define MAX 8

using namespace std;

int main()
{
    bitset<MAX>c(string("1101"));

    c.set(1);
    cout<<c<<endl;

    c.reset(0);
    cout<<c<<endl;

    return 0;
}


#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm>

#define MAX 4

using namespace std;

int main()
{
    bitset<MAX>b(string("1010"));

    cout<<b<<endl;

    b.flip();
    cout<<b<<endl;
    
    return 0;
}


#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm>

#define MAX 4

using namespace std;

int main()
{
    bitset<MAX>b(string("0011"));

    b=b<<2;//b<<=2
    cout<<b<<endl;

    b>>=2;
    cout<<b<<endl;

    return 0;
}


#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm>

#define MAX 4

using namespace std;

int main()
{
    bitset<MAX>b(string("0011"));
    bitset<MAX>a(string("1100"));

    cout<<(a==b)<<endl;

    return 0;
}


#include <iostream>
#include <bitset>
#include <cstring>
#include <algorithm>

#define MAX 4

using namespace std;

int main()
{
    bitset<MAX>b(string("0011"));
    bitset<MAX>a(string("1100"));

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;

    return 0;
}
