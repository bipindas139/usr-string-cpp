#include "usr_string.h"

int main()
{
    // --------------------------------
    // 1. Default constructor + set()
    // --------------------------------

    cout << "Default constructor + set()" << endl;

    usr_string s1;

    s1.set();
    s1.get();

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 2. Parameterized constructor
    // --------------------------------

    cout << "Parameterized constructor" << endl;

    usr_string s2("Hello World");

    cout << "s2 : " << s2 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 3. Copy constructor
    // --------------------------------

    cout << "Copy constructor" << endl;

    usr_string s3(s2);

    cout << "s3 : " << s3 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 4. Assignment operator
    // --------------------------------

    cout << "Assignment operator : s4 = s2" << endl;

    usr_string s4;

    s4 = s2;

    cout << "s4 : " << s4 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 5. + operator
    // --------------------------------

    cout << "+ operator : s5=Hello, s6=World -> s7 = s5 + s6" << endl;

    usr_string s5("Hello ");
    usr_string s6("World");
    usr_string s7;

    s7 = s5 + s6;

    cout << "s7 : " << s7 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 6. [] operator
    // --------------------------------

    cout << "[] operator" << endl;

    cout << "s2[0] : " << s2[0] << endl;
    cout << "s2[1] : " << s2[1] << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 7. Comparison operators
    // --------------------------------

    cout << "Comparison operators : a = apple, b = banana" << endl;

    usr_string a("apple");
    usr_string b("banana");

    cout << "a < b  : " << (a < b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 8. usr_strcpy()
    // --------------------------------

    cout << "usr_strcpy() : usr_strcpy(\"Hello\", \"World\");"<< endl;

    usr_string s8("Hello");
    usr_string s9("World");

    usr_strcpy(s8, s9);

    cout << "s8 : " << s8 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 9. usr_strncpy()
    // --------------------------------

    cout << "usr_strncpy() : usr_strncpy(\"Hello\", \"World\", 3); " << endl;

    usr_string s10("Hello");
    usr_string s11("World");

    usr_strncpy(s10, s11, 3);

    cout << "s10 : " << s10 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 10. usr_strcat()
    // --------------------------------

    cout << "usr_strcat() : usr_strcat(\"Hello\", \"World\"); " << endl;

    usr_string s12("Hello ");
    usr_string s13("World");

    usr_strcat(s12, s13);

    cout << "s12 : " << s12 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 11. usr_strncat()
    // --------------------------------

    cout << "usr_strncat() : usr_strncat(\"Hello\", \"World\", 3); " << endl;

    usr_string s14("Hello");
    usr_string s15("World");

    usr_strncat(s14, s15, 3);

    cout << "s14 : " << s14 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 12. usr_strcmp()
    // --------------------------------

    cout << "usr_strcmp() : usr_strcmp(\"apple\", \"banana\");" << endl;

    usr_string s16("apple");
    usr_string s17("banana");

    cout << "Result : " << usr_strcmp(s16, s17) << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 13. usr_strncmp()
    // --------------------------------

    cout << "usr_strncmp() : usr_strncmp(\"apple\", \"banana\", 2);" << endl;

    cout << "Result : " << usr_strncmp(s16, s17, 2) << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 14. usr_strrev()
    // --------------------------------

    cout << "usr_strrev() : s = \"ABCDE\" " << endl;

    usr_string s18("ABCDE");

    usr_strrev(s18);

    cout << "s18 : " << s18 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 15. usr_strupper()
    // --------------------------------

    cout << "usr_strupper() : s = \"hello world\" " << endl;

    usr_string s19("hello world");

    usr_strupper(s19);

    cout << "s19 : " << s19 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 16. usr_strlower()
    // --------------------------------

    cout << "usr_strlower() : s = \"HELLO WORLD\"" << endl;

    usr_string s20("HELLO WORLD");

    usr_strlower(s20);

    cout << "s20 : " << s20 << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 17. usr_strchr()
    // --------------------------------

    cout << "usr_strchr() : s = \"ABCD EFGH\", usr_strchr(s, 'E');" << endl;

    usr_string s21("ABCD EFGH");

    char *p = usr_strchr(s21, 'E');

    if(p)
        cout << "Found : " << p << endl;
    else
        cout << "Character not found" << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 18. usr_strrchr()
    // --------------------------------

    cout << "usr_strrchr() : s = \"ABCABC\", usr_strrchr(s, 'B');" << endl;

    usr_string s22("ABCABC");

    p = usr_strrchr(s22, 'B');

    if(p)
        cout << "Found : " << p << endl;
    else
        cout << "Character not found" << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 19. usr_strstr()
    // --------------------------------

    cout << "usr_strstr() : s = \"Hello Embedded World\", usr_strstr(s, \"Embedded\");" << endl;

    usr_string s23("Hello Embedded World");

    p = usr_strstr(s23, "Embedded");

    if(p)
        cout << "Found : " << p << endl;
    else
        cout << "Substring not found" << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;


    // --------------------------------
    // 20. usr_strlen()
    // --------------------------------

    cout << "usr_strlen() : s = \"Hello Embedded World\"" << endl;

    cout << "Length : "
         << usr_strlen(s23) << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

usr_string a1("hh"),a2("aa"),a3;

a3 = a1 = a2;

cout << " a1 : " << a1 << " a2 : " << a2 << " a3 : "<< a3 << endl;

    return 0;
}
