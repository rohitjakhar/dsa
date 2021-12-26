#include <iostream>
using namespace std;


int main()
{
    int a[4] = {1, 2, 3, 4};

    // using for each
    cout<<"Using For Each: \n";
    for(int i: a) {
        cout<<i;
        cout<<"\n";
    }

    // using for loop
    cout<<"\nUsing For Loop: \n";
    for(unsigned int i=0; i< (sizeof(a)/sizeof(*a)); i++){
        cout<<a[i] << "\n";
    }
    return 0;
}
