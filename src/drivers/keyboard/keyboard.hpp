#ifndef H_KEYBOARD
#define H_KEYBOARD

#include <stdint.h>

#define KEY_ESC       0x01
#define KEY_BACKSPACE 0x0E
#define KEY_LCTRL     0x1D
#define KEY_RCTRL     0x1D+128
#define KEY_LSHIFT    0x2A
#define KEY_RSHIFT    0x36
#define KEY_FKLSHIFT  0x2A+128
#define KEY_FKRSHIFT  0x36+128
#define KEY_CAPS_LOCK 0x3A
#define KEY_LALT      0x38
#define KEY_RALT      0x38+128
#define KEY_LEFT      0x4B+128
#define KEY_RIGHT     0x4D+128
#define KEY_UP        0x48+128
#define KEY_DOWN      0x50+128


namespace Keyboard
{
    struct Keyboard
    {
        uint8_t CapsLock;
        uint8_t LShift;
        uint8_t RShift;
        uint8_t LCtrl;
        uint8_t RCtrl;
        uint8_t LAlt;
        uint8_t RAlt;
    };

    struct KeyboardKey
    {
        uint8_t CapsLock;
        uint8_t LShift;
        uint8_t RShift;
        uint8_t LCtrl;
        uint8_t RCtrl;
        uint8_t LAlt;
        uint8_t RAlt;
        uint8_t Shift, Ctrl, Alt;
        uint8_t Released;
        uint8_t Scancode;
        uint8_t ASCII;
        uint8_t ASCIIOriginal;
    };

    void CollectEvents(Keyboard *Kbd, KeyboardKey *Keys, uint32_t KeysMax, uint32_t *KeysLen);
    void HandleInterrupt();
}

#endif // H_KEYBOARD