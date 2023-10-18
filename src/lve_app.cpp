#include "lve_app.h"

namespace lve {
LveApp::LveApp() {}

LveApp::~LveApp() {}

void LveApp::run() {
    while (!lveWindow.shouldClose()) {
        glfwPollEvents();
    }
}
} // namespace lve