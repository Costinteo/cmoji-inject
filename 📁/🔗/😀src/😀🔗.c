#include "../../../๐.h"
#include "๐๐.h"


/* error handling is for noobs
 * that don't code with emojis.
 * real pros use code exactly
 * as the programmer predicted.
 * if you dereference a null po ๐ข er ๐ช  
 * that's on you ๐ช   buddy.
 */

 ๐   ๐ช  ๐  ๐งพ  ** list ๐   ๐ 
	*list  ๐งฒ  malloc ๐ sizeof ๐  ๐งพ  ๐  ๐  ๐ฆ 
	 ๐ *list ๐ -> ๐ค   ๐งฒ   ๐ *list ๐ -> ๐ชฑ   ๐งฒ  NULL ๐ฆ 
	 ๐ *list ๐ ->size  ๐งฒ  0 ๐ฆ 
 ๐ 

 ๐   ๐  ๐  ๐งพ  * list ๐   ๐ 
	while  ๐ list-> ๐ค  ๐   ๐ช  ๐ list ๐  ๐ฆ 
	free ๐ list ๐  ๐ฆ 
 ๐ 

 ๐   ๐  ๐  ๐งพ  * list ๐ช    ๐   ๐ค  *  ๐ท  ๐   ๐ 
	if  ๐ !list-> ๐ชฑ  ๐   ๐ 
		list-> ๐ค   ๐งฒ  list-> ๐ชฑ   ๐งฒ  malloc ๐ sizeof ๐  ๐  ๐  ๐  ๐ฆ 
		list-> ๐ค -> ๐   ๐งฒ  list-> ๐ชฑ -> ๐   ๐งฒ  NULL ๐ฆ 
	 ๐  else  ๐ 
		list-> ๐ชฑ -> ๐   ๐งฒ  malloc ๐ sizeof ๐  ๐  ๐  ๐  ๐ฆ 
		list-> ๐ชฑ   ๐งฒ  list-> ๐ชฑ -> ๐  ๐ฆ 
	 ๐ 
	list-> ๐ชฑ -> ๐ท   ๐งฒ   ๐ท  ๐ฆ 
	list-> ๐ชฑ -> ๐   ๐งฒ  NULL ๐ฆ 
	list->size++ ๐ฆ 
 ๐ 

 ๐   ๐ช  ๐  ๐งพ  * list ๐   ๐ 
	if  ๐ !list-> ๐ค  ๐   ๐ชฆ  ๐ฆ 
	 ๐  * current  ๐งฒ  list-> ๐ค  ๐ฆ 
	list-> ๐ค   ๐งฒ  list-> ๐ค -> ๐  ๐ฆ 
	free ๐ current ๐  ๐ฆ 
	list->size-- ๐ฆ 
 ๐ 

 ๐   ๐จ  ๐  ๐งพ  * list ๐   ๐ 
	 ๐  * current  ๐งฒ  list-> ๐ค  ๐ฆ 
	while  ๐ current ๐   ๐ 
		 ๐ฉ  ๐ "%s " ๐ช   current-> ๐ท  ๐  ๐ฆ 
		current  ๐งฒ  current-> ๐  ๐ฆ 
	 ๐ 
 ๐ 
