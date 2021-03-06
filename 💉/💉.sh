#!/usr/bin/env bash


π() {
	exit "$1"
}

π©() {
	printf "$@"
}

πͺ() {
	cut "$@"
}

π§¬() {
	sed "$@"
}

π±() {
	cat "$1"
}

π€() {
	[ $# -eq 0 ] && π© "No arguments given...\n" && π 1
	DEFINES=$1
	shift
	FILES=$@
	
}

π() {
	local files=$@
	
	for file in ${files[@]}
	do
		local fileToInject="π$file"
		echo "#include \"$DEFINES\"" > "$fileToInject"
		cat "$file" >> "$fileToInject"

		local translations=$(π± "$DEFINES" | π§¬ -nr 's/\#define\s//p')
		local IFS=$'\n'
		for line in $translations
		do
			[ -n "$(echo "$line" | grep -P -- '^//')" ] && continue
			local emoji=$(π© "%s" "$line" | πͺ -d ' ' -f 1)
			local word=$(π© "%s" "$line" | πͺ -d ' ' -f 2)
			π§¬ -i "s|$word| $emoji |g" "$fileToInject"
		done
		π§¬ -i "s|^\/\/.*|\/\/π»πΆπΆπΆπΆ|g" "$fileToInject"
	done
}

π€ "$@"
π "${FILES[@]}"
