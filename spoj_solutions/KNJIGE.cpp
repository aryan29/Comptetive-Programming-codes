#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,i,c=0,pos,n1;
ll arr[300005];
cin>>n;
n1=n;
for(i=0;i<n;i++)
{
cin>>arr[i];
if(arr[i]==n)
pos=i;
}
n--;
for(i=pos-1;i>=0;i--)
{
if(arr[i]==n)
{
  c++;
  n--;
}
}
cout<<(n1-c-1)<<"\n";
}