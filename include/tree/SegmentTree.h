#ifndef SEGMENTTREE_H_INCLUDED
#define SEGMENTTREE_H_INCLUDED



#endif // SEGMENTTREE_H_INCLUDED
#define maxn 256

int Sum[maxn<<2];
int A[maxn],n;

void Build(int l,int r,int node);
void PushUP(int node);
