#include <stdio.h>

/*
 * 2.2 混合运算和printf函数
 *   1、混合运算
 *      类型强制转换：语法：(变量类型)变量名
 *   2、printf函数介绍
 *      Ⅰ、printf函数可以输出各种类型的数据，包括整型、浮点型、字符型、字符串型等。
 *      实际原理是：printf函数将这些类型的数据格式化为字符串后，放入标准输出缓冲区，然后将结果显示到屏幕上。
 *      Ⅱ、语法如下：int printf(const char *format,...);
 *      printf函数根据format给出的格式打印输出到stdout(标准输出)和其它参数中。
 *      字符串格式(format)由两部分组成：显示到屏幕上的字符和定义printf函数显示的其他参数。
 *      可以指定一个包含文本在内的format字符串，也可以是映射到printf的其他参数的“特殊”字符。
 *      不同的%codes表示不同的变量类型，也可以限制变量的长度。
 *      Ⅲ、printf函数的具体代码格式如下：
 *       |      代码      |            格式
 *       |       %c       |            字符
 *       |       %d       |          带符号整数
 *       |       %f       |            浮点数
 *       |       %s       |           一串字符
 *       |       %u       |          无符号整数
 *       |       %x       |          无符号十六进制数，用小写字母
 *       |       %X       |          无符号十六进制数，用大写字母
 *       |       %p       |           一个指针
 *       |       %%       |           一个'%'符号
 *   Ⅳ、位于%和格式化命令之间的一个整数被称为最小字段宽度说明符，通常会加上空格来控制格式。
 *      Ⅰ、用%f精度修饰符指定想要的小数位数。例如：%5.2f会至少显示5位数字并带有2位小数的浮点数。
 *              %nf表示共有n个数字。%n.mf表示共有n个数字，小数点后有m个数字
 *      Ⅱ、用%s精度修饰符简单地表示一个最大的长度，以补充句点前的最小字段长度。
 *      printf函数的所有输出都是默认右对齐的，除非是在%符号后放置了负号。例如，%-5.2f会显示5位字符、2位小数位的符号数并且左对齐。
 * */
int main() {
//    int i=5;
    //整型数进行除法运算时，如果运算结果为小数，那么存储浮点数时一定要进行强制类型转换。
//    float f=i/2;
//    float k=(float)i/2;
//    printf("%f\n",f);//2.000000
//    printf("%f\n",k);//2.500000
//    int age=21;
//    printf("Hello %s,you are %d years old\n","Bob",age);
    //%s表示在该位置插入首个参数(一个字符串)，%d表示第二个参数(一个整数)。
    int id=10;
    float f=96.3;
    printf("student number=%3d,score=%5.2f\n",id,f);//printf函数的所有输出都是默认右对齐的。
    printf("student number=%-3d,score=%5.2f\n",id,f);
    id=100;
    f=62.6;
    printf("student number=%3d,score=%5.2f\n",id,f);
    printf("%10s\n","hello");//printf函数的所有输出都是默认右对齐的。
    return 0;
}
