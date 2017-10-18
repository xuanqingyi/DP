#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> price {0,1,5,8,9,10,17,17,20,24,30};
	int n=10;
	vector<int>r(n+1);
	vector<int>s(n+1);
for(int j=1;j<=n;j++){
	int q=-10000;
    for(int i=1;i<=j;i++){
            if(q<price[j-i]+price[i]){
            	q=price[j-i]+price[i];
                      s[j]=i; 
            }
            r[j]=q;
    }
}
   for(int i=1;i<=n;i++)
   cout<<r[i]<<setw(3);
cout<<endl;
for(int i=1;i<=n;i++)
   cout<<s[i]<<setw(3);
return 0;
}