/*  begin(),end(),operator=(), size(),max_size(),empty(),
    insert(),erase(),swap(),clear(),find(),count(),lower_bound(),
    upper_bound(),equal_range()   etc */

#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<char,int>first;
    for(int i=0;i<5;i++){
        cout<< "Give char key and int value: ";
        int value;
        char key;
        cin>>key>>value;
        first.insert(pair<char,int>(key,value));
    }
    cout<< "First multimap key and value: "<<endl;
    for(multimap<char,int>::iterator it=first.begin();it!=first.end();it++){
        cout<< it->first << " " <<it->second<<endl;
    }

    multimap<char,int>second(first);
    cout<< "Second multimap key and value: "<<endl;
    for(multimap<char,int>::iterator it=second.begin();it!=second.end();it++){
        cout<< it->first << " " <<it->second<<endl;
    }

    multimap<char,int>third;
    third = first;
    cout<< "Third multimap key and value: "<<endl;
    for(multimap<char,int>::iterator it=third.begin();it!=third.end();it++){
        cout<< it->first << " " <<it->second<<endl;
    }

    multimap<char,int>fourth;
    fourth.swap(second);
    cout<< "Fourth multimap key and value: "<<endl;
    while(!fourth.empty()){
        multimap<char,int>::iterator it=fourth.begin();
        cout<< it->first << " " <<it->second<<endl;
        fourth.erase(it);
    }

    cout<< "First multimap size: "<<first.size()<<endl;
    cout<< "First multimap max_size: "<<first.max_size()<<endl;
    if(first.count('c')>0) cout<< "C is a key of first multimap"<<endl;
    if(first.find(10)->second==10) cout<< "10 is find in this multimap"<<endl;

    cout<< "Same key value are: ";
    for(multimap<char,int>::iterator it=first.equal_range('r').first;it!=first.equal_range('r').second;it++){
        cout<< it->second<< " ";
    }
    cout<<endl;

    first.clear();
    cout<< "First size after clear: "<<first.size();
    cout<<endl;

    return 0;
}
