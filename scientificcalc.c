//SCIENTIFIC CALCULATOR. Copyright (C) 2015 APOORVA NALE 111503046

/*This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

void add();                                         
void subtract();
void multiply();
void linearequation();
void determinant();
void inverse();
void eigenvalue();
void matrix();
void integration();
void differentiation();
void complexnumber();
void vectors();
void mean();
void median();
void mode();
float standard_deviation();
void variance();
void mergesort(int*, int, int);
void mergesortedsubarray();
void statistics();
void graphical();
void distance();
void geometric();
double slope(double, double, double, double);
double intercept(double, double, double, double);
void equation();
void slope_intercept();
void point_slope();
void midpoint();
void slopeintercept();
void bestfit();
void differential();
void areavolume();
void basic();
void advanced();
void geometric();
void area();
void volume();
void area_for_twodimensional_objects();
void area_for_threedimensional_objects();
void volume_for_twodimensional_objects();
void volume_for_threedimensional_objects();
void area_of_square();
void area_of_rectangle();
void area_of_triangle();
void area_of_circle();
void area_of_parallelogram();
void area_of_ellipse();
void area_of_cube();
void area_of_cuboid();
void area_of_cylinder();
void area_of_rectangle();
void area_of_sphere();
void area_of_cone();
void cone();
void sphere();
void cube();
void cuboid();
void cylinder();
void coordinate();
void Coord_conver();
int quadratic(double a, double b, double c, double Roots[]);
void polynomial();
void linear_best_fit_equation();
int det(int A[100][100], int n);
float f(float x, float n);      
float fsin(float x);
float fcos(float x);
float ftan(float x);
float fasin(float x);
float facos(float x);
float fatan(float x);
float fexp(float x);
double addition(double, double);          
double subtraction(double, double);        
double multiplication(double, double);    
double division(double, double);            

double addition(double a, double b) {
	return (a + b);
}                     
double subtraction(double a, double b) {
	return (a - b);
}                       
double multiplication(double a, double b) {
	return (a * b);
}                        
double division(double a, double b) {
	return (a / b);
}                    

int main() { 
	
	char a[1], choice[1], choose[1];
	SC1: 
	printf("\nSCIENTIFIC CALCULATOR\n\n");
        printf("PRESS ANY KEY TO CONTINUE\n\n");
        scanf("%s", a);
        system("clear");
	printf("1.BASIC\n2.GEOMETRIC & UTILITIES\n3.ADVANCED\n");
        scanf("%s", choice);
        printf("\n");
	if(choice[0] == '1') {
		basic();
	}
	else if(choice[0] == '2') {
		geometric();
	}
	else if(choice[0] == '3') {
		advanced();
	}
	else {
		printf("ERR\n");
		goto SC2;
	}
   	SC2: 
	printf("\nCONTINUE WITH CALCULATOR\n");
	scanf("%s", choose);
	if(choose[0] == 'y' || choose[0] == 'Y') {   
		system("clear");
        	goto SC1;
	}
        else if(choose[0] == 'n' || choose[0] == 'N') {
        	return 0;
	}
	else {   	
		printf("ERR\n");
        	goto SC2;
	}
	return 0;
}

void basic() {
    {
	int ch, flag, ch1;
	char c;
	double a, b;
	double res = 0;
	double x, n; 
	do {
		printf("1.Algebraic operations\n2.Trigonometric Operations\n\n");      
		scanf("%d", &ch1);    
		switch(ch1) {

		case 1:	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.x^n\n6.e^x\n7.log_n (x)\n8.ln(x)\n9. 10^x\n");  
			scanf("%d", &ch);  
			switch(ch) { 
			
			case 1: scanf("%lf", &a);
				scanf("%lf", &b);
				res = addition(a, b);
				printf("\nresult = %lf", res);
				printf("\n continue with the operation? If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
				scanf("%d", &flag);   
				break;
			case 2: scanf("%lf", &a);
				scanf("%lf", &b);
				res = subtraction(a, b);
				printf("\nresult = %lf", res);
				printf("\ncontinue with the operation? If yes then set flag=1 else set flag=0 \n");
				printf("\nflag = ");
				scanf("%d", &flag);
				break;
			case 3:	scanf("%lf", &a);
				scanf("%lf", &b);
				res = multiplication(a, b);
				printf("\nresult = %lf", res);
				printf("\ndo you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\nflag = ");
				scanf("%d", &flag);
				break;
			case 4: scanf("%lf", &a);
				scanf("%lf", &b);
				res = division(a, b);
				printf("\nresult = %lf", res);
				printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\nflag = ");
				scanf("%d", &flag);
				break;
			case 5:	scanf("%lf%lf", &x, &n);
                     		printf("result is = %lf\n", pow(x, n));
                     		res = pow(x, n);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
				scanf("%d", &flag);
				break;
            		case 6:	scanf("%lf", &x);
                     		res = exp(x);
                     		printf("The result is %lf\n",res);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
				scanf("%d", &flag);
				break;
            		case 7: printf("Enter the value of x\n");
                     		scanf("%lf", &x);
                     		printf("enter the value of n\n");
                     		scanf("%lf", &n);
                     		res = log(x) / log(n);
                     		printf("%lf\n", res);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
				scanf("%d", &flag);
				break;
            		case 8: scanf("%lf", &x);
                     		res = log(x);
                     		printf(" %lf\n", res);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
				scanf("%d", &flag);
				break;
            		case 9: scanf("%lf", &x);
                     		res = pow(10, x);
                     		printf("%lf\n", res);
                     		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
				scanf("%d", &flag);
				break;
             		default:printf("\n wrong choice!\n");                
                      		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
				scanf("%d", &flag);
				break;
			}
			break;
		case 2:	printf("1.sin x\n2.cos x\n3.tan x\n4.arcsin x\n5.arccos x\n6.arctan x\n7.sinh x\n8.cosh x\n9.tanh x\n");   
                	scanf("%d", &ch);
			int ch2;              
                	switch(ch) {
		
                    	case 1: printf("1.degree\n2.radian\n");
                           	scanf("%d", &ch2);                                         
                           	switch(ch2) {
                           
                              	case 1: scanf("%lf", &x);
                                       	res = sin (x * PI / 180);
                                       	printf("%lf\n", res);
                                       	break;	
				case 2:	scanf("%lf", &x);
                                       	res = sin(x);
                                       	printf(" %lf\n", res);
                                       	break;
				}
                           	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("flag = ");
                                scanf("%d", &flag);
				break;
                     	case 2: printf("1.Degree\n2.Radian\n");
                             	scanf("%d", &ch2);                                          
                             	switch(ch2) {
                           					
                               	case 1: scanf("%lf", &x);
                                       	res = cos (x * PI / 180);
                                       	printf("%lf\n", res);
                                       	break;
				case 2: scanf("%lf", &x);
                                       	res = cos(x);
                                       	printf("%lf \n", res);
                                       	break;
				}
                           	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("flag = ");
                                scanf("%d", &flag);
				break;
                    	case 3: printf("1.Degree\n2.Radian\n");
                             	scanf("%d", &ch2);
                             	switch(ch2) {
                           
                               	case 1: scanf("%lf", &x);
                                       	res = tan (x * PI / 180);
                                       	printf("%lf \n", res);
                                       	break;
				case 2: scanf("%lf", &x);
                                       	res = tan(x);
                                       	printf("%lf\n", res);
                                       	break;
				}
                           	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
                                scanf("%d", &flag);
				break;
                    	case 4: printf("1.Degree\n2.Radian\n");
                            	scanf("%d", &ch2);   
                            	switch(ch2) {
                            
                                case 1:	scanf("%lf", &x);
                                        res = asin(x) * 180.0 / PI; 
                                        printf("%lf\n", res);
                                        break;
                                case 2:	scanf("%lf", &x);
                                        res = asin(x);
                                        printf("%lf\n", res);
                                        break;
                            	}
                            	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
                                scanf("%d", &flag);
			   	break;
                    	case 5: printf("\n1.Degree\n2.Radian\n");
                            	scanf("%d", &ch2);                                   
                            	switch(ch2) {
                            				
                                case 1: scanf("%lf", &x);
                                      	res = acos(x) * 180.0 / PI;
                                        printf("%lf\n", res);
                                        break;
                            	case 2: scanf("%lf", &x);
                                        res = acos(x);
                                        printf("%lf\n", res);
                                        break;
                            	}
                            	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
                                scanf("%d", &flag);
				break;
                    	case 6: printf("\n1.Degree\n2.Radian\n");
                            	scanf("%d", &ch2);
                            	switch(ch2) {
                            					
                                case 1:	scanf("%lf", &x);
                                        res = atan(x) * 180.0 / PI;
                                        printf("%lf\n", res);
                                        break;
                                case 2: scanf("%lf", &x);
                                        res = atan(x);
                                        printf("%lf\n", res);
                                        break;
                            	}
                             	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
				printf("\n flag = ");
                                scanf("%d", &flag);
				break;
                     	case 7: printf("1.degree\n 2.radian\n");
                             	scanf("%d", &ch2);
                           	switch(ch2) {
                           									
                               	case 1: scanf("%lf", &x);
                                     	res = sinh (x * PI / 180);
                                       	printf("%lf\n", res);
                                       	break;
				case 2: scanf("%lf", &x);
                                      	res = sinh(x);
                                       	printf("%lf\n", res);
                                       	break;
				}
                              	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
                              	printf("\n flag = ");
                              	scanf("%d", &flag);
                              	break;
                    	case 8: printf("1.degree\n 2.radian\n");
                             	scanf("%d", &ch2);
                           	switch(ch2) {
                           				
                               	case 1: scanf("%lf", &x);
                                       	res = cosh (x * PI / 180);
                                       	printf("%lf\n", res);
                                       	break;
				case 2: scanf("%lf", &x);
                                       	res = cosh(x);
                                       	printf("%lf\n", res);
                                       	break;
				}
                              	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
                              	printf("\n flag = ");
                              	scanf("%d", &flag);
                              	break;
                    	case 9: printf("1.degree\n 2.radian\n");
                             	scanf("%d", &ch2);
                             	switch(ch2) {
                           										
                               	case 1: scanf("%lf", &x);
                                      	res = tanh (x * PI / 180);
                                        printf("%lf\n", res);
                                       	break;
				case 2: scanf("%lf", &x);
                                       	res = tanh(x);
                                       	printf("%lf\n", res);
                                       	break;
				}
                              	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
                              	printf("\n flag = ");
                            	scanf("%d", &flag);
                                break;
			}
		}
		if(flag == 1) 
		do {
			int ch1;
			printf("\n1.Algebraic operations\n2.Trigonometric Operations\n");  
		        scanf("%d", &ch1);    
		       	switch(ch1) {
		        
            		case 1:	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.x^n\n6.e^x\n7.log_n (x)\n8.ln(x)\n9.10^x\n");
				scanf("%d", &ch);
				switch(ch) {
								
				case 1: scanf("%lf", &x);
					res = addition(res, x);   
					printf("\n%lf", res);
					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
					scanf("%d", &flag);
					break;
				case 2: scanf("%lf", &x);
					res = subtraction(res, x);
					printf("\n%lf", res);
					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
					scanf("%d", &flag);
					break;
				case 3: scanf("%lf", &x);
					res = multiplication(res, x);
					printf("\n%lf", res);
					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
					scanf("%d", &flag);
					break;
				case 4: scanf("%lf", &x);
					res = division(res, x);
					printf("\n result = %lf", res);
					printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
					scanf("%d", &flag);
					break;
					double n;
                    		case 5: scanf("%lf", &n);
                       			res = pow(res, n);
                       			printf("%lf\n", res);
                       			printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
                       			printf("\n flag = ");
                       			scanf("%d", &flag);
                       			break;
					double x;
                    		case 6: res = exp(res);
                       			printf("%lf\n", res);
                       			printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                       			scanf("%d", &flag);
					break;
                    		case 7: scanf("%lf", &n);
                       			res = log(res) / log(n);
                       			printf("%lf\n", res);
                       			printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                       			scanf("%d", &flag);
					break;
                    		case 8: res = log(res);
                        		printf("the result is %lf\n", res);
                        		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                        		scanf("%d", &flag);
					break;
                    		case 9: res = pow(10, res);
                        		printf("the result is %lf\n", res);
                        		printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                        		scanf("%d", &flag);
					break;
                        	default:printf("\n wrong choice!");
                        		break;

            			}	
            			break;

             		case 2: printf("\n1.sin x\n2.cos x\n3.tan x\n4.arcsin x\n5.arccos x\n6.arctan x\n7.sinh x\n8.cosh x\n9.tanh x\n");
                     		scanf("%d", &ch);
                     		int ch2;
                     		switch(ch) {
                         	
				case 1:	printf("1.degree\n 2.radian\n");
                                 	scanf("%d", &ch2);
                                 	switch(ch2) {
                               		
					case 1:	res = sin(res * PI / 180);  
                                  		printf("%lf\n", res);
                                       		break;
					case 2:	res = sin(res);
                                       		printf("%lf\n", res);
                                       		break;
					}
                                 	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                                 	scanf("%d", &flag);
					break;
                          	case 2:	printf("1.degree\n 2.radian\n");
                                  	scanf("%d", &ch2);
                                 	switch(ch2) {
                           
                               		case 1:	res = cos (res * PI / 180);
                                       		printf("%lf\n", res);
                                       		break;
					case 2:	res = cos(res);
                                       		printf("%lf\n", res);
                                       		break;
					}
                                   	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                                   	scanf("%d", &flag);
					break;
                          	case 3:	printf("1.degree\n 2.radian\n");
                                  	scanf("%d", &ch2);
                                 	switch(ch2) {
                           
                               		case 1:	res = tan(res * PI / 180);
                                       		printf("%lf\n", res);
                                       		break;
					case 2:	res = tan(res);
                                       		printf("%lf\n",res);
                                       		break;
					}
                                   	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                                   	scanf("%d", &flag);
					break;
                          	case 4:	printf("1.degree\n 2.radian\n");
                                  	scanf("%d", &ch2);
                                 	switch(ch2) {
                           
                               		case 1:	res = asin(res) * 180.0 / PI;
                                       		printf("%lf\n", res);
                                       		break;
					case 2:	res = asin(res) * 180.0 / PI;
                                       		printf("%lf\n", res);
                                       		break;
					}
                                   	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                                   	scanf("%d", &flag);
					break;
                          	case 5:	printf("1.degree\n 2.radian\n");
                                  	scanf("%d", &ch2);
                                 	switch(ch2) {
                               		
					case 1:	res = acos(res) * 180.0 / PI;
                                       		printf("%lf\n", res);
                                       		break;
					case 2:	res = acos(res) * 180.0 / PI;
                                       		printf("%lf\n", res);
                                       		break;
					}
                                	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                               		scanf("%d", &flag);
					break;
                         	case 6:	printf("1.degree\n 2.radian\n");
                                  	scanf("%d", &ch2);
                                 	switch(ch2) {
                           
                               		case 1:	res = atan(res) * 180.0 / PI;
                                       		printf("%lf\n", res);
                                       		break;
					case 2:	res = atan(res) * 180.0 / PI;
                                       		printf("%lf\n", res);
                                       		break;
					}
                                  	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                                   	scanf("%d", &flag);
					break;
                         	case 7:	printf("1.degree\n 2.radian\n");
                                  	scanf("%d", &ch2);
                                 	switch(ch2) {
                           
                               		case 1:	res = sinh(res * PI / 180);
                                       		printf("%lf\n", res);
                                       		break;
					case 2:	res = sinh(res);
                                       		printf("%lf\n", res);
                                       		break;
					}
                                 	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                                 	scanf("%d", &flag);
                                 	break;
                         	case 8:	printf("1.degree\n 2.radian\n");
                                  	scanf("%d", &ch2);
                                 	switch(ch2) {
                           
                               		case 1:	res = cosh(res * PI / 180);
                                       		printf("%lf\n", res);
                                       		break;
					case 2:	res = cosh(res);
                                       		printf("%lf\n", res);
                                       		break;
					}
                                 	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                                 	scanf("%d", &flag);
                                 	break;
                          	case 9:	printf("1.degree\n 2.radian\n");
                                  	scanf("%d", &ch2);
                                 	switch(ch2) {
                           							
                               		case 1:	res = tanh (res * PI / 180);
                                       		printf("%lf\n", res);
                                       		break;
					case 2:	res = tanh(res);
                                       		printf("%lf\n", res);
                                       		break;
					}
                                 	printf("\n do you want to continue with the operation. If yes then set flag=1 else set flag=0 \n");
					printf("\n flag = ");
                                 	scanf("%d", &flag);
                                 	break;
				}
			}
		}
		while(flag == 1);

		printf("\n Do you want to continue? press 'y' or 'Y' to continue.else press any other key \n");
		c = getchar();
			
		} 
		while(c == 'y' || c == 'Y');      
		getchar();
	}
	return;
}

void advanced() {
	char choice[1], choose[1];
    	AD1:
    	printf("1:MATRIX\n2:COMPLEX NUMBERS\n3:INTEGRATION\n");
    	printf("4:DIFFERENTATION\n5:VECTOR\n6:STATISTICS\n");
    	printf("7:DIFFERENTIAL EQUATION\n8:GRAPHICAL\n\n");
    	scanf("%s", choice);
    	
	if(choice[0] == '1') {
    		matrix();
    	}
	if(choice[0] == '2') {
		complexnumber();
    	}
	if(choice[0] == '3') {
    		integration();	
	}
    	if(choice[0] == '4') {
    		differentiation();
	}
    	if(choice[0] == '5') {	
		vectors();
	}
    	if(choice[0] == '6') {
    		statistics();
	}
    	if(choice[0] == '7') {	
		differential();
	}
    	if(choice[0] == '8') {	
		graphical();
	}

    	AD2:
	printf("\nCONTINUE WITH ADVANCE CALCULATION\n");
    	scanf("%s", choose);
    	
	if(choose[0] == 'y' || choose[0] == 'Y') { 
		goto AD1;
	}
	else if(choose[0] == 'N' || choose[0] == 'n') {
      		return;
	}
	else {
    		goto AD2;
    	}
	return;
}

void matrix() {
	
	float A[100][100],  B[100][100],  C[100][100];      
	int row1, column1, row2, column2, k, i, j;
	char choice[1], choose[1];
    		
    	MAT:{
		printf("1:ADDITION\n");
		printf("2:SUBTRACTION\n");
		printf("3:MULTIPLICATION\n");
		printf("4:LINEAR EQUATION\n");
		printf("5:DETERMINANT\n");
		printf("6:EIGEN VALUE\n");
		scanf("%s", choice);                                 
		
		if(choice[0] == '1') {                        
			add();
		}                                 
		if(choice[0] == '2') {
			subtract();
		}                              
		if(choice[0] == '3') {
			multiply();
		}                             
		if(choice[0] == '4') {
			linearequation();
		}                         
		if(choice[0] == '5') {
			determinant();
		}
		if(choice[0] == '6') {
			eigenvalue();
		}
		printf("\n");
		MAT1:{
			printf("CONTINUE(Y/N)\n");
			scanf("%s", choose);
			
			if(choose[0] == 'Y'){
    				system("clear");
    				goto MAT;
			}
			if(choose[0] == 'N') {
    				return ;
			}
			else {
				printf("ERR\n");
				goto MAT1;
			}
		}	
	}
    	return;
}

void add() {     
	
	float A[100][100],  B[100][100],  C[100][100];     
	int row1, column1, row2, column2, k, i, j;
	char choice[1], choose[1];
	
	printf("\n order 1st matrix\n");
	scanf("%d", &row1);
	scanf("%d", &column1);
	printf("\norder 2 matrix\n");
	scanf("%d", &row2);
	scanf("%d", &column2);
        
	if((row1 == row2) && (column1 == column2)) {    
		printf("\nEnter matrix1\n");
		for( i = 0; i < row1; i++) {
           		for( j = 0; j < column1; j++) {
               			scanf("%f", &A[i][j]);
                   		printf("\n");
               		}
               		printf("\n\n");
           	}          
           	for( i = 0; i < row1; i++) {
           		for( j = 0; j < column1; j++) {
                		printf("%f", A[i][j]);
			}
               		printf("\n");
           	}              
           	printf("\nEnter matrix 2\n");
           	for( i = 0; i < row1; i++) {
               		for( j = 0; j < column1; j++) {
                   		scanf("%f", &B[i][j]);
                   		printf("\n");
              	        }
               		printf("\n\n");
           	}
           	printf("\n");
           	for( i = 0; i < row1; i++) {
           		for( j = 0; j < column1; j++) {
                   		printf("%f", B[i][j]);
			}
               		printf("\n");
           	}
           	for( i = 0; i < row1; i++) {
               		for( j = 0; j < column1; j++) {
               			C[i][j] = A[i][j] + B[i][j];
			}
           	}
           	printf("\n\n RESULT\n");
               	for( i = 0; i < row1; i++) {
               		for( j = 0; j < column1; j++) {
                   		printf("%f", C[i][j]);
			}
               		printf("\n");
           	}
       	}
       	else
        	printf("ERROR");
	return;            

}
void subtract() {                      
	
	float A[100][100],  B[100][100],  C[100][100];     
    	int row1, column1, row2, column2, k, i, j;
    	char choice[1], choose[1];
   	
	printf("\norder 1st matrix\n");
    	scanf("%d", &row1);
    	scanf("%d", &column1);
    	printf("\n order 2nd matrix\n");
    	scanf("%d %d", &row2, &column2);
       	
       	if((row1 == row2) && (column1 == column2)) {
        	printf("\nEnter matrix 1\n");
           	
           	for( i = 0; i < row1; i++) {
               		for( j = 0; j < column1; j++) {
                		scanf("%f", &A[i][j]);
                   		printf("\n");
               		}
               		printf("\n\n");
           	}
           	for( i = 0; i < row1; i++) {
               		for( j = 0; j < column1; j++) {
                   		printf("A[i][j]\t");
			}
               		printf("\n");
           	} 
           	printf("\nEnter matrix 2\n");
           	for( i = 0; i < row1; i++) {
               		for( j = 0; j < column1; j++) {
                   		scanf("%f", &B[i][j]);
                   		printf("\n");
               		}
               		printf("\n\n");
           	}
           	for( i = 0; i < row1; i++) {
               		for( j = 0; j < column1; j++) {
                   		printf("B[i][j]\t");
			}
               		printf("\n");
           	}
           	for( i = 0; i < row1; i++) {
               		for( j = 0; j < column1; j++) {
                		C[i][j] = A[i][j] - B[i][j];
			}
           	}
           	printf("Result\n");
               	for( i = 0; i < row1; i++) {
               		for( j = 0; j < column1; j++) {
                   		printf("C[i][j]\t");
			}
               		printf("\n");
           	}
	}
        else
        	printf("ERROR");

}
void multiply() {                      
	
	float A[100][100],  B[100][100],  C[100][100];      
    	int row1, column1, row2, column2, k, i, j;
    	char choice[1], choose[1];
    	
	printf("\n order 1st matrix\n");
    	scanf("%d", &row1);
    	scanf("%d", &column1);
    	printf("\norder 2nd matrix\n");
    	scanf("%d", &row2);
    	scanf("%d", &column2);
    	printf("\n");
    	printf("Enter Matrix 1:\n");
    	for(i = 0; i < row1; i++) {
        	for(j = 0; j < column1; j++) {
            		scanf("%f", &A[i][j]);
		}
        	printf("\n");
    	}
    	printf("Enter matrix 2:");
    	printf("\n");
    	for(i = 0; i < row2; i++) {
        	for(j = 0; j < column2; j++) {
            		scanf("%f", &B[i][j]);
		}
        	printf("\n");
    	}
    	printf("\n");
    	printf("Matrix 1 is");
    	printf("\n");
    	for(i = 0; i < row1; i++) {
        	for(j = 0; j < column1; j++) {
            		printf("%f", A[i][j]);
        	}
        	printf("\n");
    	}
	printf("\n");
  	printf("Matrix 2 is:");
  	printf("\n");
	for(i = 0; i < row2; i++) {
        	for(j = 0; j < column2; j++) {
            		printf("%f", B[i][j]);
        	}
        	printf("\n");
    	}
    	for(i = 0; i < row1; i++) {
        	for(j = 0; j < column2; j++) {
           		C[i][j] = 0;
            		for(k = 0; k < row2; k++) {
            			C[i][j] += A[i][k] * B[k][i];
          	  	}
        	}
    	}
	printf("RESULT:");
    	printf("\n");
    	for(i = 0; i < row1; i++) {
        	for(j = 0; j < column2; j++) {
            		printf("%f", C[i][j]);
        	}
        	printf("\n");
    	}
}

void linearequation() {                       
	
	int i, j, k, n;
	float MatA[100][100], MatB[100], X[100];
	float Divisor, Factor, sum;
	printf("Enter variables?\n");
	scanf("%d", &n);
	printf("ENTER COFFICIENTS OF  EQ1 2 &3\n");
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%f", &MatA[i][j]);
		}
		printf("\n");
	}
	printf("\nENTER VALUES OF EQ 1 2 & 3\n");
	for(i = 0; i < n; i++){
		scanf("%f", &MatB[i]);
	}
	for (i = 0; i < n; i++){
		Divisor = MatA[i][i];
		MatA[i][i] = 1.0;
		for (j = i + 1; j < n; j++){
			MatA[i][j] = MatA[i][j] / Divisor;
		}
		MatB[i] = MatB[i] / Divisor;
			
		if (i + 1 < n) {
			for (k = i + 1; k < n; k++){
				Factor = MatA[k][i];
				MatA[k][i] = 0.0;
				
				for (j = i + 1; j < n; j++){
					MatA[k][j] = MatA[k][j] - Factor * MatA[i][j];
				}
				MatB[k] = MatB[k] - Factor * MatB[i];
			}
		}
	}
	X[n - 1] = MatB[n - 1];
	for (i = n - 2; i >= 0; i--){
		sum = 0.0;
		for (j = i + 1; j < n; j++){
			sum = sum + MatA[i][j] * X[j];
		}
		X[i] = MatB[i] - sum;
	}
	for (i = 0; i < n; i++){
		printf("X[%d] is %f\n", i, X[i]) ;
	}
	return ;
}

void determinant() {
	
	int A[100][100], n, result, i, j;
    	char choice[1];
	deta1:
    	printf("\nENTER ORDER\n");
    	scanf("%d", &n);
    	for(i = 0; i < n; i++) {
        	for(j = 0; j < n; j++) {
            		scanf("%d", &A[i][j]);
		}
        	printf("\n");
    	}
    	printf("MATRIX\n");
    	for(i = 0; i < n; i++) {
        	for(j = 0; j < n; j++) {
        		printf("%d", A[i][j]);
		}
        	printf("\n");
    	}
    	result = det(A, n);
    	printf("ANSWER == %d", result);
	return ;
}

int det(int A[100][100], int n) {
     	
	int sum = 0, C[100][100];
     	if(n = 2) {
         	sum = A[0][0] * A[1][1] - A[1][0] * A[0][1] ;
         	return sum;
     	}
     	int i, j, m, h, k;
     	for(m = 0; m < n; m++) {
         	h = 0;
		k = 0;
         	for(i = 1; j < n; j++) {
          		for(j = 0; k < n; k++) {
              			if(k = m) {				
					continue;
				}
              			C[h][k] = A[i][j];
              			k++;
              			if(k == n - 1) {
                  			h++;
                  			k=0;
              			}
          		}
         	}	
         	sum = sum + A[0][m] * pow(-1, m) * det(C, n - 1);
     	}
      	return sum;
}

void eigenvalue() {
	
	float A[2][2], b, c, Z1, Y1, Y2;
    	int i, j, k, n;
    	printf("ENTER ORDER\n");
    	printf("2X2\n");
	printf("ENTER MATRIX\n");
    	for(i = 0; i < 2; i++) {
        	for(j = 0; j < 2; j++) {
            		scanf("%f", &A[i][j]);
        	}
        	printf("\n");
    	}
   	for(i = 0; i < 2; i++) {
        	for(j = 0; j < 2; j++) {
            		printf("%f", A[i][j]);
        	}
        	printf("\n");
    	}
    	b = (A[0][0] + A[1][1]);
    	c = (A[0][0] * A[1][1] - A[0][1] * A[1][0]);
    	Z1 = b * b - 4 * c;
    	printf("\n");
    	
	if(Z1 >= 0) {
    		Y1 = (- b + sqrt(Z1)) / 2;
        	Y2 = (- b - sqrt(Z1)) / 2;
        	printf("= %f\t %f", Y1, Y2);
    	}
    	if(Z1 < 0) {
        	printf("\nIMAGINARY ROOTS\n");
        	printf("\n");
    	}
	return ;
}

void integration(){
	
	float I, a, b, h;                     
	float e;
	char choice[2], choose[2];
	int i;
	INT:                                     
	printf("1:x^n\n2:sin x\n3:cos x\n4:tan x\n5:Asin x\n6:Acos x\n7:Atan x\n8:e^x\n");
	scanf("%s", choice);                                
	if(choice[0] == '1') {                       	
		printf("POWER OF X\n");
       		scanf("%f", &e);
       		printf("LIMITS\n");
       		scanf("%f%f", &a, &b);
       		printf("\n");
       		h = ( b - a ) / 1000;
       		I = 0;
		for( i = 1; i <= 1000; i++) {              
			if(i == 1)
     				I = I + f(a, e);
     			if(i == 1000)
     				I = I + f(b, e);
     			else if(i % 2 == 0)
     				I = I + 2 * f(a + i * h, e);
     			else
     				I = I + 4 * f(a + i * h, e);
		}
    		printf("\n=");
    		printf("%f", h * I / 3);
	}
	if(choice[0] == '2') {
		printf("LIMITS\n");
                scanf("%f%f", &a, &b);
                printf("\n");
                h = ( b - a ) / 1000;
                I = 0;
                for( i = 1; i <= 1000; i++) {
			if(i == 1)
                                I = I + fsin(a);
                        if(i == 1000)
                                I = I + fsin(b);
                        else if(i % 2 == 0)
                                I = I + 2 * fsin(a + i * h);
                        else
                                I = I + 4 * fsin(a + i * h);
                }
                printf("\n=");
                printf("%lf", h * I / 3);
        }
	if(choice[0] == '3') {                                
		printf("LIMITS\n");
       		scanf("%f%f", &a, &b);
       		printf("\n");
       		h = ( b - a ) / 1000;
       		I = 0;
		for( i = 1; i <= 1000; i++) {                             
			if(i == 1)
     				I = I + fcos(a);
     			if(i == 1000)
     				I = I + fcos(b);
     			else if(i % 2 == 0)
     				I = I + 2 * fcos(a + i * h);
     			else
     				I = I + 4 * fcos(a + i * h);
		}
    		printf("\n=");
    		printf("%lf",h * I / 3);
	}
	if(choice[0] == '4') {                            
		printf("LIMITS\n");
       		scanf("%f%f", &a, &b);
       		printf("\n");
       		h = ( b - a ) / 1000;
       		I = 0;
		for( i = 1; i <= 1000; i++) {                           
    			if(i == 1)
     				I = I + ftan(a);
     			if(i == 1000)
     				I = I + ftan(b);
     			else if(i % 2 == 0)
     				I = I + 2 * ftan(a + i * h);
     			else
     				I = I + 4 * ftan(a + i * h);
		}
    		printf("\n=");
    		printf("%lf", h * I / 3);
	}
	if(choice[0] == '5') {                                
		printf("LIMITS\n");
       		scanf("%f%f", &a, &b);
       		printf("\n");
       		h = ( b - a ) / 1000;
       		I = 0;
		for( i = 1; i <= 1000; i++) {
			if(i == 1)
     				I = I + fasin(a);
    			if(i == 1000)
    				I = I + fasin(b);
    		 	else if(i % 2 == 0)
     				I = I + 2 * fasin(a + i * h);
     			else
     				I = I + 4 * fasin(a + i * h);
		}
    		printf("\n=");
    		printf("%lf", h * I / 3);
	}
	if(choice[0] == '6') {                             
		printf("LIMITS\n");
       		scanf("%f%f", &a, &b);
       		printf("\n");
       		h = ( b - a ) / 1000;
       		I = 0;
		for( i = 1; i <= 1000; i++) {    
			if(i == 1)
     				I = I + facos(a);
     			if(i == 1000)
     				I = I + facos(b);
     			else if(i % 2 == 0)
     				I = I + 2 * facos(a + i * h);
     			else
     				I = I + 4 * facos(a + i * h);
		}
    		printf("\n=");
    		printf("%lf", h * I / 3);
	}
	if(choice[0] == '7') {                              
		printf("LIMITS\n");
       		scanf("%f%f", &a, &b);
       		printf("\n");
       		h = ( b - a ) / 1000;
       		I = 0;
		for( i = 1; i <= 1000; i++) {    		
			if(i == 1)
     				I = I + fatan(a);
     			if(i == 1000)
     				I = I + fatan(b);
     			else if(i % 2 == 0 )
     				I = I + 2 * fatan(a + i * h);
     			else
     				I = I + 4 * fatan(a + i * h);
		}
    		printf("\n = ");
    		printf("%lf", h * I / 3);
	}

	if(choice[0] == '8') {                                
		printf("LIMITS\n");
        	scanf("%f%f", &a, &b);
       		printf("\n");
       		h = ( b - a ) / 1000;
       		I = 0;
		for( i = 1; i <= 1000; i++) {                            
			if(i == 1)
     				I = I + fexp(a);
     			if(i == 1000)
     				I = I + fexp(b);
     			else if(i % 2 == 0)
     				I = I + 2 * fexp(a + i * h);
    			else
     				I = I + 4 * fexp(a + i * h);
		}
    		printf("\n = ");
    		printf("%lf", h * I / 3);
	}
	printf("CONTINUE WITH INTEGRATION\n");                   
	scanf("%s", choose);
	if(choose[0] == 'Y') {                
        	system("clear");
        	goto INT;
    	}
 	else if(choose[0] == 'N') {                 
    		system("clear");
    		return ;
	}
	else 
		printf("ERR");
	return ;
}

float f(float x, float e) {
	float value;
     	value = pow(x, e);
     	return value;
}
float fsin(float x) {
	float value;
     	value = sin(x);
     	return value;
}
float fcos(float x) {
	float value;
     	value = cos(x);
     	return value;
}
float ftan(float x) {
      	float value;
     	value = tan(x);
     	return value;
}
float fasin(float x) {
      	float value;
     	value = asin(x);
     	return value;
}
float facos(float x) {
      	float value;
     	value = acos(x);
     	return value;
}
float fatan(float x) {
      	float value;
     	value = atan(x);
     	return value;
}
float fexp(float x) {
      	float value;
     	value = exp(x);
     	return value;
}

void differentiation() {  
	
	float point, result, h = 0.005, e;                
 	char choice[1], choose[1];
     	INT:
     	printf("1:x^n\n2:sin x\n3:cos x\n4:tan x\n5:Asin x\n6:Acos x\n7:Atan x\n8:log\n9:e^x");
     	scanf("%s", choice);                     
      	if(choice[0] == '1') {                    
		printf("POWER OF X\n");
     		scanf("%f", &e);
		printf("ENTER POINT\n");               
     		scanf("%f", &point);
     		result = (f(point + h, e) - f(point - h, e)) / (2 * h);              
     		printf("\n = %f", result);                              
 	}
	if(choice[0] == '2') {                                         
		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h = 0.005;
     		result = (fsin(point + h) - fsin(point - h)) / (2 * h);
     		printf("\n = %f", result);
 	}
	if(choice[0] == '3') {                                         
		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h = 0.005;
     		result = (fcos(point + h) - fcos(point - h)) / (2 * h);
     		printf("\n = %f", result);
 	}
	if(choice[0] == '4') {
		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h = 0.005;
     		result = (ftan(point + h) - ftan(point - h)) / (2 * h);
     		printf("\n = %f", result);
 	}
 	if(choice[0] == '5') {
		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h = 0.005;
     		result = (fasin(point + h) - fasin(point - h)) / (2 * h);
     		printf("\n = %f", result);
 	}
 	if(choice[0] == '6') {
		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h = 0.005;
     		result = (facos(point + h) - facos(point - h)) / (2 * h);
     		printf("\n = %f" , result);
  	}
  	if(choice[0] == '7') {
		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h = 0.005;
     		result = (fatan(point + h) - fatan(point - h)) / (2 * h);
     		printf("\n = %f", result);
 	}
 	if(choice[0] == '8') {
		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h = 0.005;
     		result = (log(point + h) - log(point - h)) / (2 * h);
     		printf("\n = %f" , result);
 	}
 	if(choice[0] == '9') {
		printf("ENTER POINT\n");
     		scanf("%f", &point);
     		h = 0.005;
     		result = (fexp(point + h) - fexp(point - h)) / (2 * h);
     		printf("\n = %f" , result);
 	}
	DIFF:
	printf("\nCONTINUE WITH DIFFERENTATION\n");                  
	scanf("%s", choose);
	if(choose[0] == 'Y') {               
    		system("clear");
        	goto INT;
    	}
 	else if(choose[0] == 'N') {                  
    		system("clear");
    		return ;
	}
	else {
		printf("ERR");
     		goto DIFF;
	}
	return ;
}

void complexnumber() {      
	
	float real, img, resultr, resulti, real1, img1;        
    	char operation[2], continu[2];
    	printf("+:ADD\n-:SUBTRACT\n*:MULTIPLY\n/:DIVISION\n|:MOD & ARG");
    	CMP: 
	do {
        	if(continu[0] == 'Y') {     
            		printf("\n operation?\n");
                	scanf("%s", operation);
            	}
		else {
    			printf("\n\nREAL PART = ");
    			scanf("%f", &real);
    			printf("IMAGINARY PART = ");
    			scanf("%f", &img);
    			resultr = real; 
			resulti = img;
			printf("ENTER THE OPERATION\n");
    			scanf("%s", operation);
		}
     		if(operation[0] == '+' || operation[0] == '-' || operation[0] == '*' || operation[0] == '/' || operation[0] == '|' ) {    
			switch(operation[0]) {
        			case'+':printf("REAL PART = \n");
                   			scanf("%f", &real1);
                  			printf("IMAGINARY PART = \n");
                  			scanf("%f", &img1);
                  			resultr = real1 + resultr;
                  			resulti = img1 + resulti;
                  			printf("\n\n = %f %c (%f)i", resultr, operation[0], resulti);
                  			printf("\ncontinue?\n");
                  			scanf("%s", continu);
                  			break;
        			case'-':printf("REAL PART = \n");
                  			scanf("%f", &real1);
                  			printf("IMAGINERY PART = \n");
                  			scanf("%f", &img1);
                  			resultr = resultr - real1;
                  			resulti = resulti - img1;
                  			printf("\n\n = %f %c (%f)i", resultr, operation[0], resulti);
                  			printf("\ncontinue?\n");
                  			scanf("%s", continu);
                  			break;
       				case'*':printf("REAL PART = \n");
                   			scanf("%f", &real1);
                  			printf("IMAGINERY PART = \n");
                  			scanf("%f", &img1);
                  			resultr = (real1 * resultr - img1 * resulti);
                  			resulti = (real1 * resulti + img1 * resultr);
                  			printf("\n\n= %f %c (%f)i", resultr, operation[0], resulti);
                  			printf("\ncontinue?\n");
                  			scanf("%s", continu);
                  			break;
       				case'/':printf("REAL PART = \n");
                  			scanf("%f", &real1);
                  			printf("IMAGINERY PART = \n");
                  			scanf("%f", &img1);
                  			resultr = (real1 * resultr + img1 * resulti) / (resultr * resultr + resulti * resulti);
                  			resulti = (img1 * resultr - real1 * resulti) / (resultr * resultr + resulti * resulti);
                  			printf("\n\n = %f %c (%f)i", resultr, operation[0], resulti);
                  			printf("\ncontinue?\n");
                  			scanf("%s", continu);
                  	 		break;
      				case'|':resultr = sqrt((resultr * resultr) + (resulti * resulti));
                  			resulti = atan(resulti / resultr);
                  			printf("R = %f", resulti);
                  			printf("THETA = %f", resulti);
                  			printf("\ncontinue?\n");
                  			scanf("%s", continu);
                   			break;
				default:printf("ERROR");
                   			break;
			}
		}
    		else {
			printf("ERR");
      			printf("continue?\n");
      			scanf("%s", continu);                               
     		}
    		if(continu[0] != 'Y' && continu[0] != 'N') {
    			printf("\nERR\n");
		}                            
	
	}
	while(continu[0] != 'N');
    	printf("\n EXIT PRESS C and for more press any key\n");          
	scanf("%s", continu);
    	if(continu[0] == 'C') {                      
    		return ;
	}
    	else {
       		goto CMP;
	}                     
	return ;
}

void vectors() {
    	
	int value1, value2, value3, value4, value5, value6, result1 = 0, result2 = 0, result3 = 0, result;
   	char operation[ 2 ], continu[ 2 ];
    	printf("+:ADD\n-:SUBTRACT\n.:DOT PRODUCT\n");
    	printf("*:CROSS PRODUCT\nM:MOD\n\n");
 	VECTOR:
	do {                                       
        	if(continu[0] == 'Y') {
                	printf("\n operation?\n");
                	scanf("%s", operation);
            	}
		else {
    			printf("Enter vector\n");
    			scanf("%d%d%d", &value1, &value2, &value3);
    			result1 = value1;
			result2 = value2;
			result3 = value3;
  			printf("%di + %dj + %dk\n", value1, value2, value3);
			printf("Enter operation\n");
    			scanf("%s", operation);
		}        
    		if(operation[0] == '+' || operation[0] == '-' || operation[0] == '*' || operation[0] == '.' || operation[0] == 'M') {
			switch(operation[0]) {
    				case'+':printf("Enter vector\n");
             				scanf("%d%d%d", &value4, &value5, &value6);
              				printf("%di + %dj + %dk", value4, value5, value6);
              				result1 = result1 + value4;
					result2 = result2 + value5;
					result3 = result3 + value6;
              				printf("\n");
              				printf("\nresult : %di + %dj + %dk\n", result1, result2, result3);
              				printf("\ncontinue?\n");
              				scanf("%s", continu);
              				break;

    				case'-':printf("Enter vector\n");
              				scanf("%d%d%d", &value4, &value5, &value6);
              				printf("%di + %dj + %dk", value4, value5, value6);
              				result1 = result1 - value4;
					result2 = result2 - value5;
					result3 = result3 - value6;
              				printf("\n");
              				printf("\n%di + %dj + %dk", result1, result2, result3);
              				printf("\ncontinue?\n");
              				scanf("%s", continu);
              				break;

				case'*':printf("Enter vector\n");
              				scanf("%d%d%d", &value4, &value5, &value6);
              				printf("%di + %dj + %dk", value4, value5, value6);
              				result1 = result1 * value4;
					result2 = result2 * value5;
					result3 = result3 * value6;
              				printf("\n");
              				printf("\n%di + %dj + %dk\n", result1, result2, result3);
              				printf("\ncontinue?\n");
              				scanf("%s", continu);
              				break;
   		
				case'.':printf("Enter vector\n");
              				scanf("%d%d%d", &value4, &value5, &value6);
              				printf("%di + %dj + %dk", value4, value5, value6);
              				result = result1 * value4 + result2 * value5 + result3 * value6;
              				printf("\n");
              				printf("\n%d\n", result);
              				printf("\ncontinue?\n");
              				scanf("%s", continu);
              				break;

  				case'#':printf("Enter vector\n");
              				scanf("%d%d%d", &value4, &value5, &value6);
              			        printf("%di + %dj + %dk", value4, value5, value6);
              				result1 = result2 * value6 - result3 * value5;
					result2 = result1 * value6 - result3 * value4;
              				result3 = result1 * value5 - result2 * value4;
              				printf("\n");
              				printf("\n%di + %dj + %dk\n", result1, result2, result3);
              				printf("\ncontinue?\n");
              				scanf("%s", continu);
              				break;
  
				case'M':result = value1 * value1 + value2 * value2 + value3 * value3;
             				result = sqrt(result);
             				printf("\n");
              				printf("\n%d\n", result);
              				printf("\ncontinue?\n");
              				scanf("%s", continu);
              				break;
				default:printf("ERROR");
              				continu[0] = 'N';
              				break;
			}
		}
		else {
			printf("ERR");
       			system("clear");                                      
      			printf("continue?\n");
      			scanf("%s", continu);                           
		}                                          
		if(continu[0] != ('Y' || 'y') && continu[0] != ('N' || 'n')) {
			printf("\nERR\n");

		}	

 	}
	while(continu[0] != 'N');
	printf("\n EXIT PRESS C and for more press any key\n");         
	scanf("%s", continu);
    	if(continu[0] == 'C') {
    		return ;
	}
    	else {
       		goto VECTOR;
	}              
	return ;

}

void statistics() {
    	
	int choice; 
    	float result;
    	char yes_or_no;
    	do {
    		printf("1-> MEAN\n2-> MEDIAN\n3-> MODE\n4-> STANDARD DEVIATION\n");
        	printf("5-> VARIENCE\n");
        	scanf("%d", &choice);
        	switch(choice) {
        		case 1: mean();
            			break;
        		case 2: median();
            			break;
        		case 3: mode();
            			break;
        		case 4: result = standard_deviation();
            			printf("standard deviation is : %f\n", result);
            			break;
        		case 5: variance();
            			break;
        		default:
            			printf("error\n"); 
        	}
		printf("continue ? Y/N\n");   
        	scanf("%c", &yes_or_no);
        }
	while((yes_or_no == 'Y') || (yes_or_no == 'y'));
	return ;
}

void mean() {  
    	
	int value[200], totalnumber, i, j;
    	float result, sum = 0;
    	printf("enter the total number of data which you want to enter here, it should not exceed 200\n");
    	scanf("%d", &totalnumber);
   	if((totalnumber >= 1) && (totalnumber <= 200)) {
		for(i = 0; i < totalnumber; i++) {
        		printf("enter your data\n");
        		scanf("%d", &value[i]);
    		}
    		for(j = 0; j < totalnumber; j++) {
        		sum = (sum + value[j]);
        		result = sum / totalnumber;
    		}
		printf("mean :%f\n\n", result);
	}
	else {
    		printf("error\n");
	}
}

void median() { 
    	
	int totalnumber, value[200], i, j, k, p, temp = 0, result;
    	printf("enter the total no of data which you want to enter,  it  should  not  exceed 200\n");
    	scanf("%d", &totalnumber);
    	for(i = 0; i < totalnumber; i++) {
        	printf("enter your data\n");
        	scanf("%d", &value[i]);
    	}
    	for(j = 0; j < totalnumber - 1 ; j++) {
        	for(k = 0; k < totalnumber - j - 1; k++) {
            		if(value[ k ] > value[k + 1]) {
        			temp = value[k];
        			value[k] = value[k + 1];
        			value[k + 1] = temp;
    			}
        	}
	}
    	for(p = 0; p < totalnumber; p++) {
        	printf("%d\n", value[p]);
	}
    	if(totalnumber % 2 != 0) {
        	result = value[totalnumber / 2];
        	printf("result : %d" , result);
	}
    	else {
        	result = (value[totalnumber / 2] + value[totalnumber / 2 + 1]) / 2;
            	printf("median = %d\n", result );
	}
}

void mode() { 
    	
	int totalnumber, value[200] = {0}, mode, max = 0, newarray[200] = {0}, i, j, k = 0, c;
    	printf("enter total number of data which you want to calculate, it must not exceed 200\n");
    	scanf("%d", &totalnumber);
    	for(i = 0; i < totalnumber; i++) {
        	printf("enter your data\n");
        	scanf("%d", &value[i]);
	}
	for(i = 0; i < totalnumber - 1; i++) {
        	mode = 0;
        	for(j = i + 1; j < totalnumber; j++) {
            		if(value[i] == value[j]) {
                		mode++;
            		}
        	}
        	if((mode > max) && (mode != 0)) {
            		k = 0;
            		max = mode;
            		newarray[k] = value[i];
            		k++;
        	}
        	else if(mode == max) {
            		newarray[k] = value[i];
            		k++;
        	}
    	}
    	for(i = 0; i < totalnumber; i++) {
        	if(value[i] == newarray[i])
            		c++;
    	}
    	if(c == totalnumber)
        	printf("there is no mode\n");
        else {
            	printf("mode : \n");
            	for(i = 0; i < k; i++)
                printf("%d\n", newarray[i]);
        }
}

float standard_deviation() { 
    	
	int i, j;
    	float meanvalue, sum = 0, anothersum = 0, finalvalue, result, value[200], totalnumber;
    	printf("enter the total number of data which you want to calculate, it should not cross 200\n");
    	scanf("%f", &totalnumber);
    	for(i = 0; i < totalnumber; i++) {
        	printf("enter your data\n");
        	scanf("%f", &value[i]);
    	}
    	for(j = 0; j < totalnumber; j++) {
        	sum = (sum + value[j]);
        	meanvalue = sum / totalnumber;
    	}
    	for(i = 0; i < totalnumber; i++) {
        	anothersum += ((value[i] - meanvalue) * (value[i] - meanvalue));
    	}
    	finalvalue = anothersum / (totalnumber - 1);
    	result = sqrt(finalvalue);
    	return result;
}

void variance() { 
   	
	float result, finalresult;
   	result = standard_deviation();
   	finalresult = result * result;
   	printf("varience :  %f\n " , finalresult);
}

void graphical() {    
	
	char choice[1], choose[1];
	SH0:    
	printf("1:DISTANCE BETWEEN TWO POINTS\n");
        printf("  SLOPE-INTERCEPT\n");
        printf("  MID POINT & EQUATION OF A LINE\n");
        printf("2:BEST FIT CURVE\n\n");
  	SH1:   
	scanf("%s", choice);
        if(choice[0] == '1') {
		slopeintercept();
	}
       	 else if(choice[0] == '2') {
		bestfit();
	}
        else {
		printf("ERR\n");
        	printf("ENTER CHOICE\n");
              	goto SH1;
	}
    	SH2:
	printf("\n\n CONTINUE(Y\\N)\n");
        scanf("%s", choose);
        if(choose[0] == 'Y' || choose[0] == 'y')
           	goto SH0;
        if(choose[0] == 'N' || choose[0] == 'N') {
		system("clear");
            	return;
	}
        else {
		printf("ERR\n");
                goto SH2;
	}
}

void slopeintercept() {
    	
	char choice[0];
    	char yes_no[1];
    	double x1, x2, y1, y2, result, result2;
	chc:   	
        printf("1--> distance between two pointsn\n2--> slope\n3--> intercept\n");
        printf("4--> equation of straight line\n5--> midpoint\n");
        scanf("%s", choice);
        switch(choice[0]) {
        	case'1':distance();
                	chc0:     
			printf("continue? Y/N\n");
                        scanf("%s", yes_no);
                        if((yes_no[0] == 'y') || (yes_no[0] == 'Y')) {
                                system("clear");
                                goto chc;
                        }
                        else if ((yes_no[0] == 'n') || (yes_no[0] == 'N'))
                                printf("thank you\n");
                        
                        else {
                                printf("sorry, wrong input\n");
                                goto chc0 ;
                        }
                        break;

       		case'2':printf("for first point  (x, y) = \n");
                        scanf("%lf%lf",  &x1, &y1);
                        printf("for second point (x,y) = \n");
                        scanf("%lf%lf", &x2, &y2);
                        result = slope(x1, y1, x2, y2);
                        if (result != 0) {
                     		printf("slope : %lf\n", result);
			}
                	chc1:   
			printf("continue? Y/N\n");
                        scanf("%s", yes_no);
                        if((yes_no[0] == 'y') || (yes_no[0] == 'Y')) {
                                system("clear");
                                goto chc;
			}
                        else if	((yes_no[0] == 'n') || (yes_no[0] == 'N'))
                                printf("thank you\n");
			
                        else {
                        	printf("sorry, wrong input\n");
                                goto chc1 ;
			}
                        break;
          	case'3':printf("for first point  (x,y) = \n");
                        scanf("%lf%lf", &x1, &y1);
                        printf("for second point (x,y) = \n");
                        scanf("%lf%lf", &x2, &y2);
                        result2 = intercept(x1, y1, x2, y2);
                        printf("intercept is : %lf\n", result2);
                  	chc2: 
			printf("continue? Y/N\n");
                        scanf("%s", yes_no);
                        if((yes_no[0] == 'y') || (yes_no[0] == 'Y')) {
                        	system("clear");
                                goto chc;
			}
                   	else if((yes_no[0] == 'n') || (yes_no[0] == 'N'))
                        	printf("thank you\n");			
                        else {
                                printf("sorry, wrong input\n");
                                goto chc2 ;
			}
                    	break;
         	case'4':equation();
                        chc3: 
			printf("continue? Y/N\n");
                      	scanf("%s", yes_no);
                        if((yes_no[0] == 'y') || (yes_no[0] == 'Y')) {
                        	system("clear");
                                goto chc;
			}
                        else if((yes_no[0] == 'n') || (yes_no[0] =='N'))
                       		printf("thank you\n");
                        else {
                          	printf("sorry, wrong input\n");
                           	goto chc3 ;
			}
                    	break;
           	case'5':midpoint();
                 	chc4: 
		  	printf("continue? Y/N\n");
                        scanf("%s", yes_no);
                        if((yes_no[0] == 'y') || (yes_no[0] == 'Y')) {
                        	system("clear");
                        	goto chc;
			}
                        else if((yes_no[0] == 'n') || (yes_no[0] == 'N'))
                          	printf("thank you\n");
                        else {
                              	printf("sorry, wrong input\n");
                                goto chc4 ;
			}
                        break;

           	default:printf("wrong Input\n");
                        D1:     
			printf("CLR?(Y/N)\n");
                        scanf("%s", yes_no);
                        if((yes_no[0] == 'y') || (yes_no[0] == 'Y')) {
                        	system("clear");
                         	goto chc;
			}
                        else if((yes_no[0] == 'n') || (yes_no[0] == 'N'))
                           	/*goto chc;*/
				return;
                        else
                            	goto D1;
       	}
	return ;
}

void distance() {
    	
	char yes_no;
    	double x1, x2, y1, y2;
    	double result;
    	printf("for first point  (x, y) = \n");
        scanf("%lf%lf", &x1, &y1);
        printf("for second point (x, y) = \n");
        scanf("%lf%lf", &x2, &y2);
        result = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
        printf("distance : %lf\n" , result);
}
double slope(double x1, double y1, double x2, double y2) {
	
	double result, result1, result2;
     	if((x1 == x2) && (y1 == y2)) {
        	printf("two points are same\n");
    		return 0;
     	}
        else if(x2 == x1) {
		printf("line will be vertical, so slope is undefined\n");
            	return 0;
	}
        else {
            	result = (y2 - y1) / (x2 - x1);
            	if (result == 0) {
                	printf("line is horizontal, so slope is 0 \n");
                	return 0;
        	}
        	return result;
	}
}
double intercept(double x1, double y1, double x2, double y2) {
	
	double result, m;
        m = slope(x1, y1, x2, y2);
        result = (y2 - (m * x2));
        return result;
}
void equation() {
        
	int choice;
      	printf("press 1--> slope intercept form\n2-->point slope form\n");
        scanf("%d", &choice);
        if((choice > 2) || (choice < 1))
        	printf("error\n");
        else {
        	switch(choice) {
                	case 1:	slope_intercept();
                    		break;
                	case 2:	point_slope();
                    		break;
                    	default:printf("error\n");
            	}
	}
}

void slope_intercept() {
    	
	double x1, y1, x2, y2, m, b;
      	printf("for first point  (x, y) =  ");
        scanf("%lf%lf", &x1, &y1);
        printf("for second point (x, y) = \n");
        scanf("%lf%lf", &x2, &y2);
        m = slope(x1, y1, x2, y2);
        b = intercept(x1, y1, x2, y2);
        printf("y= %lfx + %lf", m, b);
}
void point_slope() {
    	
	double x1, x2, y1, y2, result, m;
        printf("for first point  (x, y) = \n ");
        scanf("%lf%lf", &x1, &y1);
        printf("for second point (x, y) = \n");
        scanf("%lf%lf", &x2, &y2);
        m = slope(x1, y1, x2, y2);
        printf("y - %lf = %lf(x - %lfx1)\n", y1, m, x1);
}
void midpoint() {
    	
	double midpoint1, midpoint2, x1, x2, y1, y2;
        printf("for first point  (x, y) = \n ");
        scanf("%lf%lf", &x1, &y1);
        printf("for second point (x, y) = \n");
        scanf("%lf%lf", &x2, &y2);
        midpoint1 = (x1 + x2) / 2;
        midpoint2 = (y1 + y2) / 2;
        printf("midpoint is (%lf,%lf) \n", midpoint1, midpoint2);
}

void bestfit() {
    	
	char choice[1];
    	char yes_no;
 	cnc:   
	printf("1--> linear best fit equation\n");
        scanf("%s", choice);
        if((choice[0] >= '2') || (choice[0] < '0')) {
        	printf("wrong input\n");
                printf("want to continue? Y/N \n");
                scanf("%s", &yes_no);
                if((yes_no == 'y') || (yes_no == 'Y'))
                	goto cnc;
                else if((yes_no == 'n') || (yes_no == 'N')) {
                	printf("thank you\n");
		}
                else {
                	printf("sorry wrong input\n");
                        goto cnc;
              	}
    	}
        if(choice[0] == '1') {
           	switch (choice[0]) {
                    	case'1':linear_best_fit_equation();
                  		cnc1:      
				printf("want to continue? Y/N\n");
                        	scanf("%s", &yes_no);
                        	if((yes_no=='y')||(yes_no=='Y'))
                            		goto cnc;
                        	else if((yes_no=='n')||(yes_no=='N')) {
                                	printf("thank you\n");
                                	system("clear");
                                	return ;
                       		}
                        	else {
                                	printf("sorry wrong input\n");
                                	goto cnc1;
                        	}
                        	break;
                    	default:printf("sorry wrong input\n");
                        	goto cnc;
                        	system("clear");
                        	break;
                }
   	}
    	return ;
}
void linear_best_fit_equation() {
    	
	int number;
    	double sum_of_x = 0, sum_of_y = 0, mult = 0, sum_of_square = 0,
    	       slope, intercept, r_for_log, a_for_log,
    	       sum_of_square_of_y = 0, corelation_coefficient;
    	int i, j, k, p, q, m, l, h;
    	double * new_memory_for_x_values;
    	double *new_memory_for_y_values;
    	double *new_memory_for_log_value;
    	
	printf("enter total number of data\n");
    	scanf("%d", &number);
    	new_memory_for_x_values = (double *)malloc (sizeof(double) * (number));
    	new_memory_for_y_values = (double *)malloc (sizeof(double) * (number));
    	printf("enter values of x co-ordinate (x1,x2,x3...)\n");
    	for(i = 0; i < number; i++) {
        	scanf("%lf", &new_memory_for_x_values[i]);
    	}
    	printf("enter values of y co-ordinate (y1,y2,y3...)\n");
    	for(j = 0; j < number; j++) {
       		scanf("%lf", &new_memory_for_y_values[j]);
    	}
    	for(k = 0; k < number; k++) {
        	sum_of_x = sum_of_x + new_memory_for_x_values[k];
        	sum_of_y = sum_of_y + new_memory_for_y_values[k];
    	}
   	for(p = 0; p < number; p++) {
       		mult = mult + (new_memory_for_x_values[p] * new_memory_for_y_values[p]);
   	}
   	for(q = 0; q < number; q++) {
       		sum_of_square = sum_of_square + (new_memory_for_x_values[q] * new_memory_for_x_values[q]);
   	}
    	for(h = 0; h < number; h++) {
       		sum_of_square_of_y = sum_of_square_of_y + (new_memory_for_y_values[h] * new_memory_for_y_values[h]);
   	}
	slope = ((number * mult) - (sum_of_x * sum_of_y)) / ((number * sum_of_square) - (sum_of_x * sum_of_x));
	printf("slope is:%lf\n", slope);
	intercept = ((sum_of_y - (slope * sum_of_x)) / number);
	printf("intercept is : %lf\n", intercept);
	printf("linear regression line is\n y = %lfx + %lf", slope, intercept);
	
	corelation_coefficient = ((number * mult) - (sum_of_x * sum_of_y)) / ((sqrt((number * sum_of_square) - (sum_of_x * sum_of_x))) * (sqrt((number *   				 sum_of_square_of_y) - (sum_of_y * sum_of_y))));
	
	printf("co-relation coefficient is : %lf", corelation_coefficient);
	printf("\n\n");
}

void differential() {   
	
	long double a, b, c, g, f;
    	char choice[1];
 	DF1:
	printf(" Differential program with form a d2x/dy2 + b dy/dx + cy = 0\n\n");
    	printf("ENTER %Lf, %Lf, %Lf\n\n", a, b, c);
    	scanf("%Lf, %Lf, %Lf", &a, &b, &c);

    	if (a != 0) {
        	long double d, e;
        	d = b * b - 4 * a * c;
        	if (d >= 0) {
        		e = sqrt(d);
        		f = ( - b + e) / (2 * a);
        		g = ( - b - e) / (2 * a);
        	}
        	else {
            		e = sqrt(- d);
            		f = ( - b / 2 * a);
            		g = e / (2 * a);
		}
        	if(f == g && d > 0) {
            		printf("y=(c1+c2)exp(%Lfx)\n", f);
            		printf("c1 & c2 are constants to be determined by boundary condition\n");
		}
        	if(f == g && d < 0) {
            		printf("y=(c1+c2)exp(%Lf+i %Lfx)\n\n", f, e);
            		printf("c1 & c2 are constants to be determined by boundary condition\n");
		}
        	else if (d < 0) {
            		printf("y=c1exp(%Lf+i%Lfx)+c2exp(%Lf-i%Lfx)\n", f, g, f, g);
            		printf("c1 & c2 are constants to be determined by boundary condition\n");
		}
        	if (d >= 0) {
            		printf("y=c1exp(%Lfx)+c2exp(%Lfx)\n", f, g);
            		printf("c1 & c2 are constants to be determined by boundary condition\n");
        	}
	}
    	else {
        	long double s;
        	s = - c / b;
        	if(b != 0) {
			printf(" y=c1exp(%Lfx)\n", s);
        		printf("Where c1 is constant to be determined by boundary conditions\n");
        	}
        	else {
            		printf(" y = 0\n");
        	}
	}
	DF2:
	printf("CONTINUE\n");
    	scanf("%s", choice);
    	if(choice[0] == 'Y' || choice[0] == 'y') {
		system("clear");
        	goto DF1;
	}
    	else if(choice[0] == 'N' || choice[0] == 'n') {
		system("clear");
        	return ;
	}
	else 
		printf("ERR\n");
         	goto DF2;
    		return  ;
}

void geometric() {   
	
	char choice[1], choose[1];
 	G0:
	printf("1:AREA-VOLUME\n2:COORDINATE CONVERSION\n");
    	printf("3:POLYNOMIAL(UPTO 2 DEGREE)\n\n");
 	G1:
	scanf("%s", choice);
    	if(choice[0] == '1') {
        	areavolume();
	}
  	else if(choice[0] == '2') {
		coordinate();
	}
   	else if(choice[0] == '3') {
        	polynomial();
	}
   	else {
		printf("ERR\nENTER CHOICE\n");
        	goto G1;
	}
	G2: 
	printf("CONTINUE WITH GEOMETRIC AND UTILITIES\n");
    	scanf("%s", choose);
    	if(choose[0] == 'Y' || choose[0] == 'y') {
        	system("clear");
        	goto G0;
	}
    	else if(choose[0] == 'N' || choose[0] == 'n') {
        	system("clear");
        	return ;
	}
    	else {
        	printf("ERR\n");
        	goto G2;
	}
}

void areavolume() {
   	
	char choice[1], choose[1];
	A1:
	printf("1:AREA\n2:VOLUME\n\n");
   	scanf("%s", choice);
   	if(choice[0] == '1') {
   		area();
	}
   	if(choice[0] == '2') {
   		volume();
	}
	A2:
	printf("\nCONTINUE WITH THIS?Y/N\n");
   	scanf("%s", choose);
   	if(choose[0] == 'Y' || choose[0] == 'y') {
    		system("clear"); 
    		goto A1;
	}
    	else if(choose[0] == 'N' || choose[0] == 'n') {
    		return ;
	}
    	else {
        	printf("ERR\n\n");
        	goto A2;
	}
}
void area() {
  	
	char choice[1];
        printf("1.2-D objects\n2.3-D objects\n");
        scanf("%s", choice);
    	if(choice[0] == '1')
        	area_for_twodimensional_objects();
    	else if(choice[0] == '2')
        	area_for_threedimensional_objects();
   	else {
        	printf("error\n");
        }	
    	return;
}

void volume() {   
        char choice[1];
        printf("1 .3-D objects\n");
        scanf("%s", choice);
     	if(choice[0] == '1') {
        	volume_for_threedimensional_objects();
        }
    	else 
		printf("error\n");
    	return;
}
void area_for_twodimensional_objects() {   
        
	char choice[1];
	printf("1-square    2-rectangle     3-circle   4-triangle  5-ellipse 6-parallelogram\n");
        scanf("%s", choice);
	switch (choice[0]) {
    		case'1':area_of_square();
        		break;
    		case'2':area_of_rectangle();
        		break;
    		case'3':area_of_circle();
        		break;
    		case'4':area_of_triangle();
        		break;
    		case'5':area_of_ellipse();
        		break;
    		case'6':area_of_parallelogram();
        		break;
    		default:printf("error\n");  
        		break;
	}
    	return;
}

void area_for_threedimensional_objects() {
    	
	char choice[1];
       	printf("1-cube\n2-cone\n3-cuboid\n4-cylinder\n5-sphere\n\n");
	scanf("%s", choice);
        switch (choice[0]) {
    		case'1':area_of_cube();  
        		break;
    		case'2':area_of_cone(); 
       	 		break;
    		case'3':area_of_cuboid();
        		break;
    		case'4':area_of_cylinder(); 
        		break;
    		case'5':area_of_sphere();
        		break;
        	default:printf("error\n"); 
        		break;
        }
    	return;
}

void area_of_square() {   
   	double length, area;
       	scanf("%lf", &length);
       	area = length * length;
       	printf("area = %lf\n", area);
       	return;
}

void area_of_rectangle() {  
       	double length, width, area;
       	scanf("%lf", &length);
       	scanf("%lf", &width);
       	area = length * width;
       	printf("area = %lf\n", area);
       	return;
}

void area_of_circle() { 
       	double radius, result;
       	scanf("%lf", &radius);
       	result = 3.14 * radius * radius;
 	printf("area = %lf\n", result);
       	return;
}

void area_of_triangle() { 
       	double base, height, result;
       	scanf("%lf%lf", &base, &height);
       	result = .5 * base * height;
       	printf("area = %lf\n", result);
       	return;
}

void area_of_ellipse() { 
       	double semimajoraxis, semiminoraxis, result;
       	printf("enter value of semi-major axis and semi-minor axis\n");
       	scanf("%lf%lf", &semimajoraxis, &semiminoraxis);
       	result = 3.14 * semimajoraxis * semiminoraxis;
       	printf("area = %lf\n", result);
       	return;
}

void area_of_parallelogram() {
       	double base, height, result;
       	scanf("%lf%lf", &base, &height);
       	result = base * height;
       	printf("area = %lf\n", result);
       	return;
}

void area_of_cube() {
       	double edge, result;
       	scanf("%lf", &edge);
       	result = 6 * edge * edge;
       	printf("area = %lf\n", result);
       	return ;
}	
void area_of_cuboid() {
       	double length, width, height, result;
        scanf("%lf%lf%lf", &length, &width, &height);
       	result = (2 * length * width) + (2 * length * height) + (2 * width * height);
       	printf("area = %lf\n", result);
       	return;
}

void area_of_cylinder() { 
       	double radius, height, result;
       	printf("enter radius and height of cylinder\n");
       	scanf("%lf%lf", &radius, &height);
       	result = (2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius);
       	printf("area = %lf\n", result);
       	return;
}	

void area_of_sphere() { 
       	double radius, result;
       	printf("enter radius\n");
       	scanf("%lf", &radius);
       	result = 4 * 3.14 * radius * radius;
       	printf("area = %lf\n", result);
       	return;
}

void area_of_cone() {
       	double radius, height, sum, value, result;
       	printf("enter radius & height of cone\n");
       	scanf("%lf%lf", &radius, &height);
       	sum = (height * height) + (radius * radius);
       	value = sqrt(sum);
       	result = 22.7 * radius * (radius + value);
       	printf("area = %lf\n", result);
       	return;
}

void volume_for_threedimensional_objects() { 
        char choice[1];
        printf("1-cube\n2-cone\n3-cuboid\n4-cylinder\n5-sphere\n ");
        scanf("%s", choice);
    	switch(choice[0]) {
        	case'1':cube();
           		break;
        	case'2':cone();
            		break;
        	case'3':cuboid();
            		break;
        	case'4':cylinder();
            		break;
        	case'5':sphere();
            		break;
        	default:printf("error\n");
            		break;
    	}
    	return ;
}

void cuboid() {  
         double length, width, height, result;
         printf("enter length , width , height of cuboid\n");
         scanf("%lf%lf%lf", &length, &width, &height);
         result = length * width * height;
         printf("volume = %lf\n ", result);
         return;
}

void cube() {   
         double side, result;
         printf("enter length of side\n");
         scanf("%lf", &side);
         result = side * side * side;
         printf("volume = %lf\n ", result);
         return;
}

void cylinder() { 
         double radius, height, result;
         printf("enter radius, height of cylinder\n ");
         scanf("%lf%lf", &radius, &height);
         result = 3.14 * radius * radius * height;
         printf("volume = %lf\n ", result);
         return;
}

void cone() {
         double radius, height, result;
         printf("enter radius, height of cone\n");
         scanf("%lf%lf", &radius, &height);
         result = 3.14 * radius * radius * height / 3;
         printf("volume = %lf\n ", result);
         return;
}

void sphere() { 
         double radius, result;
         printf("enter radius of sphere\n");
         scanf("%lf", &radius);
         result = 4 / 3 * 3.14 * radius * radius * radius;
         printf("volume = %lf\n ", result);
         return;
}

void coordinate() {   
	char choice[1];
    	Coord_conver();
 	C1:
	printf("CONTINUE WITH COORDINATE CONVERSION\n");
    	scanf("%s", choice);
    	if(choice[0] == 'Y' || choice[0] == 'y') { 
		system("clear");
        	goto C1;
	}
    	else if(choice[0] == 'N' || choice[0] == 'n') {
        	system("clear");
        	return;
	}
    	else {
		printf("ERR\n");
		goto C1;
	}
}

void Coord_conver() {
   	double x, y, z, p , q, s, r, O, w;
	char choice[1], choice2[1], anglechoice[1], repeat[1];
    	do {
    		system("clear");
    		printf("1:CARTESIAN <-> SPHERICAL\t ");
    		printf("2:CARTESIAN <-> CYLINDRICAL\n\n");
    		printf("3:SPHERICAL <-> CARTESIAN\t");
    		printf("4:SPHERICAL <-> CYLINDRICAL\n\n");
    		printf("5:CARTESIAN <-> POLAR\n");
		L0: 
		scanf("%s", choice);
		switch(choice[0]) {
    			case '1': L1 : printf("1:CARTESIAN -> SPHERICAL\n");
            			printf("2:CARTESIAN <- SPHERICAL\n");
            			scanf("%s", choice2);

				if(choice2[0] == '1') {
            				printf("\nENTER x, y, z\n");
            				scanf("%lf%lf%lf", &x, &y, &z);
            				p = pow(x, 3) + pow(y, 2) + pow(z, 2);
           	 			p = sqrt(p);
            				q = acos(z / p);
            				s = atan(y / x);
            				printf("ENTER COORDINATES\n %lf\n%lf\n%lf\n" , p, q, s);
            				printf("\nENTER COORDINATES\n %lf %lf %lf",p , q * 180 / 3.14 , s * 180 / 3.14);
				}
            			else if(choice2[0] == '2') {   
					printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                			scanf("%s", anglechoice);
                			printf("ENTER p, q, s\n");
                			scanf("%lf%lf%lf", &p, &q, &s);
                			if(anglechoice[0] == '1') {
                    				q = 3.14 / 180 * q;
                    				s = 3.14 / 180 * s;
                			}
                			x = p * sin(q) * cos(s);
                			y = p * sin(q) * sin(s);
                			z = r * cos(q);
                			printf("\nRESULT:%lf\n%lf\n%lf\n ", x, y, z);
            			}
            			else { 
					printf("ERR\n");
                 			goto L1;
                		}
                		printf("\nCONTINUE?PRESS 1 ELSE SKIP \n");
                		scanf("%s", repeat);
                		if(repeat[0] == '1')
                    			goto L1;
                			break;
			case '2':L2:printf("1:CARTESIAN -> CYLINDRICAL\n");
              			printf("2CARTESIAN <- CYLINDRICAL\n");
              			scanf("%s", choice2);
              			if(choice2[0] == '1') {
                	  		printf("ENTER x, y, z\n");
                  			scanf("%lf%lf%lf", &x, &y, &z);
					r = pow(x, 2) + pow(y, 2);
             	  			r = sqrt(r);
               				O = atan(y / x);
               				w = z;
              				printf("\nRESULT IN DEGREE\n %lf,%lf,%lf", r, O, w);
              				printf("\nRESULT IN RADIAN\n %lf %lf %lf\n", r, O * 180 / 3.14, w);
           	   		}
              			else if(choice2[0] == '2') {
              				printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                			scanf("%s", anglechoice);
                  			printf("enter r, O, w\n");
                  			scanf("%lf%lf%lf", &r, &O, &w);
                  			if(anglechoice[0] == '1') {
                      				O = O * 3.14 / 180;
                  			}
                  			x = r * cos(O);
                  			y = r * sin(O);
                  			z = w;
                 			printf("RESULT:%lf\n%lf\n%lf \n", x, y, z);
            	  		}
               	 	 	else {
                       			printf("ERR\n");
                       			goto L2;
                      		}
                      		printf("\nCONTINUE?PRESS 1 ELSE ANY KEY SKIP\n ");
                		scanf("%s", repeat);
                		if(repeat[0] == '1')
                    			goto L2;
               			 	break;
			case '3':L3:printf("1:SPHERICAL -> CARTESIAN\n");
              			printf("2:SPHERICAL <- CARTESIAN\n");
              			scanf("%s", choice2);
              			if(choice2[0] == '1') {
              		   		printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
              				scanf("%s", anglechoice);
              				printf("ENTER p, q, s\n");
                  			x = p * sin(s * 3.14 / 180) * cos(q * 3.14 / 180);
                 	 		y = p * sin(s) * sin(q * 3.14 / 180);
                  			z = p * cos(s);
                  			printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
              			}
				break;
			case '4':L4:printf("1:SPHERICAL -> CYLINDRICAL\n");
             	 		printf("2:SPHERICAL <- CYLINDRICAL\n");
              			scanf("%s", choice2);
              			if(choice2[0] == '1') {
                			printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                			scanf("%s", anglechoice);
              		  		printf("ENTER p, q, s\n");
                			scanf("%lf%lf%lf", &p, &q, &s);
                 			if(anglechoice[0] == '1') {
                				q = 3.14 / 180 * q;
                    				s=3.14/180*s;
                			}
                			r = p * sin(q);
            		    		O = s;
                			w = p * cos(q);
					printf("\nRESULT IN RADIAN\n %lf\n %lf\n %lf\n", r, O, w);
            				printf("\nRESULT IN DEGREE\n %lf %lf %lf\n", r, O * 180 / 3.14, w);
               			}
            			else if(choice2[0] == '2') {
            				printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                			scanf("%s", anglechoice);
                  			printf("ENTER r, O, w\n");
                  			scanf("%lf%lf%lf", &r, &O, &w);
                  			if(anglechoice[0] == '1') {
                      				O = O * 3.14 / 180;
                  			}
                 			p = pow(r, 2) + pow(w, 2);
                 			p = sqrt(p);
             		    		s = O;
                 			q = atan(r / w);
                 			printf("\nRESULT IN RADIAN\n %lf\n %lf\n %lf\n", p, q, s);
            				printf("\nRESULT IN DEGREE\n %lf %lf %lf\n", p, q * 180 / 3.14, s * 180 / 3.14);
            			}
            			else {
                			printf("wrong choice\n");
                			goto L4;
				}
            			printf("\nCONTINUE?PRESS 1 ELSE ANY KEY SKIP \n");
                		scanf("%s", repeat);
               		 	if(repeat[0] == '1')
                    			goto L4;
                 	   		break;
			case '5':L5:printf("1:CARTESIAN -> POLAR\n");
     		   		printf("2:CARTESIAN <- POLAR\n");
        			scanf("%s", choice2);
                  		printf(" ENTER x, y\n");
        			if(choice2[0] == '1') {
                  			scanf("%lf%lf", &x, &y);
					r = pow(x, 2) + pow(y, 2);
               				r = sqrt(r);
               				O = atan(y / x);
					printf("RESULT IN RADIAN\n%lf\n %lf\n", r, O);
            				printf("\nRESULT IN DEGREE\n %lf %lf", r, O * 180 / 3.14);
              			}
              			else if(choice2[0] == '2') {
              				printf("\n1:HAVE ANGLES IN DEGREE\nANY KEY FOR RADIAN\n");
                			scanf("%s", anglechoice);
                  			printf("ENTER r, O\n");
                  			scanf("%lf%lf", &r, &O);
                  			if(anglechoice[0] == '1') {
                      				O = O * 3.14 / 180;
                  			}
                  			x = r * cos(O);
                  			y = r * sin(O);
                 			printf("RESULT \n%lf\n %lf\n", x, y);
              			}
                 		else {
                       			printf("Wrong Choice\n");
                       			goto L5;
                      		}
                		printf("\nCONTINUE?PRESS 1 ELSE ANY KEY SKIP \n");
                		scanf("%s", repeat);
                		if(repeat[0] == '1')
                    			goto L5;
                      			break;

 			default: {
				printf("ERR\n\nENTER");
             			goto L0;
			}

		}

	}
	while(choice[0]);
	return;
}

void polynomial() {
	
	double a, b, c;
	double x[2];
	char choice[1];
	P1:
	printf("EQUATION FORMAT- aX^2+bX+c=0\n");
	printf("a: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf("%lf", &b);
	printf("c: ");
	scanf("%lf", &c);

	if (quadratic(a, b ,c, x)) {
		printf("\nROOTS ARE:\n");
		printf("root1: %lf\n", x[0]);
		printf("root2: %lf\n", x[1]);
	}
	P2:	
	printf("\nCONTINUE WITH POLYNOMIAL\n");
	scanf("%s", choice);
    	if(choice[0] == 'Y' || choice[0] == 'y') {
		system("clear");
        	goto P1;
	}
    	else if(choice[0] == 'N' || choice[0] == 'n') {
        	system("clear");
        	return;
	}
    	else {
		printf("ERR\n");
		goto P2;
	}
	return ;
}

int quadratic(double a, double b, double c, double Roots[]) {   
	
	char i = 0;
    	double numerator, denominator;
	Roots[0] = (0 - b + numerator) / denominator;
        Roots[1] = (0 - b - numerator) / denominator;
	if( ((b * b) - (4 * a * c)) < 0 ) {
		printf("\nNO REAL ROOTS\n");
		numerator = sqrt((4 * a * c) - (b * b));
		denominator = 2 * a;
		return 0;
	}
	if( (b * b) - (4 * a * c) > 0 ) {
          	printf("REAL DISTINCT ROOTS");
	}
	if( (b * b) - (4 * a * c) == 0 ) {
       		printf("EQUAL ROOTS\n");
	}
	numerator = sqrt( (b * b) - (4 * a * c) );
	denominator = 2 * a;
	if (denominator == 0) {
		printf("ERR\n");
		return 0;
	}
	Roots[0] = (0 - b + numerator) / denominator;
	Roots[1] = (0 - b - numerator) / denominator;
	return 1;
}

