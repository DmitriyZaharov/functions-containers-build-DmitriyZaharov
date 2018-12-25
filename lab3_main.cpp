#include <iostream>
#include <string>
#include <vector>
/* для работы с auto вставить в настройках проекта "CONFIG+=c++11"*/

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
    for (i=0, j=x.size()-1; i<=j; i++, j--)//odin iterator v nashalo stroki, drugoi v konec
    if (x[i]!=x[j])
    {
      return false;
    }
      return true;
}

vector<string> PalindromFilter (vector<string> words, int minLength)
{
    vector<string> result;// vector dlya vivoda znasheniy

    for (auto i : words)
    {
        if (i.size() >= minLength)
        {
            if(IsPalindrom(i)) result.push_back(i);
        }
    }
    return result;
}

int main()
{
    vector<string> words;
    char temp[100];         // dlya vremennogo hranenya odnoi stroki
    int n;                  // kol-vo strok;
    int minLength;          // dlinna;

    cout << "Vvedite kilishestvo strok: ";
    cin >> n;
    cin.get();
    cout << endl;

    cout << "Vvedite znashenie minLength: ";
    cin >> minLength;
    cin.get();
    cout << endl;


    for (int i = 0; i<n; i++)
    {
        cout << "Vvedite stroku " << (i+1) << "/" << n << ": ";
        cin.getline(temp, 100);
        words.push_back(temp);
    }

    int sh = 0;
    string a = " ";
    cout << "Stroki, yavlayshiesya palindromom: ";
    for (string i : PalindromFilter (words, minLength))
    {
        sh++;
        if (sh > 1){a = ", ";}
        cout << a << i;
    }
    cout << endl;
    return 0;
}

