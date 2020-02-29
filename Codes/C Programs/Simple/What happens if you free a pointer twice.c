    #include <stdio.h>
    #include <conio.h>
    int main(int argc, char** argv) {
    	char** new_argv1;
    	char** new_argv2;
    	new_argv1 = calloc(argc+1, sizeof(char*));
    	free(new_argv1);
    	/* freed once */
    	new_argv2 = (char**) calloc(argc+1, sizeof(char*));
    	if (new_argv1 == new_argv2) {
    		/* new_argv1 accidentally points to freeable memory */
    		free(new_argv1);
    		/* freed twice */
    	} else {
    		free(new_argv2);
    	}
    	new_argv1 = calloc(argc+1, sizeof(char*));
    	free(new_argv1);
    	/* freed once again */
    	return 0;
    }