/*
文件名: homework-10
作者: 张静
创建时间: 2024年11月17日
 完成功能: 本程序用于求解作业1中的第10题。
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // 输入字符串
    char str[1000];
    fgets(str, sizeof(str), stdin);
    char ans[1000];

    // 遍历字符串
    for (int l = 0, r = 0; r < strlen(str); r++)
    {   
        // 假设str当前字符还没在ans中
        bool f = true;
        for (int i = 0; i <= l; i++)
        {
            //遍历ans, 如果有对应字, 就标记为false
            if (str[r] == ans[i])
                f = false;
        }

        // 如果没有, 就添加到ans中
        if (f)
        {
            ans[l] = str[r];
            l++;
        }
    }

    // 打印结果
    for(int i  =0; i < strlen(ans); i++)
    {
        printf("%c", ans[i]);
    }

    return 0;
}
