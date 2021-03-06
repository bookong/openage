#ifndef _ENGINE_CONSOLE_DRAW_H_
#define _ENGINE_CONSOLE_DRAW_H_

#include "buf.h"

#include "console.h"
#include "../coord/camhud.h"
#include "../font.h"
#include "../util/fds.h"

namespace openage {
namespace console {

namespace draw {

/**
 * experimental and totally inefficient opengl draw of a terminal buffer.
 */
void to_opengl(Console *console);

/**
 * very early and inefficient printing of the console to a pty.
 */
void to_terminal(Buf *buf, util::FD *fd,
                 bool clear=false);

} //namespace draw
} //namespace console
} //namespace openage

#endif //_ENGINE_CONSOLE_DRAW_H_
