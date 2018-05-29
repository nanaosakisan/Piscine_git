ldapsearch -xLLL "uid=z*" cn | sed -n '/cn/p' | sort -r | cut -c5-
