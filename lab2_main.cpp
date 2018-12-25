#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool IsPalindrom(string x)
{
 /* var 1.0
    string tmp;
    tmp = x;
    reverse(x.begin(),x.end());
    if (x == tmp) {cout << "Yavlyaetsya palindromom, "; return true;}
    else { cout << "Ne yavlyaetsya palindromom, "; return false;}
 */

    int i,j;
    for (i=0, j=x.size()-1; i<=j; i++, j--) //odin iterator v nashalo stroki, drugoi v konec
    if (x[i]!=x[j])
    {
     cout << "ne yavlyaetsya palindromom, "; return false;
    }
     cout << "yavlyaetsya palindromom, "; return true;

}


int main()
{
    string str;
    cout << "Enter string: "; cin >> str;
    cout << "Rezultat: " << IsPalindrom(str) << endl;
    return 0;
}
