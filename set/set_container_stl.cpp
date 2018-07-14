/*  begin(),end(),operator=(), size(),max_size(),empty(),
    insert(),erase(),swap(),clear(),find(),count(),lower_bound(),
    upper_bound()   etc */

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int>first;
    for(int i=0;i<5;i++){
        first.insert(i);
    }

    cout<< "First element using iterator: ";
    for(set<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    set<int>second(first);
    cout<< "second element using iterator: ";
    for(set<int>::iterator it=second.begin();it!=second.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    set<int>third;
    third = second;
    cout<< "third element using pop_back: ";
    while(!third.empty()){
        set<int>::iterator it = third.begin();
        cout << *it<< " ";
        third.erase(it);
    }
    cout<<endl;

    set<int>fourth;
    fourth.swap(second);
    cout<< "fourth element using pop_front: ";
    while(!fourth.empty()){
        set<int>::iterator it = fourth.begin();
        cout << *it<< " ";
        fourth.erase(it);
    }
    cout<<endl;

    cout<< "Size of first: "<<first.size()<<endl;
    cout<< "Max Size of first: "<<first.max_size()<<endl;

    set<int>fifth(first);
    set<int>::iterator itlow,itup;
    itlow = fifth.lower_bound(2);
    itup = fifth.upper_bound(4);
    fifth.erase(itlow,itup);
    cout<< "fifth element using iterator after erase: ";
    for(set<int>::iterator it=fifth.begin();it!=fifth.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    itlow = first.find(4);
    if(*itlow==4) cout<< 4 << " find in first set"<<endl;
    else cout<< 4 << " don't find in first set"<<endl;

    first.clear();
    cout<< "First size after clear: "<<first.size();
    cout<<endl;

    return 0;
}
