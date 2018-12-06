#include<stdio.h>

int main(void)
{
    float v, total;
    printf("请输入下载速度(Mb/s):");
    scanf("%f", &v);

    printf("请输入文件大小(MB):");
    scanf("%f", &total);

    printf("At %.2f megabits per second, a file of %.2f megabytes\n"
            "dowloads in %.2f seconds.", v, total, total * 8 / v);
    
    return 0;
}
