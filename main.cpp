#include <stdio.h>
#include <limits.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//void printEnumMsg();
//void chooseColor();
//void intToEnum();

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

int main() {
	int num1 = 1;
	char ca = 'a';
	char cb = 'a';
	num = 101;
	num1 = num++;
//	num1 = num>=101?2:3;
//	printf("%d \n", ca^cb);
	printf("%d \n", num1);
	printf("--------------\n"); 
	printMsg();
	printf("--------------\n"); 
	printEnumMsg();
	printf("--------------\n"); 
//	chooseColor(); 
//	printf("--------------\n"); 
	intToEnum();
	printf("--------------\n"); 
	printPointer();
	printf("--------------\n"); 
	int val = 100101;
	int *ptr, **pptr;
	ptr = &val;
	pptr = &ptr;
	
	printf("val = %x, %d\n", val, val);
	printf("ptr = %x, %d\n", *ptr, *ptr);
	printf("pptr = %x, %d\n", **pptr, **pptr);
	return 0;
}
