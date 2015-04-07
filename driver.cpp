/** 
*  @file driver.cpp
*  @author Georgina Hutchins (hutcgb12)
*  @date 04/21/14
*  @version 1.0
*
*  @brief CSC 112, Lab 11, The PixelList Class
*
*  This driver program tests the PixelList class. 
*    
*  @bug	 No known bugs.
*/



#include <iostream>
#include "pixellist.h"
using namespace std;



int main()
{
	cout << "========= constructor & output tests ======== \n"; 
	
	PixelList list(Pixel(4, 4, 4));
	PixelList list0(Pixel(9, 9, 9));
	PixelList list4(Pixel(5, 6, 7));
	cout << list << '\n';

	cout << "========= appending and replacing tests ======== \n";
	
	list.append(Pixel(8, 8, 8));
	PixelList list2(list);
	cout << "Append: " << '\n';
	cout << list2 << '\n';
	
	list.replace(Pixel(8, 8, 8), Pixel(9, 9, 9));
	PixelList list3(list);
	cout << "Replace: " << '\n';
	cout << list3 << '\n';
	
	cout << "========= assignmemt operator tests ======== \n";

	cout << "List0 = List4:  " << (list0 = list4) << '\n';
	
	cout << "=================== logic tests ================= \n";
	
	PixelList listp1(Pixel(1, 1, 1));
	PixelList listp2(Pixel(1, 1, 1));
	listp2.append(Pixel(2, 3, 4));
	PixelList listp3(listp2);

	cout << "List p1 == List p3:  " << (listp1 == listp3) << '\n';
	cout << "List p1 !== List p3: " << (listp1 != listp3) << '\n';
	cout << "List p1 == List p1:  " << (listp1 == listp1) << '\n';


	cout << "========= operator+ test ======== \n";

	PixelList list5(Pixel(2, 2, 2));
	list5.append(Pixel(4, 4, 4));
	PixelList list6(list5);
	PixelList list7(Pixel(1, 1, 1));
	Pixel p1(10, 10, 10);

	cout << "list2:  " << list2 << '\n';
	cout << "list5:  " << list5 << '\n';
	cout << "list7:  " << list7 << '\n';
	cout << "p1:     " << p1 << '\n' << '\n';

	cout << "Addition:" << '\n';
	cout << "list2 + list5:  " << list2 + list5 << '\n';
	cout << "list2 + list7:  " << list2 + list7 << '\n';
	cout << "list2 + p1:     " << list2 + p1 << '\n' <<endl;

	return 0;

}


