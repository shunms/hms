# This makefile does not build the project!
# This is to be used for stuff that 'tweaks' the system, including
# documentation generation, version number magic, etc.

all:build



doc docu:
	doxygen


stamp:
	echo "Not impl. yet."

clean:
	make -f Makefile clean

distclean:
	$(RM) ../doc/api/html/*  ../doc/api/latex/*
	make -f Makefile distclean || echo "No project makefile."
	$(RM) -r .obj/


# this probably only works on unix
commit: distclean
	( cd .. && svn status ) | grep '?'  && exit 1 || exit 0
	cd .. && svn commit
	


build: qmake
	make -f Makefile



project:
	qmake -project -o hms.pro QT+=sql CONFIG+=console \
	      -after "unix:OBJECTS_DIR=.obj" -after "unix:MOC_DIR=.obj" \
	      $(QMORE) $(subst -D,-after DEFINES+=,$(DEFINES))

qmake:
	qmake


rebuild: qmake clean project build




