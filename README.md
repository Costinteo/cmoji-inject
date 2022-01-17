# cmoji-inject 💉

Inject 💉 emoji 😀 into C programs. 0️⃣ 1️⃣

## How it works 🔩🔧

It's actually really simple 🤓. There is a bash 🐚 script included in the "💉" directory, that has to be called on a header full of emoji defines (such as "😀.h" in the root directory of this project) and any .c or .h files. It parses the emoji header and replaces any word that is defined to the emoji counterpart, in the .c and .h files passed to it. This 💯 completely ✨emojifies✨ the files. It keeps the files compilable, as best (not really) as it can. It also includes the emoji define header in the files. Here's how to call it:

```
$ ./💉.sh 😀.h main.c list.h list.c
```

The resulting filenames are the same as the original files, except prepended with an emoji "😀". Then go ahead and compile them using gcc. Note: At this point, the script is too dumb to replace includes, so if using multiple headers, you might wanna rename the includes to use the ✨emojified✨ versions of the headers.

```
$ gcc -o 🛷 main.c list.c
$ ./🛷
YOUR PROGRAM OUTPUT HERE (HOPEFULLY EMOJIS)
```

## Examples 👀

Check out the "📁" directory for examples! In here, you're going to find directories to some C programs that contain both the original source and the ✨emojified✨ source, as well as precompiled ELF binaries, because why not! 🐬

## Contributing 🤝

Send in a pull ↩ request to make the script smarter! It's really dumb 🦧 right now and I'm not going to do anything about it because I REALLY want to stop ⛔ talking like this. I HATE 😡💢 talking 🗣  like this.

See you, Space Cowboy... 🚬
