/*  begin(),end(),assign(),operator=(),front(),
    size(),max_size(),empty(),push_front(),reverse(),
    pop_front(),insert_after(),erase_after(),swap(),clear(),
    splice_after(),merge(),sort(),unique(),remove(),before_begin()    etc */

#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    forward_list<int>first;
    for(int i=0;i<5;i++){
        first.push_front(i);
    }
    cout<< "First element using iterator: ";
    for(forward_list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    forward_list<int>second(first);
    cout<< "second element using iterator: ";
    for(forward_list<int>::iterator it=second.begin();it!=second.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    forward_list<int>third;
    third = second;
    cout<< "third element using pop_front: ";
    while(!third.empty()){
        cout << third.front()<< " ";
        third.pop_front();
    }
    cout<<endl;

    forward_list<int>fourth;
    fourth.swap(second);
    cout<< "fourth element using pop_front: ";
    while(!fourth.empty()){
        cout << fourth.front()<< " ";
        fourth.pop_front();
    }
    cout<<endl;

    cout<< "Max Size of first: "<<first.max_size()<<endl;

    second.insert_after(second.before_begin(),10);
    cout<< "second element after insert: ";
    for(forward_list<int>::iterator it=second.begin();it!=second.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    forward_list<int>::iterator it = first.begin();
    advance(it,3);
    first.erase_after(first.begin(),it);
    cout<< "First element after erasing: ";
    for(forward_list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.merge(second);
    cout<< "First element after merging: ";
    for(forward_list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.sort();
    cout<< "First element after sorting: ";
    for(forward_list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.reverse();
    cout<< "First element after reversing: ";
    for(forward_list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.remove(5);
    cout<< "First element after removing 5 element: ";
    for(forward_list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.push_front(5);
    first.unique();
    cout<< "First element after unique element: ";
    for(forward_list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    third.splice_after(third.before_begin(),first,first.begin());
    cout<< "third element after splice: ";
    while(!third.empty()){
        cout << third.front()<< " ";
        third.pop_front();
    }
    cout<<endl;
    cout<< "First element after splice: ";
    for(forward_list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.clear();
    if(first.empty()) cout << "First is clear"<<endl;
    cout<<endl;

    return 0;
}
