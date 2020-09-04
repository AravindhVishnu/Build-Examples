.PHONY : all
all:
	cd ./MyStaticLib && make $@
	cd ./MyDLL && make $@
	cd ./MyExperiment && make $@
	echo "All built!"

.PHONY : clean
clean:
	cd ./MyExperiment && make $@
	cd ./MyDLL && make $@
	cd ./MyStaticLib && make $@
	echo "All cleaned!"

.PHONY : rebuild
rebuild: clean all