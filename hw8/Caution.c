以下程序的运行结果是   C!!!!!
 #define  A 3.5
 #define S(b) A*b*b
 main()
     {
        int x=1,y=2;
        printf("%f\n",S(x+y))；
      }
 A 14.0   B 3   C  7.5   D 10.5
注意：S(x+y)是7.500，S(3)是31.5000



宏定义：
#define M(y)((y)*(y)+3*(y))
#define MAX(a,b)((a>b)?(a):(b))



文件操作：

!!!fwrite:
size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream);
返回值：返回实际写入的数据块数目
（1）buffer：是一个指针，对fwrite来说，是要获取数据的地址；
（2）size：要写入内容的单字节数；
（3）count:要进行写入size字节的数据项的个数；
（4）stream:目标文件指针；
（5）返回实际写入的数据项个数count。

!!!feof(fp)：返回非零值/0

!!!fseek(fp,20,SEEK_SET);
意思是把fp文件读写位置指针从文件开始后移20个字节.
SEEK_SET： 文件开头
SEEK_CUR： 当前位置
SEEK_END： 文件结尾

!!!ftell函数是用来获取文件的当前读写位置;
函数原型: long ftell(FILE *fp)
函数功能:得到流式文件的当前读写位置,其返回值是当前读写位置偏离文件头部的字节数.


//--------------------------------------
encrypt:
'\0' !

findKeyword:
先把词(alpha/digit)都找出来
再判断前面偶数个双引号

tail:
argc是真正参数个数+1
argv从1 ~ argc-1

file:
strcpy、strcat的技巧(加'\0')
遇到\0停止
strcat自动覆盖\0
