#include "stdafx.h"
#include <iostream>

#include "Exception.h"

using namespace std;

template <class T>
class NodeBST
{
	private:
		T data;
		NodeBST<T>* left;
		NodeBST<T>* right;
	public:
		NodeBST(T _data) : data(_data), left(NULL), right(NULL) {}

		NodeBST(const NodeBST<T> &) = delete;
		NodeBST<T>& operator=(const NodeBST<T> &) = delete;

		bool contains(T val) const;
		bool insert(T val);
		void print() const;
		void ostreamPrint(ostream &os) const;

		template <class T>
		friend ostream& operator<<(ostream &os, const NodeBST &node);
};

template <class T>
bool NodeBST<T>::contains(T val) const {
	if (val == data) return true;
	NodeBST* next = (val < data) ? left : right;
	return (next != NULL) ? next->contains(val) : false;
}

template <class T>
bool NodeBST<T>::insert(T val) {
	if (val == data) throw Exception("This element exists in tree"); //return false;
	NodeBST<T>* & next = (val < data) ? left : right;
	if (next == NULL) {
		next = new NodeBST(val);
		return true;
	}
	else return next->insert(val);
}

template <class T>
void NodeBST<T>::print() const {
	if (left != NULL) left->print();
	cout << data << " ";
	if (right != NULL) right->print();
}

template<class T>
void NodeBST<T>::ostreamPrint(ostream & os) const
{
	if (left != NULL) left->ostreamPrint(os);
	os << data << " ";
	if (right != NULL) right->ostreamPrint(os);
}

template <class T>
ostream& operator<<(ostream &os, const NodeBST<T> &node)
{
	node.ostreamPrint(os);
	return os;
}
/*******************************************************************************************/
template <class T>
class TreeBST
{
	NodeBST<T>* root;
public:
	TreeBST() : root(NULL) {}

	TreeBST(const TreeBST<T> &) = delete;
	TreeBST<T>& operator=(const TreeBST<T> &) = delete;

	bool contains(T val) const { return (root != NULL) ? root->contains(val) : false; }
	bool insert(T val);
	void print() const;

	template <class T>
	friend ostream& operator<<(ostream &os, const TreeBST<T> &tree);
};

template <class T>
bool TreeBST<T>::insert(T val) {
	if (root == NULL) {
		root = new NodeBST<T>(val);
		return true;
	}
	else return root->insert(val);
}

template <class T>
void TreeBST<T>::print() const {
	cout << "tree: [";
	if (root == NULL) cout << "empty" << endl;
	else root->print();
	cout << "]" << endl;
}

template <class T>
ostream& operator<<(ostream &os, const TreeBST<T> &tree)
{
	os << "tree [" << *(tree.root) << "]";
	return os;
}
