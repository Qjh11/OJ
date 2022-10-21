#include <stdio.h>
void toOct(int input) {
    int result[10],index=0;
    int next = 1,oct,deal=input;
    while(deal != 0){
        next = deal/8;
        if(next == 0){
             result[index]=deal%8;
             break;
        }
        oct = deal%8;
        deal = next;
        result[index]=oct;
        index++;
    }
    printf("%d转换为八进制为:",input);
    for (int i = index; i >=0 ; i--)
    {
        printf("%d",result[i] );
    }
    printf("\n");
}
int main(){
    printf("请输入一个非负整数\n");
    int input;
        scanf("%d",&input);
        toOct(input);

    return 0;

}