deque<int>d;
d.push_front(1);
d.push_front(2);
d.push_back(3);
d.push_front(4);
d.push_back(5);

cout<<d.front()<<" "<<d.back()<<endl;//4 5
cout<<"pop front:";
d.pop_front();
for(auto u:d){
cout<<d.front()<<" ";
d.pop_front();
}//2 1 3 5
cout<<endl;
cout<<endl;

d.push_front(1);
d.push_front(2);
d.push_back(3);
d.push_front(4);
d.push_back(5);

cout<<"pop back:";
d.pop_back();
for(auto u:d){
cout<<d.back()<<" ";
d.pop_back();
}//3 1 2 4
cout<<endl;

d.push_front(1);
d.push_front(2);
d.push_front(3);
d.push_back(4);
d.push_back(5);

cout<<d.front()<<" "<<d.back()<<endl;//3 5
d.pop_front();
cout<<d.front()<<" "<<d.back()<<endl;// 2 5
d.pop_back();
cout<<d.front()<<" "<<d.back()<<endl;// 2 4

cout<<d.size()<<endl;//3
cout<<d.empty()<<endl;//0
cout<<d.size()<<endl;
