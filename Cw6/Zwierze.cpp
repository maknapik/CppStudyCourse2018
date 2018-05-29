#include "Zwierze.h"
/*************************************************/
Zwierze::Zwierze()
{
    imie = imiona[randomInt(0, sizei - 1)];
    gatunek = gatunki[randomInt(0, sizeg - 1)];
    wiek = randomInt(1, 20);
}
/*************************************************/
ostream &operator<<(ostream &output, const Zwierze &o)
{
    output << "I: " << o.imie << ", G: " << o.gatunek << ", W: " << o.wiek << endl;
    return output;
}
/*************************************************/
string Zwierze::hash() const
{
    return gatunek + imie;
}
/*************************************************/
bool Zwierze::operator<(const Zwierze &o) const
{
    return (this->hash() < o.hash());
}
/*************************************************/