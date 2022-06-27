#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

#define err exit(1);
#define errp(msg) cerr << msg; err

class Node {
	public:
		double v;
		Node *l, *r;
};

double max_sum(Node* root) {
	if (!root) return -INFINITY;

	double greatest = max(max_sum(root->l), max_sum(root->r));

	if (greatest == -INFINITY) return root->v;
	return root->v + greatest;
}

double min_sum(Node* root) {
	if (!root) return INFINITY;

	double least = min(min_sum(root->l), min_sum(root->r));

	if (least == INFINITY) return root->v;
	return root->v + least;
}

int main() {
	Node *a = new Node;
	Node *b = new Node;
	Node *c = new Node;
	Node *d = new Node;
	Node *e = new Node;
	Node *f = new Node;

	a->v = 1;
	b->v = 2;
	c->v = 3;
	d->v = 4;
	e->v = 5;
	f->v = 6;

	a->l = b;
	a->r = c;

	b->l = d;
	b->r = e;

	c->r = f;
	cout << "max: " << max_sum(a) << endl;
	cout << "min: " << min_sum(a) << endl;
	return 0;
}
