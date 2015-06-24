
default:	build

clean:
	rm -rf Makefile objs

build:
	$(MAKE) -f objs/Makefile
	$(MAKE) -f objs/Makefile manpage

install:
	$(MAKE) -f objs/Makefile install

upgrade:
	/Users/illusionismine/Desktop/two-five-o-one/Server/bin/sbin/nginx -t

	kill -USR2 `cat /Users/illusionismine/Desktop/two-five-o-one/Server/bin/logs/nginx.pid`
	sleep 1
	test -f /Users/illusionismine/Desktop/two-five-o-one/Server/bin/logs/nginx.pid.oldbin

	kill -QUIT `cat /Users/illusionismine/Desktop/two-five-o-one/Server/bin/logs/nginx.pid.oldbin`
