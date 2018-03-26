#include "SegmentTree.h"

//建树
void Build(int l,int r,int node)
{
    if(l==r)//叶子节点
    {
        Sum[node]=A[l];//
        return ;
    }
    int m=(l+r)>>1;//除以2
    Build(l,m,node<<1);
    Build(m+1,r,node<<1|1);//除以2,加1
    PushUP(node);
}

//求和
void PushUP(int node)
{
    Sum[node]=Sum[node<<1] + Sum[node<<1|1];
}
