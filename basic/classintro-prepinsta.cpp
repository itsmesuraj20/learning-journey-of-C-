#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
    int length,breath;

    int area(){
        return length*breath;
    }
};

int main()
{
    Rectangle rej;
    int a,b;
    a=rej.length=50;
    b=rej.breath=30;
    cout<<rej.area()<<" "<<endl<<rej.length<<" "<<rej.breath;
    return 0;
}