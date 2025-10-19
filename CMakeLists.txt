
cmake_minimum_required (VERSION 3.8)

project ("my_first_cmake_project2")

add_executable (geometry_project "main.cpp"  "Figure/Figure.h" "Figure/Figure.cpp" "EquilateralTriangle/EquilateralTriangle.h" "EquilateralTriangle/EquilateralTriangle.cpp" "IsoscelesTriangle/IsoscelesTriangle.h" "IsoscelesTriangle/IsoscelesTriangle.cpp" "Parallelogram/Parallelogram.h" "Parallelogram/Parallelogram.cpp" "Quadrilateral/Quadrilateral.h" "Quadrilateral/Quadrilateral.cpp" "Rectangle/Rectangle.h" "Rectangle/Rectangle.cpp" "Rhomb/Rhomb.h" "Rhomb/Rhomb.cpp" "RightTriangle/RightTriangle.h" "RightTriangle/RightTriangle.cpp" "Square/Square.h" "Square/Square.cpp" "Triangle/Triangle.h" "Triangle/Triangle.cpp")
target_include_directories(geometry_project PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

