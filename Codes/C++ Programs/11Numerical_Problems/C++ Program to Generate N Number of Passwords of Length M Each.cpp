#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void permute(int *a, int k, int size)
{
    if (k == size)
        {
            for (int i = 0; i < size; i++)
                {
                    cout << *(a + i);
                }
            cout << endl;
        }
    else
        {
            for (int i = k; i < size; i++)
                {
                    int temp = a[k];
                    a[k] = a[i];
                    a[i] = temp;
                    permute(a, k + 1, size);
                    temp = a[k];
                    a[k] = a[i];
                    a[i] = temp;
                }
        }
}
int main(int argc, char **argv)
{
    cout << "Enter the length of the password: ";
    int m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
        {
            /*generates random number between 1 and 10*/
            a[i] = rand() % 10;
        }
    for (int i = 0; i < m; i++)
        {
            cout << a[i] << ", ";
        }
    cout << "The Passwords are: ";
    permute(a, 0, m);
}

/*
Enter the length of the password: 3
1, 7, 4, The Passwords are: 174
147
714
741
471
417

Enter the length of the password: 5
1, 7, 4, 0, 9, The Passwords are: 17409
17490
17049
17094
17904
17940
14709
14790
14079
14097
14907
14970
10479
10497
10749
10794
10974
10947
19407
19470
19047
19074
19704
19740
71409
71490
71049
71094
71904
71940
74109
74190
74019
74091
74901
74910
70419
70491
70149
70194
70914
70941
79401
79410
79041
79014
79104
79140
47109
47190
47019
47091
47901
47910
41709
41790
41079
41097
41907
41970
40179
40197
40719
40791
40971
40917
49107
49170
49017
49071
49701
49710
07419
07491
07149
07194
07914
07941
04719
04791
04179
04197
04917
04971
01479
01497
01749
01794
01974
01947
09417
09471
09147
09174
09714
09741
97401
97410
97041
97014
97104
97140
94701
94710
94071
94017
94107
94170
90471
90417
90741
90714
90174
90147
91407
91470
91047
91074
91704
91740