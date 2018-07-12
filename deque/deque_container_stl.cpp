/*  begin(),end(),assign(),at(),operator=(),back(),front(),
    size(),max_size(),empty(),push_back(),push_front(),
    pop_back(),pop_front(),insert(),erase(),swap(),clear(),
    etc */

#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int>first;
    for(int i=0;i<5;i++){
        first.push_back(i);
    }
    for(int i=5;i<10;i++){
        first.push_front(i);
    }

    cout<< "First element using iterator: ";
    for(deque<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    cout<< "First element using index: ";
    for(int i=0;i<first.size();i++){
        cout<< first.at(i)<< " ";
    }
    cout<<endl;

    deque<int>second(first);
    cout<< "second element using iterator: ";
    for(deque<int>::iterator it=second.begin();it!=second.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    deque<int>third;
    third = second;
    cout<< "third element using pop_back: ";
    while(!third.empty()){
        cout << third.back()<< " ";
        third.pop_back();
    }
    cout<<endl;

    deque<int>fourth;
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
    for(deque<int>::iterator it=second.begin();it!=second.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.erase(first.begin(),first.begin()+3);
    cout<< "First element after erasing: ";
    for(deque<int>::iterator it=first.begin();it!=first.end();it++){
        cout<< *it<< " ";
    }
    cout<<endl;

    first.clear();
    cout<< "First size after clear: "<<first.size();
    cout<<endl;

    return 0;
}
