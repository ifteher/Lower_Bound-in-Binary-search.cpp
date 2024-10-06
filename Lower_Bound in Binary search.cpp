///Lower Bound holo:kono akta array collection er upor akta key val(4) er lower bound function apply korle,oi value ta theke takle tar iterator return korbe,R jodi na theke takee,taholee tar immidiet value ta apnake return korbe.
#include<bits/stdc++.h>
using namespace std;
int main()
{
///sudu vector e noy,set,map,multiset(stack,queue chara) soho sob jaigai lower_bound apply korte parben.
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
     cin>>v[i];
 }
auto it=lower_bound(v.begin(),v.end(),11)-v.begin();//4 er lower bound er jonno
//5 er lower bound dilee value:6,r index: 3 dekhato.(0 based vec).
///kono akta value jeta vector e nai,emon ta dile tar lower bound er index;(0based)v.size(), val=0 dekhabe.
cout<<it<<endl;
return 0;
}

/*
n=6
vector:2 3 4 6 9 10
Index :0 1 2 3 4 5
output:4 er iterator: 2
4 na taklee er imidiet er iterator dibe: 3
*/
