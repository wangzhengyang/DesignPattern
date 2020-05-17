#include "composite.h"
#include "leaf.h"

int main()
{
    Composite *proot = new Composite("root");
    Leaf *plf1 = new Leaf("leaf1");
    Leaf *plf2 = new Leaf("leaf2");
    Composite *pc1 = new Composite("pc1");
    proot->Add(plf1);
    proot->Add(plf2);
    proot->Add(pc1);
    pc1->Add(new Leaf("leaf3"));
    pc1->Add(new Leaf("leaf4"));
    Composite *pc2 = new Composite("pc2");
    pc1->Add(pc2);
    pc2->Add(new Leaf("leaf5"));
    pc2->Add(new Leaf("leaf6"));
    proot->Display(1);
    return 0;
}