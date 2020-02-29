    #include<stdio.h>
    #include<time.h>
    int main() {
    	int i;
    	double total_time;
    	clock_t start, end;
    	start = clock();
    	//time count starts 
    	srand(time(NULL));
    	for (i = 0; i < 25000; i++) {
    		printf("random_number[%d]= %d\n", i + 1, rand());
    	}
    	end = clock();
    	//time count stops 
    	total_time = ((double) (end - start)) / CLK_TCK;
    	//calulate total time
    	printf("\nTime taken to print 25000 random number is: %f", total_time);
    	return 0;
    }