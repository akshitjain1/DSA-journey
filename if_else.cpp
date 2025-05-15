// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;
//     if (a % 2 == 0)
//     {
//         cout << "The number is even." << endl;
//     }
//     else
//     {
//         cout << "The number is odd." << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int marks;
//     cout << "Enter your marks: ";
//     cin >> marks;

//     if (marks >= 90) {
//         cout << "Grade: A" << endl;
//     } else if (marks >= 80) {
//         cout << "Grade: B" << endl;
//     } else if (marks >= 70) {
//         cout << "Grade: C" << endl;
//     } else if (marks >= 60) {
//         cout << "Grade: D" << endl;
//     } else {
//         cout << "Grade: F" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int mark1,mark2;
//     cout << "Enter marks for subject 1: ";
//     cin >> mark1;
//     cout << "Enter marks for subject 2: ";
//     cin >> mark2;
//     if (mark1 > mark2) {
//         cout << "Subject 1 has the highest marks." << endl;
//     } else if (mark2 > mark1) {
//         cout << "Subject 2 has the highest marks." << endl;
//     } else {
//         cout << "Both subjects have the same marks." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout<<"Enter yout age: ";
//     cin>>age;
//     if(age>18){
//         cout<<"You are eligible to vote."<<endl;
//     }
//     else if(age==18){
//         cout<<"You are just eligible to vote."<<endl;
//     }
//     else{
//         cout<<"You are not eligible to vote."<<endl;
//     }
    

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    char a;
    cout<<"Enter a character: ";
    cin>>a;
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        cout<<"The character is a vowel."<<endl;
    }
    else{
        cout<<"The character is consonant."<<endl;
    }
    return 0;
}