#include<iostream>
using namespace std;
int main ()
{
int arr[]={12,13,14,15,16};
int i;
cout<<*arr<<endl;
int*aptr=arr;
for (i=0;i<=4;i++)
{
	cout<<*aptr<<endl;
	aptr++;
}
cout<<"the same function using array is "<<endl;
for (i=0;i<=4;i++)
{
	cout<<*arr+i<<endl;

}


return 0;


}
