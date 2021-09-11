stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);

cout<<"SIZE:"<<st.size()<<endl;

cout<<st.top()<<endl;//5
st.pop();//top element delete
cout<<st.top()<<endl;//4
cout<<"Stack all element print:"<<endl;

while (!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}//4 3 2 1
