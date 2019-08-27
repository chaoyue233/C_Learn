//
//  caculateFun.c
//  c_study
//
//  Created by 吴超越 on 2018/4/6.
//  Copyright © 2018年 吴超越. All rights reserved.
//
#include <stdio.h>

// 定义常量
#define Height 10


extern int caculate3V(){
    int Long;
    int Width;
    printf("请输入长度\n");
    // 从控制台输入
    scanf("%d",&Long);
    printf("请输出宽度\n");
    scanf("%d",&Width);
    printf("高度为 ：%d \n",Height);
    return Long * Width * Height;
}
