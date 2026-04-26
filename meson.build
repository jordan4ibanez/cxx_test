project(
  'cxx_test',
  'cpp',
  version : '0.1',
  meson_version : '>= 1.3.0',
  default_options : [
    'warning_level=3', 
    'cpp_std=c++23'
    ],
)

dependencies = [
]

sources = [
  'cxx_test.cpp',
]

exe = executable(
  'cxx_test',
  sources,
  install : true,
  dependencies : dependencies,
)

test('basic', exe)
