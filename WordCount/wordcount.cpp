#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	FILE *read;
	int num = 0;
	char oth,a1[]="-c",a2[]="-w";
	if (strcmp(argv[1], a1))
	{
		if ((read = fopen(argv[2], "r")) == NULL)
		{
			printf("无法打开此文件\n");
			exit(0);
		}
		fseek(read, 0L, 0);
		while (!feof(read))
		{
			oth = fgetc(read);
			if (oth==','||oth==' ')
			{
				num++;
			}		
		}
		printf("单词数：%d\n", num + 1);
	}
	else if(strcmp(argv[1],a2))
	{
		if ((read = fopen(argv[2], "r")) == NULL) 
		{
			printf("无法打开此文件\n");
			exit(0);
		}
		fseek(read, 0L, 0);
		while (!feof(read))
		{
			oth = fgetc(read);
			num++;
		}
		printf("字符数：%d\n", num - 1);
	}
	fclose(read);
	return 0;
}