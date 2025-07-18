#include <stdio.h>

int main(){
    int nameInitial = 'S';
    int num = 18;
    float pi = 47.90;
    char str[] = "male";

    printf("nameInitial = %c\n", nameInitial); //แสดงตัวอักษรตัวแรก ของชื่อจริง
    printf("age = %d\n", num); //แสดง อายุ
    printf("weight = %.2f\n", pi); //แสดง น้ำหนัก ด้วยทศนิยม2ตำแหน่ง
    printf("character = %s\n", str); //แสดง เพศ

    return 0;
}