struct treenode
{
    int info;
    struct treenode *c1;
    struct treenode *c2;
    struct treenode *c3;
}


struct treenode2
{
    int info;
    int n; // number of children

    struct treenode *c[n]; // mixed allocation
}
