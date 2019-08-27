//
//  main.c
//  c_study
//
//  Created by 吴超越 on 2018/3/14.
//  Copyright © 2018年 吴超越. All rights reserved.
//

#include <stdio.h>
#include "pointTest.h"



// 函数声明 可以放到头文件中
extern int caculate3V(void);// 计算立方体体积test
void putCharGetCharTest(void);// 测试putChar() getChar() 方法
void putsGetsTest(void);// 测试 puts() gets() 方法
void toSmallCase(void);// 输入字符转换成小写字符
void evaluateArr(int* pPoint);// 给数组赋值 参数为int类型指针
void displayArr(int* pPoint);// 打印数组 参数为int类型指针

int main(int argc, const char * argv[]) {
    printf("Hello, World! %s \n",argv[0]);
//    printf("长方体体积为：%d \n",caculate3V());
//    putCharGetCharTest();
//    putsGetsTest();
//    toSmallCase();
//    int iArr[10];
//    evaluateArr(iArr);
//    displayArr(iArr);
    //pointTest1();
    return 0;
}

void putCharGetCharTest(){
    char c1,c2;
    c1 = getchar();
    putchar(c1);
    putchar(getchar());
    c2 = getchar();
    putchar(c2);
    putchar('\n');
}

void putsGetsTest(){
    char* C1 = "I LOVE YOU";
    puts(C1);
    puts("I LOVE\0 YOU"); //puts会以\0作为终止判断
    char cArr[30];
    gets(cArr);//gets()其实为unsafe 因为没有长度限制 如果字符过长的话。。。
    puts(cArr);
}

void toSmallCase(){
    char cBig,cSmall;
    printf("请输入大写的字符！\n");
    cBig = getchar();
    cSmall = cBig + 32;
    printf("%c\n",cSmall);
    return;
}

void evaluateArr(int* pPoint){
    for(int i=0;i<10;i++){
        pPoint[i] = i*10;
    }
}

void displayArr(int* pPoint){
    for(int i=0;i<10;i++){
        printf("number is %d \n",pPoint[i]);
    }
}

