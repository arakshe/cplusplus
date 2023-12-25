#include <iostream>
#include <memory>
using namespace std;

class BST {
public:
    BST() = default;

    void insert(int new_elem) {
        shared_ptr<Node> & node = find_insert_position(m_root, new_elem);
        if (!node) {
            node = make_shared<Node>(Node{new_elem, nullptr, nullptr});
        }
    }

    void print() const {
        cout << "tree:";
        if (m_root) print_helper(m_root);
        cout << endl;
    }

private:
    BST(const BST &) = delete;
    BST & operator=(const BST &) = delete;

    struct Node {
        int elem;
        shared_ptr<Node> left;
        shared_ptr<Node> right;
    };

    shared_ptr<Node> m_root;

    void print_helper(shared_ptr<Node> n) const {
        if (n->left) print_helper(n->left);
        cout << " " << n->elem;
        if (n->right) print_helper(n->right);
    }

    shared_ptr<Node> & find_insert_position(shared_ptr<Node> & node, int elem) {
        if (!node || node->elem == elem) {
            return node;
        }
        if (elem < node->elem) {
            return find_insert_position(node->left, elem);
        } else {
            return find_insert_position(node->right, elem);
        }
    }
};
