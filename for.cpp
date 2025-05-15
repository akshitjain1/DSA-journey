// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     cout << endl;
//     for (int i = 1; i <= number; i++)
//     {
//         cout << "Square of " << i << " is " << i * i << endl;
//     }
//     cout << "End of Program";
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     for (int i =0;i<26;i++){
//         ch = 'a'+i;
//         cout << ch << " ";
//     }
//     cout<<endl;
//     // Using a different method to print uppercase letters
//     // This method uses a different approach to print uppercase letters

//     for(char ch = 'A'; ch <= 'Z'; ch++)
//     {
//         cout << ch << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     for (int i =number; i >= 1; i--)
//     {
//         cout << i <<" ";
//     }
    
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     for (int i =1; i <=number; i+=3)
//     {
//         cout << i <<" ";
//     }
    
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     for (int i =1; i <=10; i++)
//     {
//         cout<<number<<" X "<< i << " = "<<number*i<<endl;
//     }
    
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int number, power;
//     cout<<"Enter a number: ";
//     cin>>number;
//     cout<<"Enter the power: ";
//     cin>>power;
//     int n = number;
//     for(int i =1; i<power; i++){
//         n = n * number;
//     }
//     cout<<"The result is: "<<n<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     // int sum = 0;
//     // for(int i=1;i<=n;i++){
//     //     sum += i;
//     // }
//     // cout<<"The sum of first "<<n<<" numbers is: "<<sum<<endl;

//     cout<<"The sum of first "<<n<<" numbers is: "<<(n*(n+1))/2<<endl;
//     // The formula for the sum of the first n natural numbers is n*(n+1)/2
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     long long int fact =1;
//     if(n == 0){
//         cout<<"The factorial of 0 is: 1"<<endl;
//     }
//     else{
//         for(int i =1;i<=n;i++){
//             fact *= i;
//         }
//         cout<<"The factorial of "<<n<<" is: "<<fact<<endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum = 0;
//     if(n<=2){
//         cout<<"Number is not prime"<<endl;
//     }
//     else{

//         for(int i =2;i<=n/2;i++){
//             if(n%i==0){
//                 cout<<"Number is not prime"<<endl;
//                 break;
//             }
//             else if(i == n/2){
//                 cout<<"Number is prime"<<endl;
//                 break;
//             }
//             else{
//                 cout<<"Number is prime"<<endl;
//                 break;
//             }
//         }
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int num1 =0,num2=1;
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(int i =1;i<=n;i++){
        cout<<num1<<" ";
        int sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
}