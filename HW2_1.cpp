#include<iostream>

using namespace std;

int bubble_sort(int a[], int n)
{
    int swap_count=0;
    for(int i=n-1;i>0;i--) // In each pass, check index 0 to i
    {
        int flag=0; // 0: no swap in this pass
                    // 1: at least 1 swap in this pass
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                //swap
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                flag=1;
                swap_count++;
            }
        }// for j
        if(flag==0) break; // no swap in this pass, break
    }// for i
    return swap_count;
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
        cout<<"Optimal swapping takes "<<final_swap_num<<" swaps.";
    }
}
