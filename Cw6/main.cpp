#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
/*************************************************/
#include "Obiect.h"
/*************************************************/
const int TREES = 20;
string gatunek = "";
/*************************************************/
Obiect randomObiect()
{
    Obiect obiect;
    return obiect;
}
/*************************************************/
bool compare(const Obiect &a, const Obiect &b)
{
    return a.getSrednica() < b.getSrednica();
}
/*************************************************/
bool isGenre(const Obiect &a)
{
    return a.getGatunek() == gatunek;
}
/*************************************************/
int main()
{

    //VECTOR
    vector<Obiect> obiectsVector;

    for(int i = 0 ; i < TREES ; i++)
    {
        Obiect obiect;
        obiectsVector.push_back(obiect);
    }

    vector<Obiect>::iterator it;

    for(it = obiectsVector.begin() ; it != obiectsVector.end() ; it++)
    {
        cout << *it;
    }

    //SET
    set<Obiect> obiectsSet;

    for(it = obiectsVector.begin() ; it != obiectsVector.end() ; it++)
    {
        if(!obiectsSet.insert(*it).second) cout << "Repeated obiect: " << *it << endl;
    }

    //MAP
    map<string, Obiect> obiectsMap;

    for(it = obiectsVector.begin() ; it != obiectsVector.end() ; it++)
    {
        obiectsMap.insert(make_pair(it->hash(), *it));
    }

    map<string, Obiect>::iterator itm;

    for(itm = obiectsMap.begin() ; itm != obiectsMap.end() ; itm++)
    {
        cout << "Key: " << itm->first << ", Value: " << itm->second << endl;
    }

    //Operations
    //generate
    vector<Obiect> vec(25);
    generate(vec.begin(), vec.end(), randomObiect);

    for(it = vec.begin() ; it != vec.end() ; it++)
    {
        cout << *it;
    }

    //min_element
    cout << "Min element: " << *min_element(vec.begin(), vec.end(), compare) << endl;

    //count_if
    cout << "Type gatunek: ";
    cin >> gatunek;

    cout << "Ilosc drzew z podanego gatunku: " << count_if(vec.begin(), vec.end(), isGenre) << endl;

    //for_each
    cout << "\nfor_each\n";
    for_each(vec.begin(), vec.end(), [](Obiect &a){ a.addSrednica(0.1); });
    for(it = vec.begin() ; it != vec.end() ; it++)
    {
        cout << *it;
    }

    //remove_if
    cout << "\nremove_if\n";
    vec.erase(remove_if(vec.begin(), vec.end(), [](Obiect &a)
    { if(a.getSrednica() > 1.0) return true;
      else return false;}), vec.end());
    for(it = vec.begin() ; it != vec.end() ; it++)
    {
        cout << *it;
    }
    return 0;
}