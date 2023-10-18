#include "lve_device.h"
#include "lve_pipeline.h"
#include "lve_window.h"

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
    LveWindow lveWindow{WIDTH, HEIGHT, "Vulkan Tutorial"};
    LveDevice lveDevice{lveWindow};

    LvePipeline lvePipeline{lveDevice,
                            "shaders/simple_shader.vert.spv",
                            "shaders/simple_shader.frag.spv",
                            LvePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)};
};
} // namespace lve