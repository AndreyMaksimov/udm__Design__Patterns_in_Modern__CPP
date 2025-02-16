# 08_Bridge/CMakeLists.txt

add_subdirectory(044_Pimpl_Idiom)
add_subdirectory(045_Shrink-Wrapped_Pimpl)

set(target_046 046_Bridge_Implementation.exe)
add_executable(${target_046}
        046_Bridge_Implementation.cpp
        044_Pimpl_Idiom/Person.h
        044_Pimpl_Idiom/Person.cpp
)
