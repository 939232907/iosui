//
//  main.c
//  Class07 结构体
//
//  Created by 高亚 on 16/8/2.
//  Copyright © 2016年 rimi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//    struct Student{
//        //成员变量
//        int number;
//       // char names[20];
//        char *name;
//        int age;
//
//    };

struct Student {
    int number;
    char *name;
    char gender;
    int score;
}student1, student2, student3;




typedef struct _Players {
    int number;
    char *name;
    int money;
}Players;



struct Date {
    int year;
    int month;
    int day;
};


struct Richer {
    char *name;
    long money;
   
    struct Date birth;
};

;

typedef enum _WorkDay{
    monday ,
    tuesday,
    wednesday = 11,
    thursday,
    friday
} WorkDay;


typedef union _iPhone {
    char *type;
    int price;
}iPhone;


void changeRicherMoney(struct Richer *richer){


   // (*richer).money = 0;
    richer ->money = 0;
    printf("自定义：%ld\n",  (*richer).money);

}



int main(int argc, const char * argv[]) {
#pragma mark - 结构体的定义
 

//    
////  struct Student student = {111, "tom", 22};
//    struct Student student;
//    student.age = 33;
//    //strcpy(student.names, "kiki");
//    student.name = "kiki";
//    student.number = 111;
//    
//    printf("student = %d, name = %s, age = %d\n", student.number, student.name, student.age);
    
    
    /*练习：	定义结构体Student，包含学号、姓名、性别、成绩等不同数据类型的成员变量，声明3个结构体变量代表3名学员，初始化3个结构体变量，最后根据学员的成绩，输出不及格学员的详细信息。
     
     */
    
   
    
   
    struct Student student1 = {111, "tom", 'm', 66};
    struct Student student2 = {112, "sam", 'f', 55};
    struct Student student3 = {113, "kimi", 'm', 33};
    struct Student students[3] = {student1, student2, student3};
    for (int i = 0; i < 3; i ++) {
        if (students[i].score < 60) {
            printf("name = %s, score = %d\n", students[i].name, students[i].score);
        }
    }
    
//    if (student1.score < 60) {
//        printf("name = %s, score = %d\n", student1.name, student1.score);
//    }
//    if (student2.score < 60) {
//        printf("name = %s, score = %d\n", student2.name, student2.score);
//    }
//    if (student3.score < 60) {
//        printf("name = %s, score = %d\n", student3.name, student3.score);
//    }
    
    
#pragma mark - 结构体内存
/*
 1.结构体类型的时候，系统并没有为其分配内存
 2.当你在定义一个结构体变量的时候，才会分配，分配的大小，通常是所有类型之和
 */
    
#pragma mark - 结构体变量
    //  struct Student student1 = {111, "tom", 'm', 66};

    
    
//    struct Student {
//        int number;
//        char *name;
//        char gender;
//        int score;
//    }student1 = {111, "ssfff", 'f', 66};
   
    //不推荐使用
//    struct  {
//                int number;
//                char *name;
//                char gender;
//                int score;
//            }student11 = {111, "ssfff", 'f', 66};
//
    
    
#pragma mark - 结构体数组
//    int array[3] = {1, 2, 3};
//    struct Student  students[3] = {student1, student2, student3};
//    
//    /*
//     1    jack    1000
//     2    rose     800
//     3    zhangsan 100
//     */
//    
//    struct Players play1 = {1 ,   "jack",   1000};
//    struct Players play2 = {2 ,   "rose",    800};
//    struct Players play3 = {3 ,   "tom",   100};
//    
//    struct Players plays[3] = {play1, play2, play3};
//    
//    for (int i = 0; i < 3; i ++) {
//        printf("%d     %s       %d\n",plays[i].number, plays[i].name, plays[i].money);
//    }
    
#pragma mark - 结构体指针
    
    struct Richer richer1 = {"王健林", 888888888888888};
    
    struct Richer *p = &richer1;
    
    
    printf("name = %s, money = %ld\n", (*p).name, (*p).money);
    
    printf("name = %s, money = %ld\n", p ->name, p ->money);
    /*
        获取结构体变量的值：
     1.变量名.成员变量名
     2.(*p).成员变量名
     3. p ->成员变量名
     */
    
#pragma mark - 结构体变量作为函数参数
    
//    changeRicherMoney(&richer1);
//    
//    printf("main：%ld\n", richer1.money);
    
#pragma mark - 结构体的嵌套
//    
//    struct Richer richer2 = {"马云", 77777777, {1964, 9, 10}};
//    printf("input name:");
//   // scanf("%d", &richer2.birth.year);
//    richer2.name = malloc(30);
//    scanf("%s", richer2.name
//          );
//    
//    printf("%s\n", richer2.name);
   // printf("%d\n",   richer2.birth.year);
    
    
#pragma mark - 共用体和枚举
    
 
    enum _WorkDay day = monday;
    printf("%d\n", day);
  
    union _iPhone iphone = {"5s"};

    
//    printf("type = %s, price:%d\n", iphone.type, iphone.price);
    
    
    int a = 10;
    typedef int CustomInt;
    
    CustomInt b = 30;
    printf("b = %d\n", b);
    
    return 0;
}

















