#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


// Vspomogatelnaya funcciya dlya pechati vectora

template <typename T>
void vecPrint (const vector<T>& vec){
     cout << "Vector: ";
     for ( typename vector<T>::const_iterator p = vec.begin(); p != vec.end(); ++p )
        {
          cout << "{" << *p << "}";
        }
     cout << endl;
 }

template<class T>
void Sumvectors(vector<T>& v1, vector<T>& v2)
{
    v2.reserve(v1.size()+v2.size());
    v2.insert(v2.end(), v1.begin(), v1.end());

 // Или как альтернатива
 // v2.reserve(v1.size()+v2.size());
 // std::copy(v1.begin(), v1.end(), std::back_inserter(v2));

}

int main()
{
    vector <float> V1;
    vector <float> V2;
    float q = 0;

    cout << "Vvedite razmrnost vektora V1: ";
    int vectV1_size;
    cin >> vectV1_size;

    cout << "Vvedite razmrnost vektora V2: ";
    int vectV2_size;
    cin >> vectV2_size;


    // fill vector V1
    for(int i=0; i<vectV1_size; i++){
        cout << "Vvedite V1["<< i << "] ";
        cin >> q;
        V1.push_back(q);
    }
    cout << endl;
    vecPrint(V1);

    // fill vector V2
    for(int i=0; i<vectV2_size; i++){
        cout << "Vvedite V2["<< i << "] ";
        cin >> q;
        V2.push_back(q);
    }
    cout << endl;
    vecPrint(V2);


//  V2.reserve(V1.size()+V2.size());
//  V2.insert(V2.end(), V1.begin(), V1.end());

   Sumvectors(V1, V2);

   cout << "V1 + V2 = ";
   vecPrint(V2);

// Oshicsaem vector:
//   for (int i=0; i< V1.size(); i++)
//   {
//       V1[i].clear();
//   }

   V1.clear();

   cout << "V1.clear(): ";
   vecPrint(V1);

   return 0;
}

/*
    Primer raboti s vectorami:

void show_vector (vector<string>&a)
{
    for (vector<string>::iterator it = a.begin(); it!=a.end(); ++it)
   {
     cout << "{" << *it << "} ";
   }
     cout << "}" << endl;
}

    vector <string> vec(5);
    string foo[] = {"My", "way", "or", "the", "highway"};
    vec[0] = "Today";
    vec[1] = "is";
    vec[2] = "a";
    vec[3] = "new";
    vec[4] = "day";

    vector<string> vec2(vec);
    show_vector(vec2);

    vec.at(0) = "Tomorrow";
    vec2.assign(vec.begin(), vec.end());
    //копирование каждого элемента
    show_vector(vec2);

    //с помощью присвоения
    vec2.assign(&foo[0], &foo[5]);
    //Присвоение работает    для всего что ведет себя как итератор
    show_vector(vec2);

    vector<string>::iterator p;
    p = find(vec.begin(), vec.end(), "new");
    vec2.assign(vec.begin(), p);
    // копирование подмножества полного диапазона
    show_vector(vec2);
*/
