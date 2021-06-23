vector<int> v;

v.push_back( 1 );
v.push_back( 2 );
v.push_back( 3 );

cout << v[0] << " " << v[1] << " " << v[2] << endl; /// 1 2 3

v[1] = 3;
cout << v[0] << " " << v[1] << " " << v[2] << endl; /// 1 3 3

cout << v.size() << endl; /// 3
for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " "; /// 1 3 3
cout << endl;

vector <int> v1 = { 2, 3, 4 };

cout << v1.size() << endl; /// 3
for ( int i = 0; i < v1.size(); i++ ) cout << v1[i] << " "; /// 2 3 4
cout << endl;

v.clear();
cout << v.size() << endl; /// 0
cout << v.empty() << endl; /// 1
cout << v1.empty() << endl; /// 0

v1.resize(5);
cout << v1.size() << endl; /// 5
for ( int i = 0; i < v1.size(); i++ ) cout << v1[i] << " "; /// 2 3 4 0 0
cout << endl;

vector<int> a(5);

cout << a.size() << endl; /// 5
for ( int i = 0; i < a.size(); i++ ) cout << a[i] << " "; /// 0 0 0 0 0
cout << endl;

a = v1;

for ( auto u : a ) cout << u << " "; /// 2 3 4 0 0
cout << endl;

vector<int>::iterator it;
for ( it = a.begin(); it != a.end(); it++ ) cout << *it << " "; /// 2 3 4 0 0
cout << endl;

a = { 3, 4, 5, 1, 2 };

sort ( a.begin(), a.end() ); ///O(n*log2(n))

for ( auto u : a ) cout << u << " "; /// 1 2 3 4 5
cout << endl;

sort ( a.rbegin(), a.rend() );

for ( auto u : a ) cout << u << " "; /// 5 4 3 2 1
cout << endl;


a = { 3, 4, 5, 1, 2 };
sort ( a.begin(), a.end(), greater<int>() );

for ( auto u : a ) cout << u << " "; /// 5 4 3 2 1
cout << endl;

a = { 3, 4, 5, 1, 2 };

reverse( a.begin(), a.end() );

for ( auto u : a ) cout << u << " "; /// 2 1 5 4 3
cout << endl;

cout << a.back() << endl; /// 3
a.pop_back(); /// O(1) complexity.
cout << a.back() << endl; /// 4


a = { 3, 4, 5, 1, 2 };
cout << *a.begin() << endl; /// 3

a.erase( a.begin() ); /// O(n) complexity.
for ( auto u : a ) cout << u << " "; /// 4 5 1 2
cout << endl;

a.erase( a.begin()+2 );
for ( auto u : a ) cout << u << " "; /// 4 5 2
cout << endl;

a = { 1, 1, 2, 2, 2, 3, 3 };
unique( a.begin(), a.end() );

for ( auto u : a ) cout << u << " "; /// 1 2 3 2 2 3 3
cout << endl;

a = { 1, 1, 2, 2, 2, 3, 3 };
int n = unique( a.begin(), a.end() ) - a.begin();

cout << n << endl; /// 3
for ( int i = 0; i < n; i++ ) cout << a[i] << " "; /// 1 2 3
cout << endl;

a = { 2, 3, 1, 5 };
cout << max_element( a.begin(), a.end() ) - a.begin() << endl; /// 3
cout << *max_element( a.begin(), a.end() ) << endl; /// 5

cout<<*max_element(a.begin(),a.end())<<endl;//5
cout<<*min_element(a.begin(),a.end())<<endl;//1


//Again

vector<int>v= {2,3,5,5,7,7,1};

sort(v.begin(),v.end());//O(nlog2(n))
int size=unique(v.begin(),v.end())-v.begin();///O(n)

cout<<"Unique Size:"<<size<<endl;
for(int i=0; i<size; i++)
{
    cout<<v[i]<<' ';
}
cout<<endl;

for(auto u:v)cout<<u<<" ";
cout<<endl;

/*
 * Unique Size:5
  1 2 3 5 7
  1 2 3 5 7 7 7
 */

vector<int>v= {2,3,5,5,7,7,1};

cout<<"Maximum value print::"<<endl;
cout<<*max_element(v.begin(),v.end())<<endl;
//or
vector<int>::iterator it=max_element(v.begin(),v.end());
cout<<*it<<endl;

vector<int>::iterator it1=max_element(v.begin()+1,v.begin()+4);
cout<<*it1<<endl;

cout<<"Index=";
int n=max_element(v.begin(),v.end())-v.begin();
cout<<n<<endl;

/*
 * Maximum value print::
   7
   7
   5
   Index=4
 */
2D array:
int row=4,col=5,value=5;
vector<vector<int>>m;

m.resize(row,vector<int>(row,value));

for(int i=0; i<row; i++)
{
    for(int j=0; j<m[i].size(); j++)
    {
        cout<<m[i][j]<<" ";
    }
    cout<<endl;
}

Output:
5 5 5 5
5 5 5 5
5 5 5 5
5 5 5 5

Copy one vector to another vector:
vector<int>v,v1;
v.push_back(1);
v.push_back(2);
v.push_back(3);

v1=v;

for(auto u:v1)
{
    cout<<u<<" ";
}
Output:
1 2 3

Vector assign ():
    vector<int>v;
v.assign(3,4);
for(auto u:v)
{
    cout<<u<<" ";
}
Output:
4 4 4

The syntax for assigning values from an array or list:

vector<int>v;
int a[]= {1,2,3};
v.assign(a,a+3);
for(auto u:v)
{
    cout<<u<<" ";
}
Output:
1 2 3

Syntax for assigning values with initialize list:

vector<int>v;
v.assign({ 1, 2, 3 });
for(auto u:v)
{
    cout<<u<<" ";
}
Output:
1 2 3
The syntax for modifying values from a vector:

vector<int> v;
v.assign(7, 100);
for(auto u:v)
{
    cout<<u<<" ";
}
cout<<endl;
v.assign(v.begin(), v.begin() + 3);
for(auto u:v)
{
    cout<<u<<" ";
}

Output:
100 100 100 100 100 100 100
100 100 100

Insert function:
vector_name.insert(pos,value)

vector<int> v = { 10, 20, 30, 40 };
v.insert(v.begin()+2,1000);//vector_name.insert(pos,value)
v.insert(v.begin(),2000);
for(auto u:v)
{
    cout<<u<<" ";
}
Output:
2000 10 20 1000 30 40

Insert function :
vector_name.insert(position, size, val)

vector<int> v = { 10, 20, 30, 40 };
v.insert(v.begin(),2,2000);//vector_name.insert(position, size, val)
for(auto u:v)
{
    cout<<u<<" ";
}

Insert function:
vector_name.insert(position, iterator1, iterator2)

vector<int> v1 = { 10, 20, 30, 40 };
vector<int> v2;

v2.insert(v2.begin(),v1.begin(),v1.end());//vector_name.insert(position, iterator1, iterator2)
//10 20 30 40
v2.insert(v2.begin(),v1.begin(),v1.begin()+2);//10 20
for(auto u:v2)
{
    cout<<u<<" ";
}
