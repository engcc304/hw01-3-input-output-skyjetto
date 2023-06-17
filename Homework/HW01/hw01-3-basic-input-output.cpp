/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/

#include <stdio.h>

int main() {
    char fname[20], lname[20] ;
    printf( "First Name: " ) ; scanf( "%s", fname ) ;
    printf( "Last Name: " ) ;  scanf( "%s", lname ) ;
    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand", fname, lname ) ;
    return 0 ;
}