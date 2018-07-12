/*  begin(),end(),assign(),at(),operator=(),back(),front(),
    size(),max_size(),empty(),push_back(),push_front(),reverse(),
    pop_back(),pop_front(),insert(),erase(),swap(),clear(),splice(),
    merge(),sort(),unique(),remove(),advance()     etc */

#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>first;
    for(int i=0;i<5;i++){
        first.push_back(i);
    }
    for(int i=5;i<10;i++){
        first.push_front(i);
    }

    cout<< "First element using iterator: ";
    for(list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    list<int>second(first);
    cout<< "second element using iterator: ";
    for(list<int>::iterator it=second.begin();it!=second.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    list<int>third;
    third = second;
    cout<< "third element using pop_back: ";
    while(!third.empty()){
        cout << third.back()<< " ";
        third.pop_back();
    }
    cout<<endl;

    list<int>fourth;
    fourth.swap(second);
    cout<< "fourth element using pop_front: ";
    while(!fourth.empty()){
        cout << fourth.front()<< " ";
        fourth.pop_front();
    }
    cout<<endl;

    cout<< "Size of first: "<<first.size()<<endl;
    cout<< "Max Size of first: "<<first.max_size()<<endl;

    second.insert(second.begin(),10);
    cout<< "second element after insert: ";
    for(list<int>::iterator it=second.begin();it!=second.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    list<int>::iterator it = first.begin();
    advance(it,3);
    first.erase(first.begin(),it);
    cout<< "First element after erasing: ";
    for(list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.merge(second);
    cout<< "First element after merging: ";
    for(list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.sort();
    cout<< "First element after sorting: ";
    for(list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.reverse();
    cout<< "First element after reversing: ";
    for(list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.remove(5);
    cout<< "First element after removing 5 element: ";
    for(list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.push_back(5);
    first.unique();
    cout<< "First element after unique element: ";
    for(list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    third.splice(third.begin(),first,it);
    cout<< "third element after splice: ";
    while(!third.empty()){
        cout << third.back()<< " ";
        third.pop_back();
    }
    cout<<endl;
    cout<< "First element after splice: ";
    for(list<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.clear();
    cout<< "First size after clear: "<<first.size();
    cout<<endl;

    return 0;
}
