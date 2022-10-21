#include <stdio.h>
void Menu()
{
}
mian()
{
    Seqlist L;
    DataType x;
    int n, i, loc;
    char ch1, ch2, a;
    ch1 = 'y';
    while (ch1 == 'y' || ch1 == 'Y')
    {
        Menu();
        scanf("%c", &ch2);
        getchar();
        switch (ch2)
        {
        case '1':
            InitList(&L);
            printf("请输入建立线性表的个数：");
            scanf("%d", &n);
            CreateList(&L, n);
            printf("建立的线性表为：");
            DispList(&L);
            break;
        case '2':
            printf("请输入要插入的位置：");
            scanf("%d", &i);
            printf("请输入要插入的元素值：");
            scanf("%d", &x);
            if (InsElem(&L, i, x))
            {
                printf("已成功在第%d的位置上插入%d，插入后的线性表为：\n", i, x);
                DispList(&L);
            }
            else

                printf("输入插入的参数错误！");
            break;
        case '3':
            printf("请输入要删除的元素的位置：");
            scanf("%d", &i);
            if (DelElem(&L, i, &x))
            {
                printf("已成功在第%d的位置上删除%d，删除后的线性表位：\n", i, x);
                DispList(&L);
            }
            else
                printf("\n输入删除的参数错误！");
            break;
        case '4':
            printf("请输入要查看表中元素位置（从1开始）：");
            scanf("%d", &i);
            if (GetElem(&L, i, &x))

                printf("当前线性表第%d个元素的值为：%d", i, x);
            else
                printf("输入的位置错误！");
            break;
        case '5':
            printf("请输入要查找的元素值为：");
            scanf("%d", &x);
            loc = Locate(&L, x);
            if (loc)

                printf("查找元素值为%d的位置为：%d", x, loc);
            else
                printf("该表中无此元素！");
            break;
        case '6':
            printf("当前线性表的长度为:%d", L.Length);
            break;
        case '0':
            ch1 = 'n';
            break;
        default:
            printf("输入有误，请输入0～6进行选择！");
        }
        if (ch2 != '0')
        {
            printf("\n按回车键继续，按任意键返回主菜单！\n");
            a = getchar();
            if (a != '\xA')
            {
                getchar();
                ch1 = 'n';
            }
        }
    }
}