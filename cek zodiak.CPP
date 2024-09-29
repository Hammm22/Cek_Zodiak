#include <iostream>
using namespace std;
int main() {
    int day, month;
    cout << "Masukkan tanggal lahir (hari dan bulan) ";
    cin >> day >> month;

    string zodiak;

    if ((month == 1 && day >=20)|| (month == 2 && day <=18)) {
        zodiak = "Aquarius";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        zodiak = "Pisces";
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        zodiak = "Aries";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        zodiak = "Taurus";
    } else if((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        zodiak = "Gemini";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        zodiak = "Cancer";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <=22)) {
        zodiak = "Leo";
    }else if ((month == 8 && day >=23) || (month == 9 && day <= 22)) {
        zodiak = "Virgo";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <=21)) {
        zodiak = "Libra";
    } else if ((month == 10 && day >=23) || (month == 11 && day <=21)) {
        zodiak = "Scorpio";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        zodiak = "Sagitarius";
    } else if ((month == 12 && day >=22) || (month == 1 && day <= 19)) {
        zodiak = "Capricorn";
    } else {
        zodiak = "cari sendiri";
    }
    cout << "Zodiak Anda adalah: " << zodiak << endl;
    return 0;
    }