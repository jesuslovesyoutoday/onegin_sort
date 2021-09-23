cmake_minimum_required(VERSION 3.16)
project(sort)

set(LANGUAGE CXX)

add_executable(sort
    main.c
    input.c
    parser.c
    cmp.c
    output.c
    file_status.c
    qsort.c)
