#include <stdio.h>
#include <stdlib.h>
#include "BiTree.h"

void CreateBiTree(BiTree *T)
{
    char ch;
    scanf("%c",&ch);
    if(ch=='#')
        *T=NULL;
    else
    {
        *T=(BiTree)malloc(sizeof(BiTNode));
        (*T)->data=ch;
        CreateBiTree(&(*T)->lchild);
        CreateBiTree(&(*T)->rchild);
    }
}
