#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

//Vspomogatelnaya funcciya dlya pechati vectora

void show_vector_int (vector<int>&a)
{
    for (vector<int>::iterator it = a.begin(); it!=a.end(); ++it)

       {
         cout << "{" << *it << "} ";
       }
         cout << endl;
}


void Reverce(vector<int>&v)
{
   reverse(v.begin(), v.end());
}


int main()
{
    vector<int> V;
    int vectV_size;
    int q = 0;

    cout << "Vvedite razmrnost vektora V: ";
    cin >> vectV_size;

 // fill vector V
    for(int i=0; i<vectV_size; i++){
        cout << "Vvedite V["<< i << "]= ";
        cin >> q;
        V.push_back(q);
    }
    cout << endl;

    cout << "Input vector: "; show_vector_int(V); cout << endl;
    Reverce(V);
    cout << "Output vector: "; show_vector_int(V); cout << endl;

    return 0;
}

