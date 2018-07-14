/*  begin(),end(),operator=(), size(),max_size(),empty(),
    insert(),erase(),swap(),clear(),find(),count(),lower_bound(),
    upper_bound()   etc */

#include <iostream>
#include <set>
using namespace std;

int main(){
    multiset<int>first;
    for(int i=0;i<5;i++){
        first.insert(i);
    }
    for(int i=0;i<5;i++){
        first.insert(i);
    }

    cout<< "First element using iterator: ";
    for(multiset<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    multiset<int>second(first);
    cout<< "second element using iterator: ";
    for(multiset<int>::iterator it=second.begin();it!=second.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    multiset<int>third;
    third = second;
    cout<< "third element using pop_back: ";
    while(!third.empty()){
        multiset<int>::iterator it = third.begin();
        cout << *it<< " ";
        third.erase(it);
    }
    cout<<endl;

    multiset<int>fourth;
    fourth.swap(second);
    cout<< "fourth element using pop_front: ";
    while(!fourth.empty()){
        multiset<int>::iterator it = fourth.begin();
        cout << *it<< " ";
        fourth.erase(it);
    }
    cout<<endl;

    cout<< "Size of first: "<<first.size()<<endl;
    cout<< "Max Size of first: "<<first.max_size()<<endl;
    cout<< "3 appears in first: "<<first.count(3)<< " times" <<endl;

    multiset<int>fifth(first);
    multiset<int>::iterator itlow,itup;
    itlow = fifth.lower_bound(2);
    itup = fifth.upper_bound(4);
    fifth.erase(itlow,itup);
    cout<< "fifth element using iterator after erase: ";
    for(multiset<int>::iterator it=fifth.begin();it!=fifth.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    itlow = first.find(4);
    if(*itlow==4) cout<< 4 << " find in first multiset"<<endl;
    else cout<< 4 << " don't find in first multiset"<<endl;

    first.clear();
    cout<< "First size after clear: "<<first.size();
    cout<<endl;

    return 0;
}
