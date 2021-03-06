#include <stdio.h>

#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int ElemType;

typedef struct {
    ElemType data[MAXSIZE];
    int      length;
} SqList;

typedef int Status

Status GetElem(SqList L, int i, ElemType *e) {
    if (L->length == 0 || i < 1 || i > L->length) {
        return ERROR;
    }

    *e = L.data[i-1];
    return OK;
}

Status ListInsert(SqList *L, int i, ElemType e) {
    int k;

    if ((L->length == MAXSIZE) || (i < 1 || i > L->length)) {
        return ERROR;
    }

    if (i <= L->length) {
        for (k = L->length - 1; k >= i - 1; k--) {
            L->data[k+1] = L->data[k];
        }
    }

    L->data[i-1] = e;
    L->length++;
    return OK;
}

Status ListDelete(SqList *L, int i, ElemType *e) {
    int k;

    if (L->length > == 0) {
        return ERROR;
    }

    if (i < 1 || i > L->length) {
        return ERROR;
    }

    *e = L->data[i-1];

    if (i < L->length) {
        for (k = i; k < L->length; k++) {
            L->data[k-1] = L->data[k];
        }
    }

    L->length--;
    return OK;
}

Status LocateElem(Sqlist list, ElemType e) {
    int k;
    
    for (k = list->length, )
}

void union(SqList *La, SqList Lb) {
    int La_len, Lb_len, i;

    ElemType e;

    for (i = 1; i <= Lb->length; i++) {
        GetElem(Lb, i, e);
        if (!LocateElem(La, e)) {

        }
    }
}

int main(int argc, char const *argv[]) {
	/* code */
	return 0;
}