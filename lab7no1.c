#include <stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)

    // a)  functionM();
    //เรียกได้ เพราะ ไม่ต้องส่งค่า

    // b)  a = functionM();
    // มีปัญหาชนิดข้อมูล funtion M() คืน double แต่ a เป็น int ทศนิยมหาย

    // c)  b = functionN(a, b);
    // มีปัญหาพารามิเตอร์ตัวที่ 2 เพราะ funtionN(int n, double x) ส่ง a ไม่มีปัญหาอะไร แต่ส่ง b เป็น int ไปลง double x 
    // ทำให้เกิดการแปลงจาก int ไป double ยังสามารถ complie ได้

    // d)  r = functionO(r,a,s,b);
    // ไม่มีปัญหาอะไร เพราะพารามิเตอร์ตรงตามชนิดข้อมูลของ functionO(double, int, double, int)

    // e)  s = functionP(a,b,c,d,e);
    // มีปัญที่จำนวนของพารามิเตอร์ functionP รับพารามิเตอร์แค่ 4 ตัว แต่ส่ง 5 ตัว ทำให้เกิด complie error

    // f)  u = functionM();
    // ไม่มีปัญหา เพราะว่า functionM คืน double สามารถใส่ในตัวแปร u ที่เป็น double ได้

    // g)  c = d + functionN(r,s);
    // มีปัญหา ชนิดพารามิเตอร์ตัวที่ 1 เพราะ functionN(int n, double x) ถ้าส่ง r ที่เป็น double ไปให้ int n run ได้แต่ควรระวังเรื่องการส่ง double ไป int

    // h)  t = s * functionO(r, a, r, a);
    // ไม่มีปัญหาเพราะชนิดของพารามิเตอร์ถูกต้องหมด และคืน double เอาไปคูณกับ s ที่เป็น double ได้

    // i)  a = v + functionP(r, s, t, t);
    // มีปัญหาที่ชนิดของพารามิเตอร์ทุกตัว เพราะว่า functionP(int a, int n, int b, int c)  เป็น int หมด แต่ r, s, t, t เป็น double หมด 
    // ซึ่งควรระวัง เพราะทำให้ทศนิยมหาย อีกทั้ง นำผลไปคูณ กับ v ที่เป็น double ทำให้ค่าที่ได้ double ไปใส่ใน int ทำให้ค่าเพี้ยน

    // j)  functionP(functionN(a, a), s, t, t+r);
    // มีปัญหาที่พารามิเตอร์ตัวที่ 2-4  functionN(a, a) ตัวที่ 2 ควรเป็น double แต่ส่ง a ที่เป็น int แปลงได้แต่ควรระวัง
    // funtionN เป็น int สามารถเอาไปเป็นพารามิเตอร์ตัวที่ 1 ของ functionP ได้ แต่ ตัวที่หลือ ของ functionP ก็ต้องเป็น int ทั้งหมดแต่
    // ส่ง s t t+r ซึ่งเป็น double ทั้งหมด 

    // k)  v = functionP(functionN(a, a), s, t, t+r);
    // เหมือนกับข้อ j ซึ่งพารามิเตอร์เป็น double แต่ functionP ต้องการ int ทั้งหมด
}
