#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>

using namespace std;

void explainPairs(){
    //pair
    pair <int,string> p = {12,"hi"};
    cout<<p.second<<endl;

    //pair inside pair
    pair <int,pair<int,int>> pr = {12,{1,2}};
    cout<<pr.second.first<<endl;

    //array of pair
    pair <int,double> arr[10] = {{12,24},{36,48}};
    cout<<arr[1].second;
}

void explainVectors(){
    // vector<pair<int,int>> v ={{10,20},{30,40}}; 
    // v.push_back({60,10});
    // v.emplace_back(60,10); //no curly braces
    // cout<<v[1].first;



    // //ITERATORS
    // vector<int> vec={12,24,2,66};
    // //begin will point to first memore loc
    // vector<int>::iterator it = vec.begin();
    // it++;
    // cout<<*(it)<<" ";
    
    // //end will point to address after last memory loc
    // it=vec.end();
    // it--;
    // cout<<*(it)<<" ";
    // cout<<vec.back();

    // //LOOP
    // vector<int> vec={12,24,2,66};

    // for(vector<int>::iterator it=vec.begin(); it!=vec.end(); it++){
    //     cout<<*(it)<<" ";
    // }

    // for(auto it=vec.begin(); it!=vec.end(); it++){
    //     cout<<*(it)<<" ";
    // }

    // for(auto charan: vec){
    //     cout<<charan<<"*";
    // }

    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }

    // vector<int> vec={12,24,2,66};

    // vec.erase(vec.begin()+1,vec.begin()+3);

    // for(auto it: vec){
    //     cout<<it<<" ";
    // }

    vector<int> vec={12,24,2,66};

    vec.insert(vec.begin(),3,0);
    cout<<vec.front();
    
    // for(auto it: vec){
    //     cout<<it<<" ";
    // }

}

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(1);
    ls.emplace_front(0);

    // cout<<"is empty? "<<ls.empty();
    // cout<<ls.size();

    list<int> names = {99,6,77};
    ls.swap(names);
    
    for(auto it: ls){
        cout<<it<<" ";
    }

    for(auto it: names){
        cout<<it<<" ";
    }
}

void explainStack(){
    stack<string> st;
    st.push("charan");
    st.emplace("bs");
    st.push("hey");
    // cout<<st.top();
}

void explainQueue(){
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
 
    cout<<qu.front();
    qu.pop();
    cout<<qu.front();
}

void explainPriorityQueue(){
    // priority_queue<int> pq; //max heap
    priority_queue <int, vector<int>, greater<int>> pq; //min heap
    pq.push(20);
    pq.push(100);
    pq.push(1);
    pq.push(3);
    cout<<pq.top();
}

void explainSet(){
    set<int> st;
    st.insert(2);
    st.insert(1);
    st.insert(1);
    st.insert(0); 
    st.insert(22);
    st.insert(10);

    // auto it = st.find(2);
    // cout<<*it;

    // auto it1 = st.find(1);
    // auto it2 = st.find(22);
    // st.erase(it1,it2);

    // for(auto it: st){
    //     cout<<it<<" ";
    // }

    int cnt = st.count(101);
    cout<<cnt;
}

void explainMSet(){
    multiset<int> st;
    st.insert(10);
    st.insert(1);
    st.insert(1);
    st.insert(12);
    st.insert(11);
    // st.erase(st.find(1), st.find(1));
    for(auto it:st){
        cout<<it<<" ";
    }

}


int main(){
    // explainPairs();
    // explainVectors();
    // explainList();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainSet();
    // explainMSet();
}