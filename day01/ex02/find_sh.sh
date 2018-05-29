find . -name "*.sh" | sed -e 's/\.sh//g' | xargs -n1 basename
