#include <iostream>

using namespace std;

enum days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

char* day[7] =
{
    "sunday",
    "monday",
    "tuesday",
    "wednesday",
    "thursday",
    "friday",
    "saturday",
};

int main()
{
    int t, nam, index;
    cin >> t;
    for (index = 0; index < t; index++)
    {
        cin >> nam;
        int gt_nam, gt_thang, gia_tri, tong_gia_tri;
        bool kt_nam_nhuan;
        gt_nam = nam/100;
        if ((nam%4 == 0 && nam%100 != 0) || (nam%400 ==0))
        {
            kt_nam_nhuan = 1;
        }
        else
        {
            kt_nam_nhuan = 0;
        }
        gt_nam = gt_nam%4;
        switch (gt_nam)
        {
        case 3:
            gt_nam = 0;
            break;
        case 2:
            gt_nam = 2;
            break;
        case 1:
            gt_nam = 4;
            break;
        case 0:
            gt_nam = 6;
            break;
        }
        if (kt_nam_nhuan)
        {
            gt_thang = 6;
        }
        else
        {
            gt_thang = 0;
        }
        tong_gia_tri = nam%100;
        gia_tri = tong_gia_tri/4;
        tong_gia_tri = tong_gia_tri + gia_tri + gt_nam + gt_thang + 1;
        tong_gia_tri = tong_gia_tri%7;
        cout << day[tong_gia_tri] << endl;
    }
    return 0;
}
