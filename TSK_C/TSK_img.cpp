#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "TSK_img.h"

#include <stdio.h>
#include "tsk/libtsk.h"

void img_open(const char* path)
{
	printf(path);
	char* EO1s[2] = { "C:\\Users\\Matthew\\Desktop\\EO1\\_SOFEX_DOMEX_EX26.2_4GB_MICROSD.E01", "C:\\Users\\Matthew\\Desktop\\EO1\\_SOFEX_DOMEX_EX26.2_4GB_MICROSD.E02" };
	char* EO1[1] = { "C:\\Users\\Matthew\\Desktop\\EO1\\_SOFEX_DOMEX_EX26.2_4GB_MICROSD.E01" };
	
	TSK_IMG_INFO* img = tsk_img_open(1, &EO1, TSK_IMG_TYPE_DETECT, 0);
	//TSK_IMG_INFO* img = tsk_img_open(2, EO1s, TSK_IMG_TYPE_DETECT, 0);
	printf(tsk_error_get());
	printf(tsk_error_get_errstr());
	printf(tsk_error_get_errstr2());

	TSK_VS_INFO* vs;
}


void getInfo(const char* path) {

	char* EO1s[2] = { "C:\\Users\\Matthew\\Desktop\\EO1\\_SOFEX_DOMEX_EX26.2_4GB_MICROSD.E01", "C:\\Users\\Matthew\\Desktop\\EO1\\_SOFEX_DOMEX_EX26.2_4GB_MICROSD.E02" };
	TSK_VS_INFO* vs;

}
