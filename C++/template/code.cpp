#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define debug(x) (cerr << #x << ": " << (x) << '\n')
#define nl "\n";
#define sz(x) ((int)(x).size())
#define chk_op cout <<"ask"<<nl
 
const ll Inf = 1e18;
const int mod = 1000000007 ;
 
void ncr(int n, int r)
{
	long long p = 1, k = 1;
	if (n - r < r)
		r = n - r;
	if (r != 0) {
		while (r) {
			p *= n;
			k *= r;
			long long m = __gcd(p, k);
			// dividing by gcd, to simplify product division by their gcd saves from the overflow
			p /= m;
			k /= m;
			n--;
			r--;
		}
	}
	else
		p = 1;
 
	cout << p << endl;
}

void solve()
{
int a, b; cin >>a>>b;
int k=0;
if(a== 1) {
	if(b==1) {cout << 3 <<nl; return ;}
	else cout <<2 <<nl; return ;
}
// for(int i =1;i<a;i++){
// 	k = k ^ i; 
// }
if((a-1)%4==0){k=a-1;}
else if ((a-1)%4==1) { k = 1;}
else if ((a-1)%4==2) { k = a;}
else { k = 0;}

if(b==k ) { cout << 2 <<nl ; }
else {cout << 3 <<nl; }







}

 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc=1;
   cin >>tc;
    while(tc--)
    solve();
 
}
 
/** 
 
    /\_/\                 /\_/\
   (= ._.)               (._. =)
   / >  \>               </  < /
 
**/