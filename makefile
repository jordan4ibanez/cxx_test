default:
	@meson compile -C build
	@echo "-------------- PROGRAM START --------------"
	@./build/cxx_test

reset:
	@CXX="clang++ -stdlib=libc++" CC="clang" meson setup --wipe build

setup:
	@meson setup build