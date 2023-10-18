cmake_minimum_required(VERSION 3.10)
project(LittleVulkanEngine)

set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_OUTPUT_PATH ../bin)

# glfw
include_directories(/opt/homebrew/include)
link_directories(/opt/homebrew/Cellar/glfw/3.3.8/lib)
# vulkan
include_directories(/Users/yangle/SDK/VulkanSDK/1.3.250.1/macOS/include)
link_directories(/Users/yangle/SDK/VulkanSDK/1.3.250.1/macOS/lib)

set(LIBS
    GLFW
    vulkan
)
file(GLOB SRC_FILES CONFIGURE_DEPENDS src/*.cpp)

add_executable(${CMAKE_PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${CMAKE_PROJECT_NAME} ${LIBS})