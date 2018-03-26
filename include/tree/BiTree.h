#ifndef BITREE_H_INCLUDED
#define BITREE_H_INCLUDED



#endif // BITREE_H_INCLUDED

#define OK 1
#define ERROR 0

typedef int Status;
typedef char TElemType;

typedef struct BiTNode
{
    TElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;


void CreateBiTree(BiTree *T);
