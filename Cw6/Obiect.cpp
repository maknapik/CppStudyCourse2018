#include "Obiect.h"
/*************************************************/
Obiect::Obiect()
{
    gatunek = gatunki[randomInt(0, size - 1)];
    srednica = randomDouble(1.0, 2.0);
    wiek = randomInt(1, 100);
}
/*************************************************/
ostream &operator<<(ostream &output, const Obiect &o)
{
    output << "G: " << o.gatunek << ", S: " << o.srednica << ", W: " << o.wiek << endl;
    return output;
}
/*************************************************/
string Obiect::hash() const
{
    return gatunek + to_string(wiek);
}
/*************************************************/
bool Obiect::operator<(const Obiect &o) const
{
    return (this->hash() < o.hash());
}
/*************************************************/