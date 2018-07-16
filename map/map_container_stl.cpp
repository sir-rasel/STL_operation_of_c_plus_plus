/*  begin(),end(),operator=(), operator[],at(),size(),max_size(),empty(),
    insert(),erase(),swap(),clear(),find(),count(),lower_bound(),
    upper_bound()   etc */

#include <iostream>
#include <map>
using namespace std;

int main(){
    map<char,int>first;
    for(int i=0;i<5;i++){
        cout<< "Give char key and int value: ";
        int value;
        char key;
        cin>>key>>value;
        first.insert(pair<char,int>(key,value));
    }
    cout<< "First map key and value: "<<endl;
    for(map<char,int>::iterator it=first.begin();it!=first.end();it++){
        cout<< it->first << " " <<it->second<<endl;
    }

    map<char,int>second(first);
    cout<< "Second map key and value: "<<endl;
    for(map<char,int>::iterator it=second.begin();it!=second.end();it++){
        cout<< it->first << " " <<it->second<<endl;
    }

    map<char,int>third;
    third = first;
    cout<< "Third map key and value: "<<endl;
    for(map<char,int>::iterator it=third.begin();it!=third.end();it++){
        cout<< it->first << " " <<it->second<<endl;
    }

    map<char,int>fourth;
    fourth.swap(second);
    cout<< "Fourth map key and value: "<<endl;
    while(!fourth.empty()){
        map<char,int>::iterator it=fourth.begin();
        cout<< it->first << " " <<it->second<<endl;
        fourth.erase(it);
    }

    cout<< "First map size: "<<first.size()<<endl;
    cout<< "First map max_size: "<<first.max_size()<<endl;
    if(first.count('c')>0) cout<< "C is a key of first map"<<endl;
    if(first.find(10)->second==10) cout<< "10 is find in this map"<<endl;

    first.clear();
    cout<< "First size after clear: "<<first.size();
    cout<<endl;

    return 0;
}
