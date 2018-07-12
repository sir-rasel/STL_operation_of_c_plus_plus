/*  begin(),end(),size(),push_back(),pop_back(),insert(),at(),erase(),empty(),
    front(),back(),clear(),swap(),capacity(),max_capacity(),resize(),operator=()
    etc */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>first;
    cout << "Enter element in vector"<<endl;
    for(int i=1;i<=5;i++) first.push_back(i);

    cout<< "Element of first vector is using iterator: ";
    for(vector<int>::iterator it=first.begin();it!=first.end();it++){
        cout <<*it<<" ";
    }
    cout<<endl;

    cout<< "Element of first vector is using index: ";
    for(int i=0;i<first.size();i++){
        cout <<first.at(i)<<" ";
    }
    cout<<endl;

    vector<int>second(first);
    cout<< "Element of second vector using pop: ";
    while(!second.empty()) {
        cout<< second.back()<< " ";
        second.pop_back();
    }
    cout<<endl;

    vector<int>third;
    third = first;
    cout<< "Element of third vector using iterator : ";
    for(vector<int>::iterator it=third.begin();it!=third.end();it++){
        cout<< *it << " ";
    }
    cout<<endl;

    vector<int>fourth;
    fourth.swap(third);
    cout<< "Element of fourth vector using index : ";
    for(int i=0;i<fourth.size();i++){
        cout<< fourth[i] << " ";
    }
    cout<<endl;

    cout<< "Size of first: "<<first.size()<<endl;
    cout<< "Capacity of second: "<<second.capacity()<<endl;
    cout<< "Max size of third: "<<third.max_size()<<endl;
    cout<< "Size of fourth: "<<fourth.size()<<endl;

    fourth.clear();
    cout<< "Size of fourth after clear: "<<fourth.size()<<endl;

    vector<int>::iterator it=second.begin();
    second.insert(it,100);
    cout<< "Element of second vector after insert: ";
    while(!second.empty()) {
        cout<< second.back()<< " ";
        second.pop_back();
    }
    cout<<endl;

    first.erase(first.begin()+2);
    first.erase(first.begin(),first.begin()+2);
    cout<< "Element of first vector after erase: ";
    for(vector<int>::iterator it=first.begin();it!=first.end();it++){
        cout <<*it<<" ";
    }
    cout<<endl;

    return 0;
}
