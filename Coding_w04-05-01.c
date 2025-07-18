#include <stdio.h>

void countCall() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
//ผลลัพธ์ต่างกันหรือไม่ [w04-05-01: ค่าตัวนับจะเพิ่มขึ้นทุกครั้งที่เรียก (คงอยู่) w04-05-02: ตัวนับจะรีเซ็ตทุกครั้งที่เรียก (พิมพ์ 1 เสมอ)]
//ความแตกต่างของ static variable ,non-static variable จะถูกรีเซ็ตทุกครั้งที่ฟังก์ชันถูกเรียกใหม่ ในขณะที่ static variable จะคงค่าไว้ระหว่างการเรียกฟังก์ชัน ทำให้สามารถนับจำนวนครั้งที่ฟังก์ชันถูกเรียกได้อย่างต่อเนื่อง
//อภิปรายและสรุป โค้ดทีมีstatic จะสามารถถูกจำนวนฟังชั่นไได้ต่อเนื่อง แต่โค้ดที่ไม่มีstatic จะรีเซ็ตทุกครั้งทำให้ไม่สามารถนับจำนวนฟังก์ชั่นได้ต่อเนื่อง 