cd shaders
rm -rf *.spv

/Users/yangle/SDK/VulkanSDK/1.3.250.1/macOS/bin/glslc simple_shader.vert -o simple_shader.vert.spv
/Users/yangle/SDK/VulkanSDK/1.3.250.1/macOS/bin/glslc simple_shader.frag -o simple_shader.frag.spv