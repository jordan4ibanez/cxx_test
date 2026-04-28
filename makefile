default:
	@meson compile -C build
	@echo "-------------- PROGRAM START --------------"
	@./build/cxx_test

clean:
	@CXX="clang++ -stdlib=libc++" CC="clang" meson setup --wipe build