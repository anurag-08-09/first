#include<iostream>
#define mod 1000000007
using namespace std;
 
long long pow1(long long w,long long y)
{
    long long p;
    if(y==0)
    return 1%mod;
    if(y==1)
    return w%mod;
    p=pow1(w,y/2)%mod;
    if(y%2==0)
    return (p%mod*p%mod)%mod;
    else if(y%2!=0)
    return (w%mod*(p%mod*p%mod)%mod)%mod;
}
 
 
long long int fun(string s)
{
     long long int ans=0,i,temp;
     for(i=0;i<s.size();i++)
     {
                            temp=pow1(26LL,s.size()-1-i);
                            ans=(ans+(int(s[i]-'a'+1)*temp))%mod;
     }
     return ans;
     
     
}
 
int main()
{
    long long int t,ca=0;
    scanf("%lld",&t);
    
    while(t--)
    {
              long long int ans=0,i,pow=26,temp;
              string a,b;
              cin>>a>>b;
              ans=(fun(b)-fun(a)-1)%mod;
              if(ans<0)
              ans=ans+mod;
              printf("Case %lld: %lld\n",++ca,ans);
    }
    return 0;
}
 

