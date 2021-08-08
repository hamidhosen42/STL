queue<int>q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);

cout<<q.front()<<endl;//1
q.pop();

cout<<q.front()<<endl<<endl;//2

cout<<"Queue size:"<<q.size()<<endl<<endl;//4

cout<<"Queue all element print:"<<endl;
while (!q.empty()){
cout<<q.front()<<endl;
q.pop();
}
cout<<endl<<endl;
/*
  2
  3
  4
  5
 */
