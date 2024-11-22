#include<iostream>
using namespace std;
int cube(int a)
{
    return a * a * a; ;
}
	int main() 
	{
    int num;
    while (true) {
        cout << "Enter a number (0 to exit): ";
        cin >> num;
        if (num == 0) {
            break;
        }
        int result = cube(num);
        cout << "The cube of " << num << " is: " << result << endl;
    }

    return 0;
}
