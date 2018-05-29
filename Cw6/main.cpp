#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
/*************************************************/
#include "Zwierze.h"
/*************************************************/
const int ANIMALS = 20;
string gatunek = "";
/*************************************************/
Zwierze randomObject()
{
    Zwierze object;
    return object;
}
/*************************************************/
bool compare(const Zwierze &a, const Zwierze &b)
{
    return a.getWiek() < b.getWiek();
}
/*************************************************/
bool isGenre(const Zwierze &a)
{
    return a.getGatunek() == gatunek;
}
/*************************************************/
int main()
{

    //VECTOR
    vector<Zwierze> obiectsVector;

    for(int i = 0 ; i < ANIMALS ; i++)
    {
        Zwierze obiect;
        obiectsVector.push_back(obiect);
    }

    vector<Zwierze>::iterator it;

    for(it = obiectsVector.begin() ; it != obiectsVector.end() ; it++)
    {
        cout << *it;
    }

    //SET
    set<Zwierze> obiectsSet;

    for(it = obiectsVector.begin() ; it != obiectsVector.end() ; it++)
    {
        if(!obiectsSet.insert(*it).second) cout << "Repeated obiect: " << *it << endl;
    }

    //MAP
    map<string, Zwierze> obiectsMap;

    for(it = obiectsVector.begin() ; it != obiectsVector.end() ; it++)
    {
        obiectsMap.insert(make_pair(it->hash(), *it));
    }

    map<string, Zwierze>::iterator itm;

    for(itm = obiectsMap.begin() ; itm != obiectsMap.end() ; itm++)
    {
        cout << "Key: " << itm->first << ", Value: " << itm->second << endl;
    }

    //Operations
    //generate
    vector<Zwierze> vec(15);
    generate(vec.begin(), vec.end(), randomObject);

    for(it = vec.begin() ; it != vec.end() ; it++)
    {
        cout << *it;
    }

    //max_element
    cout << "Max element: " << *max_element(vec.begin(), vec.end(), compare) << endl;

    //count_if
    cout << "Type gatunek: ";
    cin >> gatunek;

    cout << "Ilosc zwierzat z podanego gatunku: " << count_if(vec.begin(), vec.end(), isGenre) << endl;

    //for_each
    cout << "\nfor_each\n";
    for_each(vec.begin(), vec.end(), [](Zwierze &a){ a.addWiek(1); });
    for(it = vec.begin() ; it != vec.end() ; it++)
    {
        cout << *it;
    }

    //remove_if
    cout << "\nremove_if\n";
    vec.erase(remove_if(vec.begin(), vec.end(), [](Zwierze &a)
    { if(a.getWiek() > 10) return true;
      else return false;}), vec.end());
    for(it = vec.begin() ; it != vec.end() ; it++)
    {
        cout << *it;
    }
    return 0;
}