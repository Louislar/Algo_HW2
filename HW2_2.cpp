#include<iostream>

using namespace std;

void hanoi(int n, char a, char b, char c)
{
    if(n==1)
    {
        cout<<"Move disk 1 from "<<a<<" to "<<c<<endl;
        return;
    }

    //put n-1 plate from a to b
    hanoi(n-1, a, c, b);

    cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;

    //put n-1 plate from b to c
    hanoi(n-1, b, a, c);
}

int main()
{
    int n=1;
    cin>>n;
    hanoi(n, 'A', 'B', 'C');
}
