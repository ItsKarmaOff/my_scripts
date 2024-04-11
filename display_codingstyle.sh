#!/bin/bash

# Function to set color based on severity
set_color() {
    case $1 in
        " FATAL") echo -e "\033[1;35m" ;;  # Purple
        " MAJOR") echo -e "\033[1;31m" ;;  # Red
        " MINOR") echo -e "\033[1;33m" ;;  # Orange
        " INFO") echo -e "\033[1;36m" ;;   # Blue
        *) echo -e "\033[0m" ;;           # Reset color
    esac
}

# Display coding-style report
input="coding-style-reports.log"
if [ ! -f "$input" ]; then
    echo -e "\033[1;31mError: Input file '\033[0m$input\033[1;31m' not found.\033[0m"
    exit 1
fi

# Report banana result
NB_ERROR=$(cat coding-style-reports.log | wc -l)
if [ $NB_ERROR -gt 0 ]; then
    echo -e "\033[1;31m     $NB_ERROR\033[0m error(s) found."
else
    echo -e "\033[1;36m     0\033[0m error found."
fi

while IFS=':' read -r file line title description; do
    color=$(set_color "$title")  # Get color based on severity
    reset_color=$(set_color)     # Reset color
    echo "$file:$line :$color$title$reset_color:$description:"
done < "$input"
