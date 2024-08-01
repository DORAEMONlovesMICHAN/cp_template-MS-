#include<bits/stdc++.h>
using namespace std;

/*code by Sushanth_iitbbs*/
/*cf profile :- Sushanth_iitbbs*/

/* Trust the process ~Dhoni */
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
// some data types

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define gcd(m,n) __gcd(m,n)

// some for loops


#define f(i,s,e) for(long long int i=s;i<e;i++)
#define ef(i,s,e) for(long long int i=s;i<=e;i++)
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(),x.end()

template<typename T>istream & operator >> (istream &in, vector<T> &a){for(auto &x:a)in>>x;return in;}
template<typename T>ostream & operator << (ostream &out, vector<T> &a){for(auto &x:a)out<<x<<" ";return out;}
template<typename T,typename K>istream & operator >> (istream &in,  pair<T,K> &a){in>>a.F>>a.S;return in;}
template<typename T,typename K>ostream & operator << (ostream &out, pair<T,K> &a){out<<a.F<<" "<<a.S;return out;}


// for MEX of an vector;
int calculateMEX(const vector<int>& vec) {
    // Create a set to store the unique elements of the vector
    unordered_set<int> uniqueElements(vec.begin(), vec.end());

    // Iterate from 0 upwards to find the smallest missing non-negative integer
    int MEX = 0;
    while (uniqueElements.find(MEX) != uniqueElements.end()) {
        MEX++;
    }

    return MEX;
}


void Sushanth_IITbbs (void)
{

}
int main(void)
{
    ios::sync_with_stdio(false); // For faster I/O
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll tc;
    cin>>tc;
    while(tc>0)
    {
        Sushanth_IITbbs();
        tc--;
    }
    return 0;
}
