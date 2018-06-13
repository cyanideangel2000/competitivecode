#include <iostream>
#include <string>

using namespace std;

typedef struct _node {
    int data;
    struct _node *left;
    struct _node *right;
}node;

node *tree = NULL;
int height = 0;

void insert (int i)
{
    node *temp = tree, *temp1 = NULL;
    int hlen = 0;

    // if tree doesn't yet exist
    if (tree == NULL) {
        tree = new node;
        tree->data = i;
        tree->left = tree->right = NULL;
        height = 1;
        //cout << "Start Height: " << height << endl;
        return;
    } else {
        do
        {
            temp1 = temp;
            hlen++;
            //cout << "Scannig Node: " << temp1->data << " height: " << hlen << endl;

            if (i <= temp->data) {
                temp = temp->left;
            }
            else {
                temp = temp->right;
            }
        } while(temp);

        // insert now
        temp = new node;
        temp->data = i;
        temp->left = temp->right = NULL;

        if (i > temp1->data) temp1->right = temp;
        else                 temp1->left = temp;

        hlen++;
        if (height < hlen) height = hlen;

        //cout << "Inserting ParentNode: " << temp1->data << endl;
        //cout << "New Height: " << height << endl;
    }
}

int main (void)
{
    int n, i, j, k;
    string in;

    cin >> n;
    while(--n)
    {
        getline(cin, in, ' ');
        insert (atoi(in.c_str()));
    }
    cin >> i;
    insert(i);

    cout << height << endl;
}
