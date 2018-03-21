#include<iostream>

using namespace std;

int bubble_sort(int a[], int n)
{

}

int main()
{
    int test_n=0; // How many test data
    cin>>test_n;
    for(int q=0;q<test_n;q++)
    {
        // input
        int array_length=0;
        cin>>array_length;
        int array1[array_length]={0};
        for(int i=0;i<array_length;i++)
        {
            cin>>array1[i];
        }

        //sort
        int final_swap_num=0;
        final_swap_num=bubble_sort(array1, array_length);

        //output
        if(q!=0) cout<<endl;
        cout<<"Optimal swapping takes "<<final_swap_num<<" swaps";
    }
}
