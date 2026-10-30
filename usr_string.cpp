#include"usr_string.h"


usr_string::usr_string(){

	p = new char [1];
	*p = '\0';
	
}

usr_string::usr_string(const char *s){

	p = new char [strlen(s)+1];
	strcpy(p,s);
}

usr_string::usr_string(const usr_string &s)
{
	p = new char [strlen(s.p)+1];
	strcpy(p,s.p);

}
usr_string::~usr_string(){

	delete [] p;
}

void usr_string::set(){

	cout << " Enter : ";
              scan_input(&p);
}

void usr_string::get(){

	cout << " s : " << p << endl;
}

usr_string usr_string::operator =(const usr_string& s)
{
	delete [] p;
	p = new char [strlen(s.p)+1];
	strcpy(p,s.p);
	return s;
}

usr_string usr_string::operator +(const usr_string& s)
{
	usr_string temp;
	temp.p = new char [strlen(p)+strlen(s.p)+1];
	strcpy(temp.p,p);
	strcat(temp.p,s.p);
	return temp;
}

char& usr_string::operator [](int i)
{
	return p[i];
}

bool usr_string::operator < (const usr_string& s){

	if(strcmp(p,s.p)<0)
		return 1;
	else
		return 0;
}

bool usr_string::operator > (const usr_string& s){

	if(strcmp(p,s.p)>0)
		return 1;
	else
		return 0;
}

bool usr_string::operator >= (const usr_string& s){

	if(strcmp(p,s.p)>=0)
		return 1;
	else
		return 0;
}

bool usr_string::operator <= (const usr_string& s){

	if(strcmp(p,s.p)<=0)
		return 1;
	else
		return 0;
}

bool usr_string::operator != (const usr_string& s){

	if(strcmp(p,s.p))
		return 1;
	else
		return 0;
}

bool usr_string::operator == (const usr_string& s){

	if(strcmp(p,s.p))
		return 0;
	else
		return 1;
}


istream& operator >>(istream& in, usr_string& s)
{
	scan_input(&s.p);
	return in;
}

ostream& operator <<(ostream& out, const usr_string& s)
{
	out << s.p;
	return out;
} 

char * usr_strcpy(usr_string& a,const usr_string& b)
{
	delete [] a.p;
	a.p = new char [strlen(b.p)+1];
	return strcpy(a.p,b.p);
}

char * usr_strncpy(usr_string& a, const usr_string& b , int n)
{
	delete [] a.p;
	a.p = new char [n + 1];
	strncpy(a.p,b.p,n);
	a.p[n]='\0';
	return a.p;
}

int usr_strcmp(const usr_string& a, const usr_string& b)
{
	return strcmp(a.p, b.p);
}

int usr_strncmp(const usr_string& a, const usr_string& b, int n)
{
	return strncmp(a.p,b.p,n);
}

char * usr_strcat(usr_string& a, const usr_string& b)
{
	char * temp = new char [strlen(a.p)+strlen(b.p)+1];
	strcpy(temp,a.p);
	delete [] a.p;
	strcat(temp,b.p);
	return (a.p = temp);
}

char * usr_strncat(usr_string& a, const usr_string& b, int n)
{
	char *temp;
	temp = new char [strlen(a.p)+n+1];
	strcpy(temp,a.p);
	delete [] a.p;
	strncat(temp,b.p,n);
	return (a.p = temp);
}

char * usr_strrev(usr_string& s)
{
	int len = strlen(s.p);
	int i,j;
	char *temp = new char [len+1];
	for(j=0,i=len-1;i>=0;i--,j++)
		temp[j]=s.p[i];
	temp[j] = '\0';
	delete [] s.p;
	s.p=temp;
	return s.p;
}


char * usr_strupper(usr_string& s)
{
	int i;
	for(i=0;s.p[i];i++)
	{
		if(s.p[i] >= 'a' && s.p[i] <= 'z')
		{
			s.p[i] = s.p[i] - 32;
		}

	}
	return s.p;
}

char * usr_strlower(usr_string& s)
{
	int i;
	for(i=0;s.p[i];i++)
	{
		if(s.p[i] >= 'A' && s.p[i] <= 'Z')
		{
			s.p[i] = s.p[i] + 32;
		}

	}
	return s.p;
}

char* usr_strchr(const usr_string& s,char c)
{
	int i;
	for(i=0;s.p[i];i++)
	{
		if(s.p[i] == c )
			return s.p+i;
	}
	return 0;
}

char* usr_strrchr(const usr_string& s,char c)
{
	int i;
	char *temp=0;
	for(i=0;s.p[i];i++)
	{
		if(s.p[i] == c )
			temp = s.p+i;
	}
	if(temp)
		return temp;
	else
		return 0;
}

char* usr_strstr(const usr_string& s,const char * sub)
{
	int i;
	int sub_len = strlen(sub);
	if(sub_len == 0)
		return s.p;

	for(i=0;s.p[i];i++)
	{
		if(s.p[i] == sub[0])
		{
			if(strncmp(s.p+i,sub,sub_len)==0)
				return s.p+i;
		}
	}
	return 0;
}


unsigned long int usr_strlen(const usr_string& s) 
{
	return strlen(s.p);
}

void scan_input(char **p)
{
 char ch;
 unsigned count=0;
 FILE *fp = fopen("Data.txt","w+");
 
 if(fp == NULL)
 {
   printf("ERROR : scanning input from user, ***fopen fail***\n");
   return;
  }
  
 while(1)
 {
   ch = getchar();
   if(ch =='\n')
   break;
   
   fputc(ch,fp);
   count++;
 }
 fputc('\n',fp);
 delete [] (*p);
 *p = new char [count + 1];
  rewind(fp);
 fscanf(fp,"%[^\n]",*p);
 fclose(fp);
 return;
}
