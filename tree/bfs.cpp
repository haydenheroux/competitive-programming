#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define vec vector

#define err exit(1);
#define errp(msg) cerr << msg; err

class Node {
	public:
		char v;
		Node *l, *r;
};

vec<Node*> bfs(Node* root) {
	queue<Node*> q;
	vec<Node*> visited;
	if (!root) return visited;
	q.push(root);
	while (!q.empty()) {
		Node* current = q.front();
		q.pop();
		visited.push_back(current);
		if (current->l) q.push(current->l);
		if (current->r) q.push(current->r);
	}
	return visited;
}

int main() {
	Node *a = new Node;
	Node *b = new Node;
	Node *c = new Node;
	Node *d = new Node;
	Node *e = new Node;
	Node *f = new Node;

	a->v = 'a';
	b->v = 'b';
	c->v = 'c';
	d->v = 'd';
	e->v = 'e';
	f->v = 'f';

	a->l = b;
	a->r = c;

	b->l = d;
	b->r = e;

	c->r = f;

	for (auto n : bfs(a)) {
		cout << n->v << endl;
	}
	return 0;
}
