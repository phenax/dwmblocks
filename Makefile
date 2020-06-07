PREFIX ?= /usr/local

output: dwmblocks.c blocks.h
	cc `pkg-config --cflags x11` `pkg-config --libs x11` dwmblocks.c -o dwmblocks
clean:
	rm -f *.o *.gch dwmblocks
install: output
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f dwmblocks $(DESTDIR)$(PREFIX)/bin
	cp -f update-dwmblock $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dwmblocks
	chmod 755 $(DESTDIR)$(PREFIX)/bin/update-dwmblock
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks
