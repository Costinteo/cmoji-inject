# cmoji-inject π

Inject π emoji π into C programs. 0οΈβ£ 1οΈβ£

## How it works π©π§

It's actually really simple π€. There is a bash π script included in the "π" directory, that has to be called on a header full of emoji defines (such as "π.h" in the root directory of this project) and any .c or .h files. It parses the emoji header and replaces any word that is defined to the emoji counterpart, in the .c and .h files passed to it. This π― completely β¨emojifiesβ¨ the files. It keeps the files compilable, as best (not really) as it can. It also includes the emoji define header in the files. Here's how to call it:

```
$ ./π.sh π.h main.c list.h list.c
```

The resulting filenames are the same as the original files, except prepended with an emoji "π". Then go ahead and compile them using gcc. Note: At this point, the script is too dumb to replace includes, so if using multiple headers, you might wanna rename the includes to use the β¨emojifiedβ¨ versions of the headers.

```
$ gcc -o π· main.c list.c
$ ./π·
YOUR PROGRAM OUTPUT HERE (HOPEFULLY EMOJIS)
```

## Examples π

Check out the "π" directory for examples! In here, you're going to find directories to some C programs that contain both the original source and the β¨emojifiedβ¨ source, as well as precompiled ELF binaries, because why not! π¬

## Contributing π€

Send in a pull β© request to make the script smarter! It's really dumb π¦§ right now and I'm not going to do anything about it because I REALLY want to stop β talking like this. I HATE π‘π’ talking π£  like this.

See you, Space Cowboy... π¬
