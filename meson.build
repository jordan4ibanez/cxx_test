project(
  'cxx_test',
  'cpp',
  version : '0.1',
  meson_version : '>= 1.3.0',
  default_options : [
    'buildtype=debug',
    'warning_level=3', 
    'cpp_std=c++26',
    'cpp_args=-stdlib=libc++ -Wno-gcc-install-dir-libstdcxx', # Use LLVM headers, don't tell me about gcc
    'cpp_link_args=-stdlib=libc++ -Wno-gcc-install-dir-libstdcxx -fuse-ld=mold', # Link against LLVM library
    'c_link_args=-fuse-ld=mold'
    ],
)

dependencies = [
]

sources = [
  'src/cxx_test.cpp',
  'src/entity/entity.cpp',
  'src/logic/game_logic.cpp',
]

exe = executable(
  'cxx_test',
  sources,
  install : true,
  dependencies : dependencies,
)

test('basic', exe)
