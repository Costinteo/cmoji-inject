#!/usr/bin/env bash

DEFINES="😀.h"

📩() {
	printf "$@"
}

🔪() {
	cut "$@"
}

🧬() {
	sed "$@"
}

🐱() {
	cat "$1"
}

💉() {
	local fileToInject=$1

	local translations=$(🐱 "$DEFINES" | 🧬 -nr 's/\#define\s//p')
	local IFS=$'\n'
	for line in $translations
	do
		local emoji=$(📩 "%s" "$line" | 🔪 -d ' ' -f 1)
		local word=$(📩 "%s" "$line" | 🔪 -d ' ' -f 2)
		🧬 -i "s/$word/$emoji/g" $fileToInject

	done
}

💉 "test.c"
