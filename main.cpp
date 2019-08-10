#include <iostream>
#include <vector>
#include <string>

/*          STRINGS
 // strings work like vectors
 string s ="hello";
 s.pop_back();
 cout << s << endl;      hell
 s.push_back('l');
 cout << s << endl;      helll
 s += " world";
 cout << s << endl;      helll world

 tolower / toupper - turns all the English characters to lower/upper case
 Isalpha – checks whether a character is an alphabet character
 Isdigit – checks whether a character is a digit
*/

/*          PAIRS
 pair<int, string> a = {2,"what"};
 cout << '(' << a.first <<" , ” << a.second<<')' << endl;  (2, what)
 */


/*          VECTORS
 vector<int> arr1(1e5, 0);
 //init - o(n)
 arr1[0] = 1;
 vector<int> arr2 = arr1;
 //copy - o(n)
 arr2[0] = 2; //arr1[0]=1
 arr1.push_back(3);
 cout << "arr1[1e5]="
 << arr1[arr1.size () - 1] << endl;     arr1[1e5]=3
 arr1.pop_back();
 */


/*          STL Algorithms
 • sort – Sort an array/vector in O(nlog(n)) time
 • binary_search – Search sorted array in O(logn) time
   And related: lower_bound, upper_bound
 • nth_element – Find the nth element in a given array by
   performing partition in O(n) time
 • merge – Merge two sorted arrays/vectors
 • unique – Remove consecutive repeating elements
 • And many more (max, min, count, reverse…)

 */


typedef long long ll;
typedef long double ld;

using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;
    /*          READ UNTIL EOF
     int a, b;
     while (scanf("%d %d", &a, &b) != EOF) { }
    */

    /*          READ UNTIL VALUES ARE 0
     int a, b;
     while (scanf("%d %d", &a, &b), (a || b)) { }
    */
    return 0;
}