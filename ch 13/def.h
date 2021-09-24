#ifndef WIN
	#define WIN 
	#if OS == 1
		//System header files
		#include <stdio.h>
		#include <limits.h>
		#include <float.h>
		//Macro defs
		#define PI 3.141592654
		#define TWO_PI 2*PI
		#define LEAP_YEAR(y) y%4 == 0 && y%100 != 0  \
							|| y % 400 == 0

		#ifdef WIN
		# define print(x) printf(#x " = %i\n", x)
		# define printx(n) print(x##n)
		#endif

		//Funk deck
		double area (double n), volume (double n), circumfrence (double n) ;		
		//Functions
		double area (double n) {
		 return PI*n*n ; }
			
		double volume (double n) {
		 return 4.0/3.0 * PI*n*n*n ; }

		double circumfrence (double n) {
		 return TWO_PI*n ; }
		 
	#elif OS == 2
		//#undef WIN
		#ifdef WIN 
			//System header files
			#include <stdio.h>
			#include <limits.h>
			#include <float.h>
			//Macro defs
			#define PI 3.141592654
			#define TWO_PI 2*PI
			#define LEAP_YEAR(y) y%4 == 0 && y%100 != 0  \
								|| y % 400 == 0

			#ifdef WIN
			# define print(x) printf(#x " = %i\n", x)
			# define printx(n) print(x##n)
			#endif

			//Funk deck
			double area (double n), volume (double n), circumfrence (double n) ;		
			//Functions
			double area (double n) {
			 return PI*n*n ; }
				
			double volume (double n) {
			 return 4.0/3.0 * PI*n*n*n ; }

			double circumfrence (double n) {
			 return TWO_PI*n ; }
		#endif	 
	#endif
	
#endif