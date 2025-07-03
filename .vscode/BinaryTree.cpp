#include <iostream>
#include <queue>
#include<stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "ENter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left" << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right" << endl;
    root->right = buildTree(root->right);

    return root;
}

// void levelOrderTraversal(node *root)
// {
//     queue<node* > q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node *temp = q.front();

//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }

//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }
void reverseLevelOrderTraversal(node *root)
{
    if (root == NULL)
        return;

    queue<node *> q;
    stack<int> s;

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        s.push(temp->data);

        // Push right first, so that left is processed first when popping from stack
        if (temp->right)
            q.push(temp->right);

        if (temp->left)
            q.push(temp->left);
    }

    cout << "Reverse Level Order Traversal: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    node *root = NULL;

    root = buildTree(root);

    // levelOrderTraversal(root);
    //2 4 6 -1 -1 3 -1 -1 7 9 -1 -1 1 -1 -1 -1
    reverseLevelOrderTraversal(root);

    return 0;
}