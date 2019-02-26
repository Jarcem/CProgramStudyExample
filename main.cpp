#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//void printEnumMsg();
//void chooseColor();
//void intToEnum();
#define test_msg(a, b) \
	printf(#a " and " #b " : test successful\n");
#define tokenpaster(n) printf("token: %d\n", token##n);
#if !defined (MESSAGE)
	#define MESSAGE "this was the new defined"
#endif
#define MAX(a, b) ((a)>(b)?(a):(b))

enum TEST {
	TEST, TEST1, TEST2, TEST3, TEST4, TEST5
} test;

extern void printMsg();
int num;

void printEnumMsg(){
	printf("%d\n%d\n%d\n%d\n%d\n%d\n", TEST, TEST1, TEST2, TEST3, TEST4, TEST5);
}

void chooseColor(){
	enum color { red=1, green, blue };
 
    enum  color favorite_color;
 
    /* ask user to choose color */
    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
    scanf("%d", &favorite_color);
 
    /* 输出结果 */
    switch (favorite_color)
    {
    case red:
        printf("你喜欢的颜色是红色\n");
        break;
    case green:
        printf("你喜欢的颜色是绿色\n");
        break;
    case blue:
        printf("你喜欢的颜色是蓝色\n");
        break;
    default:
        printf("你没有选择你喜欢的颜色\n");
    }
}

void intToEnum(){
	enum test{
		test1 = 10, test2, test3
	};
	
	int a = 1;
	enum test test0;
	test0 = test1;
	printf("%d\n", test0);
	test0 = (enum test) a;
	printf("%d\n", test0);
}

void printPointer(){
	int var[] = {10,100,1000};
	int *ptr;
	
	ptr = var;
	for(int i = 0; i < 3; i++){
		printf("var[%d] = %x\n", i, ptr);
		printf("var[%d] = %d\n\n",i , *ptr);
		ptr++;
	}
}

void populate_array(int *array, int size, int (*getNextValue)()){
	for (int i = 0; i < size; i++){
		array[i] = getNextValue();
	}
}

int getRandomValue(){
	return rand();
}

struct Example{
	char parameter[50];
	char parameter1[50];
	int parameter2;
}example;

struct Book{
	char title[50];
	char author[50];
	int book_id;
}book = {"The C Programming Language", "Jarcem", 123654651};


////此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
////同时又声明了结构体变量s1
////这个结构体并没有标明其标签
//struct 
//{
//    int a;
//    char b;
//    double c;
//} s1;
// 
////此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
////结构体的标签被命名为SIMPLE,没有声明变量
//struct SIMPLE
//{
//    int a;
//    char b;
//    double c;
//};
////用SIMPLE标签的结构体，另外声明了变量t1、t2、t3
//struct SIMPLE t1, t2[20], *t3;
// 
////也可以用typedef创建新类型
//typedef struct
//{
//    int a;
//    char b;
//    double c; 
//} Simple2;
////现在可以用Simple2作为类型声明新的结构体变量
//Simple2 u1, u2[20], *u3;

////此结构体的声明包含了其他的结构体
//struct COMPLEX
//{
//    char string[100];
//    struct SIMPLE a;
//};
// 
////此结构体的声明包含了指向自己类型的指针
//struct NODE
//{
//    char string[100];
//    struct NODE *next_node;
//};
void printStruct(struct Book *book){
	printf("title: %s\n", book->title);
	printf("author: %s\n", book->author);
	printf("id: %d\n", book->book_id);
}

int factorial(unsigned int i){
	if (i <= 1)
		return 1;
	
	return i * factorial(i-1);
}

int fibonaci(int i)
{
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   return fibonaci(i-1) + fibonaci(i-2);
}

double average(int num, ...){
	va_list va_list;
	double sum = 0.0;
	int i;
	va_start(va_list, num);
	for(i = 0; i < num; i++){
		sum += va_arg(va_list, int);
	}
	va_end(va_list);
	
	return sum/num;
}

int main( int argc, char *argv[] )  
{
   if( argc == 2 )
   {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 )
   {
      printf("Too many arguments supplied.\n");
   }
   else
   {
      printf("One argument expected.\n");
   }
}

//int main() {
//	int num1 = 1;
//	char ca = 'a';
//	char cb = 'a';
//	num = 101;
//	num1 = num++;
////	num1 = num>=101?2:3;
////	printf("%d \n", ca^cb);
//	printf("%d \n", num1);
//	printf("--------------\n"); 
//	printMsg();
//	printf("--------------\n"); 
//	printEnumMsg();
//	printf("--------------\n"); 
////	chooseColor(); 
////	printf("--------------\n"); 
//	intToEnum();
//	printf("--------------\n"); 
//	printPointer();
//	printf("--------------\n"); 
//	int val = 100101;
//	int *ptr, **pptr;
//	ptr = &val;
//	pptr = &ptr;
//	
//	printf("val = %x, %d\n", val, val);
//	printf("ptr = %x, %d\n", *ptr, *ptr);
//	printf("pptr = %x, %d\n", **pptr, **pptr);
//	printf("--------------\n"); 
//	int newarray[10];
//	populate_array(newarray, 10, getRandomValue);
//	for (int i = 0; i < 10; i++){
//		printf("number of [%d] was %d\n", i, newarray[i]);
//	}
//	printf("--------------\n"); 
//	char str1[12] = "Hello";
//   char str2[12] = "World";
//   char str3[12];
//   int  len ;
// 
//   /* 复制 str1 到 str3 */
//   strcpy(str3, str1);
//   printf("strcpy( str3, str1) :  %s\n", str3 );
// 
//   /* 连接 str1 和 str2 */
//   strcat( str1, str2);
//   printf("strcat( str1, str2):   %s\n", str1 );
// 
//   /* 连接后，str1 的总长度 */
//   len = strlen(str1);
//   printf("strlen(str1) :  %d\n", len );
//   printf("--------------\n"); 
//   printf("title: %s\nauthor: %s\nbook id: %d\n", book.title, book.author, book.book_id);
//   printf("--------------\n"); 
//   struct Book books1;
//   strcpy(books1.title, "test book 1");
//   strcpy(books1.author, "Jarcem");
//   books1.book_id = 1232341234;
//   printf("book title: %s\nbook author: %s\n book id: %d\n", books1.title, books1.author, books1.book_id);
//   printf("--------------\n"); 
//   printStruct(&books1);
//   printf("--------------\n"); 
//   struct bs{
//        unsigned a:1;
//        unsigned b:3;
//        unsigned c:4;
//    } bit,*pbit;
//    bit.a=1;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
//    bit.b=7;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
//    bit.c=15;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
//    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);    /* 以整型量格式输出三个域的内容 */
//    pbit=&bit;    /* 把位域变量 bit 的地址送给指针变量 pbit */
//    pbit->a=0;    /* 用指针方式给位域 a 重新赋值，赋为 0 */
//    pbit->b&=3;    /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
//    pbit->c|=1;    /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
//    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);    /* 用指针方式输出了这三个域的值 */
//    printf("--------------\n"); 
//    printf("%d", ((3-1)||(2-1)));
//    printf("--------------\n"); 
//    union UNIONS{
//    	int number;
//    	char str[20];
//	}unions;
//	strcpy(unions.str, "test");
//	printf("%d\n", unions.number);
//	printf("%s\n", unions.str);
//	printf("--------------\n"); 
//	struct{
//		unsigned int width:1;
//		unsigned int height:1;
//	}status1;
//	struct{
//		unsigned int width;
//		unsigned int height;
//	}status2;
//	printf("size one: %d\nsize two: %d\n", sizeof(status1), sizeof(status2));
//	printf("--------------\n"); 
//	struct
//	{
//  		unsigned int age : 3;
//	} Age;
//	Age.age = 4;
//   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
//   printf( "Age.age : %d\n", Age.age );
// 
//   Age.age = 7;
//   printf( "Age.age : %d\n", Age.age );
// 
//   Age.age = 8; // 二进制表示为 1000 有四位，超出
//   printf( "Age.age : %d\n", Age.age );
//   printf("--------------\n"); 
////   typedef unsigned int uint;//定义一个类型
////   
////   char string[100];
////   gets(string); 
////   printf("you input: %s\n", string);
//   printf("--------------\n"); 
//   printf("date : %s\nfile : %s\ntime : %s\nline : %d\nstdc : %d\n", __DATE__, __FILE__, __TIME__, __LINE__, __STDC__); 
//   printf("--------------\n"); 
//   test_msg(alex, alice);
//   printf("--------------\n"); 
//   int token34 = 43;
//   tokenpaster(34);
//   printf("--------------\n"); 
//   printf("Here is the message: %s\n", MESSAGE);
//   printf("--------------\n"); 
//   printf("Max between 20 and 10 is %d\n", MAX(20, 10));
//   printf("--------------\n"); 
//   int i = 10;
//   printf("%d the factorial was %d\n", i, factorial(i));
//   printf("--------------\n"); 
//   for (int i = 0; i < 10; i++)
//    {
//       printf("%d\t\n", fibonaci(i));
//    }
//   printf("--------------\n"); 
//   printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
//   printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
//   printf("--------------\n"); 
//      
//	return 0;
//}


//插入排序
//void insertion_sort(int arr[], int len){
//    int i,j,temp;
//    for (i=1;i<len;i++){
//            temp = arr[i];
//            for (j=i;j>0 && arr[j-1]>temp;j--)
//                    arr[j] = arr[j-1];
//            arr[j] = temp;
//    }
//} 

//选择排序
//void swap(int *a,int *b) //交換兩個變數
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void selection_sort(int arr[], int len) 
//{
//    int i,j;
// 
//    for (i = 0 ; i < len - 1 ; i++) 
//    {
//        int min = i;
//        for (j = i + 1; j < len; j++)     //走訪未排序的元素
//            if (arr[j] < arr[min])    //找到目前最小值
//                min = j;    //紀錄最小值
//           swap(&arr[min], &arr[i]);    //做交換
//    }
//} 

//冒泡排序
//void bubble_sort(int arr[], int len) {
//    int i, j, temp;
//    for (i = 0; i < len - 1; i++)
//        for (j = 0; j < len - 1 - i; j++)
//            if (arr[j] > arr[j + 1]) {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//}
//int main() {
//    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
//    int len = (int) sizeof(arr) / sizeof(*arr);
//    bubble_sort(arr, len);
//    int i;
//    for (i = 0; i < len; i++)
//        printf("%d ", arr[i]);
//    return 0;
//} 
