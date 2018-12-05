/*
 * 逆波兰表示法是一种将运算符写在操作数后面的描述程序（算式）的方法。
 * (1+2)*(3-4) => 1 2 + 3 4 - *
 * 注意点:1.数组长度是否够长
 *       2.减法运算的顺序是否正确
 *       3.是否支持2位以上的数值（操作数）
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top, S[1000];

void push(int e){
    // top 加 1 后将元素插入 top 所指的位置
    S[++top] = e;
}

int pop(){
    top--;
    // 返回 top 所指的元素
    return S[top+1];
}


int main(){
    int a, b;
    top = 0;
    char s[100];

    printf("Please enter your sequence: \n");

    while(scanf("%s", s) != EOF){
        
        if(s[0] == '+'){
            a = pop();
            b = pop();
            push(a+b);
        } else if(s[0] == '-'){
            b = pop();
            a = pop();
            push(a-b);
        } else if(s[0] == '*'){
            a = pop();
            b = pop();
            push(a*b);
        } else{
            push(atoi(s));
        }
    }
    printf("%d \n", pop());
    return 0;
}

