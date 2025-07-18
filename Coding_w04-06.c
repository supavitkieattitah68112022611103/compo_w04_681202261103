#include <stdio.h>

const int GLOBAL_RATE =20; //ประกาศตัวแปรคงที่ (constant) ที่มีค่า 20

void calculate() {
    const int LOCAL_BONUS =80; //ประกาศตัวแปรคงที่ (constant) ที่มีค่า 80
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);//แสดงค่าของตัวแปร GLOBAL_RATE
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);//แสดงค่าของตัวแปร LOCAL_BONUS
}

int main() {
    calculate();  
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);//แสดงค่าของตัวแปร GLOBAL_RATE ในฟังก์ชัน main
    return 0;
}

//ค่าคงที่global rate และ localbonus ต่างกันอย่างไร=โดย global rate เป็นค่าคงที่ที่สามารถเข้าถึงได้จากทุกส่วนของโปรแกรม ในขณะที่ local bonus เป็นค่าคงที่ที่สามารถเข้าถึงได้เฉพาะภายในฟังก์ชันหรือบล็อกของโค้ดที่ถูกประกาศไว้เท่านั้น
//หากglobal=20 local=80 = ค่าที่แสดงผลในcalculate() จะเป็น20 และ 80 แต่หากแสดงผลในช่องmain() จะแสดงเพียง 20 เพราะlocal ถุกประกาศไว้ในฟังชั่น calculate() เท่านั้น
//อภิปรายและสรุป=ค่าคงที่ global rate และ local bonus มีความแตกต่างกันในเรื่องของขอบเขตการเข้าถึง โดย global rate สามารถเข้าถึงได้จากทุกส่วนของโปรแกรม ในขณะที่ local bonus สามารถเข้าถึงได้เฉพาะภายในฟังก์ชันที่ถูกประกาศไว้เท่านั้น
//สรุปผลการทดลอง=localจะไม่สามารถเข้าถึงฟั่งชั่นอื่นๆที่นอกเหนือจากที่ประกาศ ต่างกับglobalที่จะเข้าถึงได้ทุกฟังชั่น