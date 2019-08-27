//
//  pointTest.c
//  c_study
//
//  Created by 吴超越 on 2018/4/6.
//  Copyright © 2018年 吴超越. All rights reserved.
//

#include "pointTest.h"

void pointTest1(){
    int i = 10;
    int* p = &i;
    printf("p is %d \n",p);
    p++;
    printf("p is %d \n",p);
    printf("*p is %d \n",*p);
}

struct Person{
    char name[10];
    int age;
};
