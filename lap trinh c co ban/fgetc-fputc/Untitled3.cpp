#include <stdio.h>
main(){
	FILE *fp;
	fp = fopen("vd.txt", "w");
	fputc('k', fp);
	fclose(fp);
}
