#include "llama.cpp/include/llama.h"
#include "llama.cpp/ggml/include/gguf.h"
// Keryx zero-dup: bind the ggml-vulkan keryx exports (raw handles, tensor GPU
// addresses, queue-mutex-guarded submit). Header is backend-agnostic (no Vulkan
// types leak), so including it is safe even when the vulkan feature is off.
#include "llama.cpp/ggml/include/ggml-vulkan.h"

#ifdef LLAMA_RS_BUILD_COMMON
#include "wrapper_common.h"
#endif
