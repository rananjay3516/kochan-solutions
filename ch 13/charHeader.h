/*MACRO to test if char is special char*/
#include <stdio.h>
#define IsUpper(x) ( (x) >= 'A' && (x) <= 'Z' )
#define IsLower(x) ( (x) >= 'a' && (x) <= 'z' )
#define IsAlpha(x) ( IsUpper(x) || IsLower(x) )
#define IsNumeric(x) ( (x) >= '0' && (x) <= '9' )
#define IsSpecial(x) ( IsAlpha(x) || IsNumeric(x) ? 0 : 1 )
