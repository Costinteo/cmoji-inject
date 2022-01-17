#!/usr/bin/env bash


🛑() {
	exit "$1"
}

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

🤝() {
	[ $# -eq 0 ] && 📩 "No arguments given...\n" && 🛑 1
	DEFINES=$1
	shift
	FILES=$@
	
}

💉() {
	local files=$@
	
	for file in ${files[@]}
	do
		local fileToInject="😀$file"
		echo "#include \"$DEFINES\"" > "$fileToInject"
		cat "$file" >> "$fileToInject"

		local translations=$(🐱 "$DEFINES" | 🧬 -nr 's/\#define\s//p')
		local IFS=$'\n'
		for line in $translations
		do
			[ -n "$(echo "$line" | grep -P -- '^//')" ] && continue
			local emoji=$(📩 "%s" "$line" | 🔪 -d ' ' -f 1)
			local word=$(📩 "%s" "$line" | 🔪 -d ' ' -f 2)
			🧬 -i "s|$word| $emoji |g" "$fileToInject"
		done
		🧬 -i "s|^\/\/.*|\/\/📻🎶🎶🎶🎶|g" "$fileToInject"
	done
}

🤝 "$@"
💉 "${FILES[@]}"
