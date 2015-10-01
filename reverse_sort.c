int compare(int a, int b) {
	    return b - a;
}

int cmpr (const void * a, const void * b){
	return ( *(int*)b - *(int*)a );
}