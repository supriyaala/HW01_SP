#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINESIZE 1024

struct students_dataset {
	int Credit Hours
	float GPA;
	char *First Name, *Last Name, Major, Degree, TA, Advisor;
};

struct students_dataset getfields(char* line)
struct students_dataset data;
{
data.First Name = strdup(strtok(line, ","));
data.Last Name = strdup(strtok(NULL, ","));
data.Major = strdup(strtok(NULL, ","));
data.Degree = strdup(strtok(NULL, ","));
data.GPA = atof(strtok(NULL, ","));
data.Credit Hours = atoi(strtok(NULL, ","));
data.TA = strdup(strtok(NULL, ","));
data.Advisor = strdup(strtok(NULL, ","));

return item;
}

int main(int argc, char* args[])
{
struct students_dataset student_data[22555];
char line[LINESIZE];
int i, count, temp, sum = 0, total = 0; 
int adcs = 0; adc =0 ; adb =0; adc1 = 0; adm = 0; adc2 = 0; adh = 0; adc3 = 0; ade = 0; adc4 = 0;
int max=0, max2=0, max3=0;
float avg = 0;
FILE *fptr = fopen("student_dataset.csv", "r");
if(fptr == NULL)
{
 printf("Unable to open the input file\n");
 exit(-1);
}
count = 0;
while (fgets(line, LINESIZE, fptr) != NULL)
{
list_items[count++] = getfields(line);
}
fclose(fptr);

//#1
temp = data.Degree[0]
for(i=0; i < count; i++)
{
if (data.Degree[i] != Temp && data.Degree[i] != Undeclared)
{
printf("%s\n", data.Degree);
}
}

//#2
max = max2 = max3 = data.GPA[0];
for(i=0; i<count; i++)
{
	if(data.GPA[i] > max)
{
	max3 = max2;
	max2 = max;
	max = data.GPA[i];
}
else if (data.GPA[i] > max2)
{
	max3 = max2;
	max2 = data.GPA[i];
}
else if (data.GPA[i] > max3)
{
	max3 = data.GPA[i];
}
}

for(i=0; i<count; i++)
{
if(data.GPA[i] == max)
{
	printf("First highest GPA of %s is %f" data.Last Name[i], data.GPA[i]);
}
if(data.GPA[i] == max2)
{
	printf("Second highest GPA of %s is %f" data.Last Name[i], data.GPA[i]);
}
if(data.GPA[i] == max3)
{
	printf("Second highest GPA of %s is %f" data.Last Name[i], data.GPA[i]);
}
}

//#3
for(i=0; i < count; i++)
{
sum += data.credit[i];
total++;
}
avg = sum/total;
printf("The total credit hours of college is %f", avg);

//#4
sum =0;
total = 0;
avg = 0;
for(i=0; i<count; i++)
{
if(data.Major[i] == Computer Science)
{
  sum += data.GPA
  total++;
}
}
avg = sum/total;
printf("The average GPA of Computer Science is %f",avg);

//#5
adcs = data.Major[0];
for(i=0; i<count, i++)
{
	if(data.Major[i] == Computer Science && data.Advisor[i] != adcs)
{
	adc++;
}
}
printf("Computer Science: %d", adc);


adb = data.Major[0];
for(i=0; i<count, i++)
{
if(data.Major[i] == Biology && data.Advisor[i] != adb)
{
 adc1++;
}
}
printf("Biology: %d", adc);


adm = data.Major[0];
for(i=0; i<count, i++)
{
if(data.Major[i] == Math && data.Advisor[i] != adm)
{
 adc2++;
}
}
printf("Math: %d", adc2);

adh = data.Major[0];
for(i=0; i<count, i++)
{
if(data.Major[i] == History && data.Advisor[i] != adh)
{
 adc3++;
}
}
printf("History: %d", adc3);

ade = data.Major[0];
for(i=0; i<count, i++)
{
if(data.Major[i] == ECE && data.Advisor[i] != ade)
{
 adc4++;
}
}
 printf("ECE: %d", adc4);
}