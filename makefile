default:
	@meson compile -C builddir
	@echo "--------------"
	./builddir/cxx_test

reset:
	@meson setup --wipe builddir

setup:
	@meson setup builddir