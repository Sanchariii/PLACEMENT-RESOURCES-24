#include <bits/stdc++.h>

using namespace std;

template <typename T>
struct Tree {
    Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
    T value;
    Tree *left;
    Tree *right;
};

// Corrected solution function
template <typename T>
Tree<T>* solution(Tree<T> *t, int k) {
    if (t == nullptr)
        return nullptr;

    Tree<T> *left = solution(t->left, k);
    if (left != nullptr)
        return left;

    k--;
    if (k == 0)
        return t;

    return solution(t->right, k);
}

// Main function
int main() {
    // Example usage
    Tree<int> *root = new Tree<int>(1);
    root->left = new Tree<int>(2);
    root->right = new Tree<int>(3);
    root->left->left = new Tree<int>(4);
    root->left->right = new Tree<int>(5);
    root->right->left = new Tree<int>(6);
    root->right->right = new Tree<int>(7);

    int k = 3;
    Tree<int> *kthNode = solution(root, k);

    if (kthNode != nullptr)
        cout << "The " << k << "th node value is: " << kthNode->value << endl;
    else
        cout << "No such node exists." << endl;

    // Clean up memory (not necessary for the example)
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
