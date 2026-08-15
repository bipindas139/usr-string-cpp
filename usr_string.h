#ifndef USR_STRING_H
#define USR_STRING_H


#include<iostream>
#include<cstring>
using namespace std;

class usr_string
{

	char *p;

	public :

	usr_string();
	usr_string(const char *);
	usr_string(const usr_string &);
	~usr_string();

	void set();
	void get();

	usr_string operator =(const usr_string&);
	usr_string operator +(const usr_string&);
	char operator [](int i);

	int operator < (const usr_string&);
	int operator > (const usr_string&);
	int operator >= (const usr_string&);
	int operator <= (const usr_string&);
	int operator != (const usr_string& s);
	int operator == (const usr_string& s);

	friend istream& operator >>(istream&,  usr_string&);
	friend ostream& operator <<(ostream&, const usr_string&);

	friend char * usr_strcpy(usr_string&,const usr_string&);
	friend char * usr_strncpy(usr_string&, const usr_string&, int);

	friend int usr_strcmp(const usr_string&, const usr_string&);
	friend int usr_strncmp(const usr_string&, const usr_string&, int);

	friend char * usr_strcat(usr_string&, const usr_string&);
	friend char * usr_strncat(usr_string&, const usr_string&, int);

	friend char * usr_strrev(usr_string&);
	friend char * usr_strupper(usr_string&);
	friend char * usr_strlower(usr_string&);

	friend char* usr_strchr(const usr_string&,char);
	friend char* usr_strrchr(const usr_string&,char);

	friend char* usr_strstr(const usr_string&,const char *);

	friend unsigned long int usr_strlen(const usr_string&);

};

#endif
