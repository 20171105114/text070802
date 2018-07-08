//
//  main.cpp
//  text070802
//
//  Created by lishuxin on 2018/7/8.
//  Copyright © 2018年 lishuxin. All rights reserved.
//
#include <iostream>

int main(int argc, const char * argv[])
{
    FILE*a;
    char s1[200];
    char s2[200];
    char s3[200];
    char s4[200];
    char s5[200];
    char s6[200];
    char s7[200];
    if((a=fopen("/User/s20171105111/Desktop/test/File.csv","r"))==0)
    {
        printf("文件不存在、n");
    }
    else
    {
        fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s",s1,s2,s3,s4,s5,s6,s7);
        printf("%s\n,%s\n,%s\n,%s\n,%s\n,%s\n,%s\n",s1,s2,s3,s4,s5,s6,s7);
        
    }
    return 0;
    
}
