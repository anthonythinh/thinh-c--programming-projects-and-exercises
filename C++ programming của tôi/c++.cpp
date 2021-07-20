/**
 * Tinh giai thua KHONG dung phuong phap de quy
 *  
 * @author viettuts.vn
 */
 
#include <iostream>
  
using namespace std;
 
/**
 * tinh giai thua
 * 
 * @author viettuts.vn
 * @param n: so nguyen duong
 * @return giai thua cua so n
 */
long tinhGiaithua(int n) {
 int i;
    long giai_thua = 1;
    if (n == 0 || n == 1) {
        return giai_thua;
    } else {
        for (i = 2; i <= n; i++) {
            giai_thua *= i;
        }
        return giai_thua;
    }
}
 
/**
 * Ham main
 */
int main() {
    int a = 5;
    int b = 0;
    int c = 10;
    cout << "Giai thua cua " <<  a << "la: " << tinhGiaithua(a) << endl;
    cout << "Giai thua cua " <<  b << "la: " << tinhGiaithua(b) << endl;
    cout << "Giai thua cua " <<  c << "la: " << tinhGiaithua(c) << endl;
}