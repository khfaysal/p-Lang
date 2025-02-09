// 1.

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 11; i++)
//     {
//         if (i == 3)
//         {
//             continue;
//         }
//         cout << i << endl;
//     }
//     return 0;
// }

// 2.

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int j = 0; j < 5; j++)
//     {

//         for (int i = 0; i < 5; i++)
//         {
//             cout << '*';
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 3.

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int line = 1; line <= 5; line++)
//     {
//         for (int star = 1; star <= line; star++)
//         {
//             cout << '*';
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 4.(***)

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int line = 1; line <= 5; line++)
//     {
//         int gap_count = 5 - line;
//         for (int gap = 1; gap <= gap_count; gap++)
//         {
//             cout << ' ';
//         }
//         for (int star = 1; star <= line; star++)
//         {
//             cout << '*';
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 5.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of element you want to add: " << endl;
//     cin >> n;
//     int a[n];
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }

//     for(int i =1; i<=n; i++){
//         cout<< a[i];
//     }
// }

// 6.

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ar[6] = {'h', 'i', 'l', 'l', 'o'};
//     ar[1] = 'e';

//     cout << ar;

//     return 0;
// }

// 7. (*)

// #include <iostream>
// using namespace std;
// int main()
// {
//     char a[100];
//     cout<< "Type Somthing:" ;
//     cin >> a;
//     cout << a;

//     return 0;
// }

// 8. (***)  ---- cin.get(variable name, limit)

// #include <iostream>
// using namespace std;
// int main()
// {
//     char a[100];
//     cout << "Type Somthing:";
//     cin.get(a, 10);

//     cout << a;

//     return 0;
// }

// 9.   (lenth calculate)

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     char a[100];
//     cout << "Type Somthing:";
//     cin >> a;
//     int len = strlen(a);
//     cout << len;

//     return 0;
// }

// 10.

// #include <iostream>
// using namespace std;
// int main()
// {

//     char a[100];
//     cin.get(a, 100);
//     int len = 0;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         len++;
//     }
//     cout << len << endl;

//     return 0;
// }

// 11.   (Reverse)---- str rev => strrev(variable name);
// #include <iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char a[100];
//     cin >> a;
//     strrev (a);

//     cout << a << endl;
//     return 0;
// }

// 12.  Mirror

// #include <iostream>
// #include <cstring> // for strcpy and strcmp
// using namespace std;

// int main()
// {
//     char a[100];
//     cin >> a;

//     char b[100];
//     strcpy(b, a); // Copy string 'a' to 'b'
//     strrev(b);    // Reverse string 'b'

//     if (strcmp(a, b) == 0) // Compare the two strings
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }

// 13.

#include <iostream>
// #include <cstring> // for strcpy and strcmp
using namespace std;

int main()
{
    int a,b;
    cout << "Enter the first Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin>> b;
    cout<< a+b;

    // cout << "The Last digit is :" << n << endl;
    return 0;
}

// 14

#