#include "lve_device.h"
#include "lve_pipeline.h"
#include "lve_swapchain.h"
#include "lve_window.h"

// std
#include <memory>
#include <vector>

namespace lve {
class LveApp {
  public:
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT = 600;

    LveApp();
    ~LveApp();

    LveApp(const LveApp &) = delete;
    LveApp &operator=(const LveApp &) = delete;

    void run();

  private:
    void createPipelineLayout();
    void createPipeline();
    void createCommandBuffers();
    void drawFrame();

    LveWindow lveWindow{WIDTH, HEIGHT, "Vulkan Tutorial"};
    LveDevice lveDevice{lveWindow};
    LveSwapchain lveSwapchain{lveDevice, lveWindow.getExtent()};
    std::unique_ptr<LvePipeline> lvePipeline;
    VkPipelineLayout pipelineLayout;
    std::vector<VkCommandBuffer> commandBuffers;
};
} // namespace lve