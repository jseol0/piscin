ifconfig -a | grep 'ether ' | sed 's/.*ether //g' | cut -d' ' -f1
