
function(build_sample sample_name)
    set(sample_target ${sample_name}.exe)
    add_executable(${sample_target} ${sample_name}.cpp )
endfunction()

function(build_sample_boost sample_name)
    set(sample_target ${sample_name}.exe)
    add_executable(${sample_target} ${sample_name}.cpp )
    target_include_directories(${sample_target} PUBLIC /opt/boost)
endfunction()
