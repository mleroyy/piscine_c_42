ldapsearch -Q "uid=z*" | grep "cn:z*" | cut -c 5- | sort -r
