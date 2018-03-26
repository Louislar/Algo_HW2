#include<iostream>
#include<math.h>

using namespace std;

int prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;// Is not prime
    }

    return 1;// Is prime
}

int prime_generate(int n, int assign_start=0)
{
    if(assign_start!=0)
    {
        for(int q=assign_start+1;;q++)
            if(q%2!=0){
                if(prime(q)==1)
                {
                    return q;
                }
            }
    }

    if(n==1) return 2;
    else
    {
        for(int q=3;;q++)
        {
            if(q%2!=0){
            if(prime(q)==1)
            {
                n--;
                if(n<=1)
                    return q;

            }
            }
        }
    }
}

int ugly_num(int n)
{
    if(n==1) return 1; // Is ugly number
    else
    {
        int prime_temp=0;
        for(int q=1;;q++) // check q prime numbers
        {
            prime_temp=prime_generate(q, prime_temp);
            if(prime_temp>n) break;
            if(prime_temp!=2
               &&prime_temp!=3
               &&prime_temp!=5)
            {
                if(n%prime_temp==0)
                    return 0; // Is not ugly number
            }
        }
        return 1;// Is ugly number
    }
}

int ugly_num_best(int n)
{
    if(n==1) return 1;
    else
    {
        while(n%2==0)
            n=n/2;
        while(n%3==0)
            n=n/3;
        while(n%5==0)
            n=n/5;
        if(n==1) return 1;
        else if(n!=1) return 0;
    }
}

int ugly_num_generate(int n)
{
    for(int q=1;;q++)
    {
        if(ugly_num_best(q)==1)
        {
            n--;
            if(n<=0)
                return q;
        }
    }
}

int main()
{
    for(int i=1;i<12;i++)
    {
        cout<<ugly_num_generate(i)<<endl;
    }
    int n;
    cin>>n;
    cout<<ugly_num_generate(n)<<endl;
}

int main01()
{
    // input
    int k=0;
    cin>>k;
    for(int q=0;q<k;q++)
    {
        int n=0;
        cin>>n;
        cout<<ugly_num_generate(n)<<endl;
    }
}
