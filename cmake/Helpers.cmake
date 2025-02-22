
function(build_sample sample_name)
    set(sample_target ${sample_name}.exe)
    add_executable(${sample_target} ${sample_name}.cpp )
    target_link_libraries(${sample_target} PUBLIC ${GTEST_LIB})
endfunction()

# Obsolete as soon we installed boost to a normal place /usr/include/boost/...
#function(build_sample_boost sample_name)
#    set(sample_target ${sample_name}.exe)
#    add_executable(${sample_target} ${sample_name}.cpp )
#    target_include_directories(${sample_target} PUBLIC /opt/boost)
#endfunction()
