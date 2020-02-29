/*
 * C Program to find the possible subsets of the String
 */
#include <stdio.h>

char string[50], n;
void subset(int, int, int);

int main()
{
    int i, len;
    printf("Enter the len of main set : ");
    scanf("%d", &len);
    printf("Enter the elements of main set : ");
    scanf("%s", string);
    n = len;
    printf("The subsets are :\n");
    for (i = 1; i <= n; i++)
        subset(0, 0, i);
}

/*Function to find the number of subsets in the given string*/

void subset(int start, int index, int num_sub)
{
    int i, j;
    if (index - start + 1  ==  num_sub)
        {
            if (num_sub  ==  1)
                {
                    for (i = 0; i < n; i++)
                        printf("%c\n", string[i]);
                }
            else
                {
                    for (j = index; j < n; j++)
                        {
                            for (i = start; i < index; i++)
                                printf("%c", string[i]);
                            printf("%c\n", string[j]);
                        }
                    if (start != n - num_sub)
                        subset(start + 1, start + 1, num_sub);
                }
        }
    else
        {
            subset(start, index + 1, num_sub);
        }
}
/*
*OUTPUT:
Enter the len of main set : 11
Enter the elements of main set : programming
The subsets are :
p
r
o
g
r
a
m
m
i
n
g
pr
po
pg
pr
pa
pm
pm
pi
pn
pg
ro
rg
rr
ra
rm
rm
ri
rn
rg
og
or
oa
om
om
oi
on
og
gr
ga
gm
gm
gi
gn
gg
ra
rm
rm
ri
rn
rg
am
am
ai
an
ag
mm
mi
mn
mg
mi
mn
mg
in
ig
ng
pro
prg
prr
pra
prm
prm
pri
prn
prg
rog
ror
roa
rom
rom
roi
ron
rog
ogr
oga
ogm
ogm
ogi
ogn
ogg
gra
grm
grm
gri
grn
grg
ram
ram
rai
ran
rag
amm
ami
amn
amg
mmi
mmn
mmg
min
mig
ing
prog
pror
proa
prom
prom
proi
pron
prog
rogr
roga
rogm
rogm
rogi
rogn
rogg
ogra
ogrm
ogrm
ogri
ogrn
ogrg
gram
gram
grai
gran
grag
ramm
rami
ramn
ramg
ammi
ammn
ammg
mmin
mmig
ming
progr
proga
progm
progm
progi
progn
progg
rogra
rogrm
rogrm
rogri
rogrn
rogrg
ogram
ogram
ograi
ogran
ograg
gramm
grami
gramn
gramg
rammi
rammn
rammg
ammin
ammig
mming
progra
progrm
progrm
progri
progrn
progrg
rogram
rogram
rograi
rogran
rograg
ogramm
ogrami
ogramn
ogramg
grammi
grammn
grammg
rammin
rammig
amming
program
program
prograi
progran
prograg
rogramm
rogrami
rogramn
rogramg
ogrammi
ogrammn
ogrammg
grammin
grammig
ramming
programm
programi
programn
programg
rogrammi
rogrammn
rogrammg
ogrammin
ogrammig
gramming
programmi
programmn
programmg
rogrammin
rogrammig
ogramming
programmin
programmig
rogramming
programming
*/