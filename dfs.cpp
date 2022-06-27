#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

#define err exit(1);
#define errp(msg) cerr << msg; err

class Node {
	public:
		char v;
		Node *l, *r;
};

vector<Node*> dfs(Node* root) {
	stack<Node*> stk;
	vector<Node*> visited;
	if (!root) return visited;
	stk.push(root);
	while (!stk.empty()) {
		Node* current = stk.top();
		stk.pop();
		visited.push_back(current);
		if (current->r) stk.push(current->r);
		if (current->l) stk.push(current->l);
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

	for (auto n : dfs(a)) {
		cout << n->v << endl;
	}
	return 0;
}
