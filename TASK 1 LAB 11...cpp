#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
int temp=a;
a=b;
b=temp;
return ;
}
int main()
{
	int x=3,y=10;
	cout<<"Before Swapping,x= "<<x<<"and y= "<<y<<endl;
	swap(x,y);
	cout<<"After Swapping,x= "<<x<<"and y= "<<y<<endl;
	return 0;
	
}