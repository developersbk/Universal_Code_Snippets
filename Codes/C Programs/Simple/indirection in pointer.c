    #include <stdio.h>
    struct circ_list {
    	char    value[ 3 ];
    	/* e.g., "st" (incl '') */
    	struct circ_list        *next;
    }
    ;
    struct circ_list    suffixes[] = {
    	"th", & suffixes[ 1 ], 
    	/* 0th */
    	"st", & suffixes[ 2 ], 
    	/* 1st */
    	"nd", & suffixes[ 3 ], 
    	/* 2nd */
    	"rd", & suffixes[ 4 ], 
    	/* 3rd */
    	"th", & suffixes[ 5 ], 
    	/* 4th */
    	"th", & suffixes[ 6 ], 
    	/* 5th */
    	"th", & suffixes[ 7 ], 
    	/* 6th */
    	"th", & suffixes[ 8 ], 
    	/* 7th */
    	"th", & suffixes[ 9 ], 
    	/* 8th */
    	"th", & suffixes[ 0 ], 
    	/* 9th */
    }
    ;
    #define MAX 20
    int main() {
    	int i = 0;
    	struct circ_list    *p = suffixes;
    	while (i value );
    		++i;
    		p = p->next;
    	}
    	return 0;
    }