#include<iostream>
using namespace std;
int integers(int &a, int &b,int &c)
{
int largest=0;
if(a>b&&a>c)
{
	largest=a;

}
else if(b>c&&b>a)
{
	largest=b;
}
else if(c>a&&c>b)
{
  largest=c;
}
return largest;
}
int main()
{
    int x, y, z;
    cout << "Enter three integers: "<<endl;
    cin >> x >> y >> z;
    int largest = integers(x, y, z);
    cout << "The largest integer is: " << largest << endl;

    return 0;

	
}