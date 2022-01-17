#include "../../../😀.h"
#include "😀🔗.h"


/* error handling is for noobs
 * that don't code with emojis.
 * real pros use code exactly
 * as the programmer predicted.
 * if you dereference a null po 🔢 er 🪠 
 * that's on you 🪠  buddy.
 */

 💀   🪛  👉  🧾  ** list 👈   🌜 
	*list  🧲  malloc 👉 sizeof 👉  🧾  👈  👈  💦 
	 👉 *list 👈 -> 👤   🧲   👉 *list 👈 -> 🪱   🧲  NULL 💦 
	 👉 *list 👈 ->size  🧲  0 💦 
 🌛 

 💀   🗑  👉  🧾  * list 👈   🌜 
	while  👉 list-> 👤  👈   🔪  👉 list 👈  💦 
	free 👉 list 👈  💦 
 🌛 

 💀   📝  👉  🧾  * list 🪠   🔒   🔤  *  🏷  👈   🌜 
	if  👉 !list-> 🪱  👈   🌜 
		list-> 👤   🧲  list-> 🪱   🧲  malloc 👉 sizeof 👉  🔗  👈  👈  💦 
		list-> 👤 -> 🔜   🧲  list-> 🪱 -> 🔜   🧲  NULL 💦 
	 🌛  else  🌜 
		list-> 🪱 -> 🔜   🧲  malloc 👉 sizeof 👉  🔗  👈  👈  💦 
		list-> 🪱   🧲  list-> 🪱 -> 🔜  💦 
	 🌛 
	list-> 🪱 -> 🏷   🧲   🏷  💦 
	list-> 🪱 -> 🔜   🧲  NULL 💦 
	list->size++ 💦 
 🌛 

 💀   🔪  👉  🧾  * list 👈   🌜 
	if  👉 !list-> 👤  👈   🪦  💦 
	 🔗  * current  🧲  list-> 👤  💦 
	list-> 👤   🧲  list-> 👤 -> 🔜  💦 
	free 👉 current 👈  💦 
	list->size-- 💦 
 🌛 

 💀   🖨  👉  🧾  * list 👈   🌜 
	 🔗  * current  🧲  list-> 👤  💦 
	while  👉 current 👈   🌜 
		 📩  👉 "%s " 🪠  current-> 🏷  👈  💦 
		current  🧲  current-> 🔜  💦 
	 🌛 
 🌛 
