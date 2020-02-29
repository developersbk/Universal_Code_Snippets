    #include<stdio.h>
    #include <malloc.h>
    #include<conio.h> 
    int main(int argc, char** argv) {
    	char** new_argv;
    	int i;
    	/* Since argv[0] through argv[argc] are all valid, the
        program needs to allocate room for argc+1 pointers. */
    	new_argv = (char**) calloc(argc+1, sizeof (char*));
    	/* or malloc((argc+1) * sizeof (char*)) */
    	printf("allocated room for %d pointers starting at %P\n", argc+1, new_argv);
    	/* now copy all the strings themselves
        (argv[0] through argv[argc-1]) */
    	for (i = 0; i < argc; ++i) {
    		/* make room for '' at end, too */
    		new_argv[i] = (char*) malloc(strlen(argv[i]) + 1);
    		strcpy(new_argv[i], argv[i]);
    		printf("
    		allocated %d bytes for new_argv[%d] at %P, "
    		"
    		copied \"
    		%s\"
    		\n"
    		,
    						                strlen(argv[i]) + 1, i, new_argv[i], new_argv[i]);
    	}
    	new_argv[argc] = NULL;
    	/* To deallocate everything, get rid of the strings (in any
        order), then the array of pointers. If you free the array
        of pointers first, you lose all reference to the copied
        strings. */
    	for (i = 0; i < argc; ++i) {
    		free(new_argv[i]);
    		printf("
    		freed new_argv[%d] at %P\n"
    		, i, new_argv[i]);
    		argv[i] = NULL;
    	}
    	free(new_argv);
    	printf("
    	freed new_argv itself at %P\n"
    	, new_argv);
    	return 0;
    }