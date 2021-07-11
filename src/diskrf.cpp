#include "diskrh.hpp"
int diskriminat() {
	int a, b, c,D;
	cout<< "insert a b c"<<endl;
	cin>>a>>b>>c;
	D=b*b-(4*a*c);
	if (D<0){
		cout<<"no soluction"<<endl;
		return 1;
 	} else if (D==0){
		int x=(-1*b)/2*a;
		cout<<x<<endl;
	} else {
		int x1=((-1*b)-(sqrt(D)))/2*a;
		cout<<x1<<endl;
		int x2= ((-1*b)+(sqrt(D)))/2*a;
		cout<<x2<<endl;
		}
		return 0;
}
	

