#include "stdafx.h"
#include <iostream>
#include "Exception.h"

using namespace std;

template <class T>
class lista;

template <class T>
class wezel
{
private:
	T * data;
	wezel<T> *next;
public:
	wezel(T &_data);
	wezel(const wezel<T> &) = delete;
	wezel<T>& operator=(const wezel<T> &) = delete;

	void ostreamPrint(ostream & os) const;

	template <class T>
	friend ostream& operator<<(ostream &os, const wezel<T> &n);

	~wezel() { delete data; }

	friend class lista<T>;
};
/********************************************************/
template <class T>
wezel<T>::wezel(T &_data) : next(NULL)
{
	data = new T;
	*data = _data;
}
/********************************************************/
template<class T>
void wezel<T>::ostreamPrint(ostream & os) const
{
	wezel<T> *p = (wezel<T>*)this;
	while (p)
	{
		os << *(p->data) << " ";
		p = p->next;
	}

}
/********************************************************/
template <class T>
ostream& operator<<(ostream &os, const wezel<T> &n)
{
	n.ostreamPrint(os);
	return os;
}
/********************************************************/
/********************************************************/
/********************************************************/
template <class T>
class lista
{
	private:
		wezel<T> * n;
	public:
		lista()
		{
			n = NULL;
		}
		lista(const lista<T> &) = delete;
		lista<T>& operator=(const lista<T> &) = delete;

		~lista() {}
		void add(T &data);
		void del();

		template <class T>
		friend ostream& operator<<(ostream &os, const lista<T> &l);
};
/********************************************************/
template <class T>
void lista<T>::add(T & data)
{
	wezel<T> *a = new wezel<T>(data);
	a->next = n;
	n = a;
}
/********************************************************/
template <class T>
void lista<T>::del()
{
	wezel<T> *p = n;
	if (p)
	{
		n = n->next;
		delete p;
	}
	else
	{
		throw Exception("List is empty");
	}
}
/********************************************************/
template <class T>
ostream& operator<<(ostream &os, const lista<T> &l)
{
	os << "list [" << *(l.n) << "]";
	return os;
}