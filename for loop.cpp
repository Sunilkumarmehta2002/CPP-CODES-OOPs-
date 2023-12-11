//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	
//    for(int i=0;i<11;i++)
//    {
//        cout<<i<<endl;
//        int sum=sum+i;
//        cout<<sum<<endl;
//    }
//
//    return 0;
//}
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "The sum of all " << n << " numbers is: " << sum;
    return 0;
}


