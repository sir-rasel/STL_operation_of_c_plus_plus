/*  begin(),end(),size(),at(),empty(),operator=(),
    front(),back(),swap(),max_size(),fill(),
    etc */

#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,10>first;
    cout << "Enter element in array"<<endl;
    for(int i=0;i<10;i++) first[i]=i;

    cout<< "Element of first array is using index number: ";
    for(int it=0;it<first.size();it++){
        cout <<first[it]<<" ";
    }
    cout<<endl;

    cout<< "Element of first array is using index: ";
    for(int i=0;i<first.size();i++){
        cout <<first.at(i)<<" ";
    }
    cout<<endl;

    array<int,10>second(first);
    cout<< "Element of second array is using iterator: ";
    for(array<int,10>::iterator it=second.begin();it!=second.end();it++){
        cout <<*it<<" ";
    }
    cout<<endl;

    array<int,10>third;
    third=first;
    cout<< "Element of third array is using iterator: ";
    for(array<int,10>::iterator it=third.begin();it!=third.end();it++){
        cout <<*it<<" ";
    }
    cout<<endl;

    array<int,10>fourth;
    fourth.swap(first);
    cout<< "Element of fourth array is using iterator: ";
    for(array<int,10>::iterator it=fourth.begin();it!=fourth.end();it++){
        cout <<*it<<" ";
    }
    cout<<endl;

    cout<< "Size of first: "<<first.size()<<endl;
    cout<< "Max size of third: "<<third.max_size()<<endl;
    cout<< "Size of fourth: "<<fourth.size()<<endl;

    array<int,10>fifth;
    fifth.fill(10);
    cout<< "Element of fifth array is using iterator: ";
    for(array<int,10>::iterator it=fifth.begin();it!=fifth.end();it++){
        cout <<*it<<" ";
    }
    cout<<endl;

    return 0;
}
