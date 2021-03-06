#define LIST_INIT_SIZE 100 //线性存储空间初始分配量
#define LISTINCREMENT 10 //分配增量

typedef struct {
	ElemType *elem; //存储空间基地址
	int length;     // 当前长度
	int listsize;   //分配的存储容量
}SList;

//构建空线性表
Status InitList(SList *L);

//销毁空线性表
Status DestroyList(SList *L);

//判断是否为空表
Status ListEmpty(SList L);

//获取元素个数
int ListLength(SList L);

//返回第一个与e满足的元素位序
int LocateElem(SList L, ElemType e, Status(Compare)(ElemType, ElemType));

//前驱 获取元素cur_e的前驱
Status PriorElem(SList L, ElemType cur_e, ElemType* pre_e);

//后继 获取元素cur_e的后继
Status NextElem(SList L, ElemType cur_e, ElemType* next_e);

//插入
Status ListInsert(SList *L, int i, ElemType e);

//删除
Status ListDelete(SList *L, int i, ElemType *e);

//遍历 用visit函数访问顺序表
void ListTraverse(SList L, void (Visit)(ElemType));

//合并
void MergeList(SList La, SList Lb, SList *Lc);